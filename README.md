# tree-sitter-hurl

A tree-sitter parser for the x12 transaction format.

This is very loosely based on the grammar provided in the "x12.6 - Application
Control Structure" document. It is a simplified version of the "3.7 - Data Segment"
section with some modifications. See [Notes](#notes) for known parsing issues.

## Notes

* Does not provide validations against x12 transaction sets, instead this parser
loosely identifies segments, data elements, and components.

* Does not support x12 transactions that use escape characters.

* Does not support x12 transactions that use binary segments.

* Allows blank-space between segments for the purposes of allowing parsing when
splitting segments by newlines after the segment terminator.
