module.exports = grammar({
  name: 'multipart',

  extras: $ => [],

  rules: {
    source_file: $ => optional(
      seq(
        repeat1(
          seq(
            $.delimiter_line,
            repeat($.header),
            $._newline,
            $.body,
          ),
        ),
        $.delimiter_line,
      ),
    ),

    delimiter_line: $ =>
      seq($.delimiter, $._newline),

    delimiter: $ => /--.+/,

    header: $ =>
      seq($.header_name, ':', $._whitespace, $.header_value, $._newline),

    header_name: _ => /[A-Za-z0-9-_]+/,
    header_value: _ => /.*/,

    body: $ => repeat1(choice($._data, $._newline)),

    _whitespace: _ => /[ \t]+/,
    _newline: _ => choice('\n', '\r', '\r\n', '\0'),
    _data: _ => /.+/,
  }
});