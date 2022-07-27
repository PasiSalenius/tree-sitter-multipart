module.exports = grammar({
  name: 'multipart',

  extras: $ => [],

  rules: {
    source_file: $ => optional(
      seq(
        repeat1(
          seq(
            seq($.boundary_delimiter, $._newline),
            repeat($.header),
            $._newline,
            $.body,
          ),
        ),
        $.boundary_delimiter,
        optional(choice($._data, $._newline)),
      ),
    ),

    boundary_delimiter: $ => /--.+/,

    header: $ =>
      seq($.header_name, ':', $._whitespace, $.header_value, $._newline),

    header_name: _ => /[A-Za-z0-9-_]+/,
    header_value: _ => /.*/,

    body: $ => repeat1(choice($._data, $._newline)),

    _whitespace: _ => /\s+/,
    _newline: _ => /\r?\n/,
    _data: _ => /.+/,
  }
});