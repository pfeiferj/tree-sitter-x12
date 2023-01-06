module.exports = grammar({
  name: 'x12',

  rules: {
    source_file: $ => repeat1($.segment),
    segment: $ => seq($.segment_identifier,repeat(seq($.data_separator, optional($.data_element))),$.segment_terminator),
    data_element: $ => repeat1(choice(
      choice($.repetition_separator, $.component_separator),
      seq($.data_component, optional(choice($.repetition_separator, $.component_separator)))
    )),
    data_component: $ => prec.right(repeat1($._not_terminator)),
    segment_identifier: $ => /[A-Z0-9]{2,3}/,
    whitespace: $ => /[\s\t\r\n]+/,
  },
  extras: $ => [$.whitespace],
  externals: $ => [
    $.segment_terminator,
    $.data_separator,
    $.component_separator,
    $.repetition_separator,
    $._not_terminator,
  ],
});
