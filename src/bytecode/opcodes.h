/*
 * This file is part of LibCSS.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2008 John-Mark Bell <jmb@netsurf-browser.org>
 */

#ifndef css_bytecode_opcodes_h_
#define css_bytecode_opcodes_h_

#include <inttypes.h>

enum op_azimuth {
	AZIMUTH_ANGLE			= 0x0080,

	AZIMUTH_LEFTWARDS		= 0x0040,
	AZIMUTH_RIGHTWARDS		= 0x0041,

	AZIMUTH_BEHIND			= (1<<5),
	AZIMUTH_LEFT_SIDE		= 0x0000,
	AZIMUTH_FAR_LEFT		= 0x0001,
	AZIMUTH_LEFT			= 0x0002,
	AZIMUTH_CENTER_LEFT		= 0x0003,
	AZIMUTH_CENTER			= 0x0004,
	AZIMUTH_CENTER_RIGHT		= 0x0005,
	AZIMUTH_RIGHT			= 0x0006,
	AZIMUTH_FAR_RIGHT		= 0x0007,
	AZIMUTH_RIGHT_SIDE		= 0x0008
};

enum op_background_attachment {
	BACKGROUND_ATTACHMENT_FIXED	= 0x0000,
	BACKGROUND_ATTACHMENT_SCROLL	= 0x0001
};

enum op_background_color {
	BACKGROUND_COLOR_TRANSPARENT	= 0x0000,
	BACKGROUND_COLOR_CURRENT_COLOR	= 0x0001,
	BACKGROUND_COLOR_SET		= 0x0080
};

enum op_background_image {
	BACKGROUND_IMAGE_URI		= 0x0080,
	BACKGROUND_IMAGE_NONE		= 0x0000
};

enum op_background_position {
	BACKGROUND_POSITION_HORZ_SET	= 0x0080,
	BACKGROUND_POSITION_HORZ_CENTER	= 0x0000,
	BACKGROUND_POSITION_HORZ_RIGHT	= 0x0010,
	BACKGROUND_POSITION_HORZ_LEFT	= 0x0020,

	BACKGROUND_POSITION_VERT_SET	= 0x0008,
	BACKGROUND_POSITION_VERT_CENTER	= 0x0000,
	BACKGROUND_POSITION_VERT_BOTTOM	= 0x0001,
	BACKGROUND_POSITION_VERT_TOP	= 0x0002
};

enum op_background_repeat {
	BACKGROUND_REPEAT_NO_REPEAT	= 0x0000,
	BACKGROUND_REPEAT_REPEAT_X	= 0x0001,
	BACKGROUND_REPEAT_REPEAT_Y	= 0x0002,
	BACKGROUND_REPEAT_REPEAT	= 0x0003
};

enum op_border_collapse {
	BORDER_COLLAPSE_SEPARATE	= 0x0000,
	BORDER_COLLAPSE_COLLAPSE	= 0x0001
};

enum op_border_spacing {
	BORDER_SPACING_SET		= 0x0080
};

enum op_border_color {
	BORDER_COLOR_TRANSPARENT	= 0x0000,
	BORDER_COLOR_CURRENT_COLOR	= 0x0001,
	BORDER_COLOR_SET		= 0x0080
};

enum op_border_style {
	BORDER_STYLE_NONE		= 0x0000,
	BORDER_STYLE_HIDDEN		= 0x0001,
	BORDER_STYLE_DOTTED		= 0x0002,
	BORDER_STYLE_DASHED		= 0x0003,
	BORDER_STYLE_SOLID		= 0x0004,
	BORDER_STYLE_DOUBLE		= 0x0005,
	BORDER_STYLE_GROOVE		= 0x0006,
	BORDER_STYLE_RIDGE		= 0x0007,
	BORDER_STYLE_INSET		= 0x0008,
	BORDER_STYLE_OUTSET		= 0x0009
};

enum op_border_width {
	BORDER_WIDTH_SET		= 0x0080,
	BORDER_WIDTH_THIN		= 0x0000,
	BORDER_WIDTH_MEDIUM		= 0x0001,
	BORDER_WIDTH_THICK		= 0x0002
};

enum op_bottom {
	BOTTOM_SET			= 0x0080,
	BOTTOM_AUTO			= 0x0000
};

enum op_break_after {
	BREAK_AFTER_AUTO		= 0x0000,
	BREAK_AFTER_ALWAYS		= 0x0001,
	BREAK_AFTER_AVOID		= 0x0002,
	BREAK_AFTER_LEFT		= 0x0003,
	BREAK_AFTER_RIGHT		= 0x0004,
	BREAK_AFTER_PAGE		= 0x0005,
	BREAK_AFTER_COLUMN		= 0x0006,
	BREAK_AFTER_AVOID_PAGE		= 0x0007,
	BREAK_AFTER_AVOID_COLUMN	= 0x0008
};

enum op_break_before {
	BREAK_BEFORE_AUTO		= 0x0000,
	BREAK_BEFORE_ALWAYS		= 0x0001,
	BREAK_BEFORE_AVOID		= 0x0002,
	BREAK_BEFORE_LEFT		= 0x0003,
	BREAK_BEFORE_RIGHT		= 0x0004,
	BREAK_BEFORE_PAGE		= 0x0005,
	BREAK_BEFORE_COLUMN		= 0x0006,
	BREAK_BEFORE_AVOID_PAGE		= 0x0007,
	BREAK_BEFORE_AVOID_COLUMN	= 0x0008
};

enum op_break_inside {
	BREAK_INSIDE_AUTO		= 0x0000,
	BREAK_INSIDE_AVOID		= 0x0001,
	BREAK_INSIDE_AVOID_PAGE		= 0x0002,
	BREAK_INSIDE_AVOID_COLUMN	= 0x0003
};

enum op_caption_side {
	CAPTION_SIDE_TOP		= 0x0000,
	CAPTION_SIDE_BOTTOM		= 0x0001
};

enum op_clear {
	CLEAR_NONE			= 0x0000,
	CLEAR_LEFT			= 0x0001,
	CLEAR_RIGHT			= 0x0002,
	CLEAR_BOTH			= 0x0003
};

enum op_clip {
	CLIP_SHAPE_MASK			= 0x0087,
	CLIP_SHAPE_RECT			= 0x0080,

	CLIP_RECT_TOP_AUTO		= 0x0008,
	CLIP_RECT_RIGHT_AUTO		= 0x0010,
	CLIP_RECT_BOTTOM_AUTO		= 0x0020,
	CLIP_RECT_LEFT_AUTO		= 0x0040,

	CLIP_AUTO			= 0x0000
};

enum op_color {
	COLOR_TRANSPARENT		= 0x0000,
	COLOR_CURRENT_COLOR		= 0x0001,
	COLOR_SET			= 0x0080
};

enum op_column_count {
	COLUMN_COUNT_AUTO		= 0x0000,
	COLUMN_COUNT_SET		= 0x0080
};

enum op_column_fill {
	COLUMN_FILL_BALANCE		= 0x0000,
	COLUMN_FILL_AUTO		= 0x0001
};

enum op_column_gap {
	COLUMN_GAP_NORMAL		= 0x0000,
	COLUMN_GAP_SET			= 0x0080
};

enum op_column_rule_color {
	COLUMN_RULE_COLOR_TRANSPARENT	= COLOR_TRANSPARENT,
	COLUMN_RULE_COLOR_CURRENT_COLOR	= COLOR_CURRENT_COLOR,
	COLUMN_RULE_COLOR_SET		= COLOR_SET
};

enum op_column_rule_style {
	COLUMN_RULE_STYLE_NONE		= BORDER_STYLE_NONE,
	COLUMN_RULE_STYLE_HIDDEN	= BORDER_STYLE_HIDDEN,
	COLUMN_RULE_STYLE_DOTTED	= BORDER_STYLE_DOTTED,
	COLUMN_RULE_STYLE_DASHED	= BORDER_STYLE_DASHED,
	COLUMN_RULE_STYLE_SOLID		= BORDER_STYLE_SOLID,
	COLUMN_RULE_STYLE_DOUBLE	= BORDER_STYLE_DOUBLE,
	COLUMN_RULE_STYLE_GROOVE	= BORDER_STYLE_GROOVE,
	COLUMN_RULE_STYLE_RIDGE		= BORDER_STYLE_RIDGE,
	COLUMN_RULE_STYLE_INSET		= BORDER_STYLE_INSET,
	COLUMN_RULE_STYLE_OUTSET	= BORDER_STYLE_OUTSET
};

enum op_column_rule_width {
	COLUMN_RULE_WIDTH_SET		= BORDER_WIDTH_SET,
	COLUMN_RULE_WIDTH_THIN		= BORDER_WIDTH_THIN,
	COLUMN_RULE_WIDTH_MEDIUM	= BORDER_WIDTH_MEDIUM,
	COLUMN_RULE_WIDTH_THICK		= BORDER_WIDTH_THICK
};

enum op_column_span {
	COLUMN_SPAN_NONE		= 0x0000,
	COLUMN_SPAN_ALL			= 0x0001
};

enum op_column_width {
	COLUMN_WIDTH_AUTO		= 0x0000,
	COLUMN_WIDTH_SET		= 0x0080
};

enum op_content {
	CONTENT_STRING			= 0x0080,
	CONTENT_URI			= 0x0081,
	CONTENT_COUNTER			= 0x0082,
	CONTENT_COUNTERS		= 0x0083,
	CONTENT_ATTR			= 0x0084,

	CONTENT_COUNTER_STYLE_SHIFT	= 8,
	CONTENT_COUNTERS_STYLE_SHIFT	= 8,

	CONTENT_NORMAL			= 0x0000,
	CONTENT_NONE			= 0x0001,
	CONTENT_OPEN_QUOTE		= 0x0002,
	CONTENT_CLOSE_QUOTE		= 0x0003,
	CONTENT_NO_OPEN_QUOTE		= 0x0004,
	CONTENT_NO_CLOSE_QUOTE		= 0x0005
};

enum op_counter_increment {
	COUNTER_INCREMENT_NAMED		= 0x0080,

	COUNTER_INCREMENT_NONE		= 0x0000
};

enum op_counter_reset {
	COUNTER_RESET_NAMED		= 0x0080,

	COUNTER_RESET_NONE		= 0x0000
};

enum op_cue_after {
	CUE_AFTER_URI			= 0x0080,
	CUE_AFTER_NONE			= 0x0000
};

enum op_cue_before {
	CUE_BEFORE_URI			= 0x0080,
	CUE_BEFORE_NONE			= 0x0000
};

enum op_cursor {
	CURSOR_URI			= 0x0080,

	CURSOR_AUTO			= 0x0000,
	CURSOR_CROSSHAIR		= 0x0001,
	CURSOR_DEFAULT			= 0x0002,
	CURSOR_POINTER			= 0x0003,
	CURSOR_MOVE			= 0x0004,
	CURSOR_E_RESIZE			= 0x0005,
	CURSOR_NE_RESIZE		= 0x0006,
	CURSOR_NW_RESIZE		= 0x0007,
	CURSOR_N_RESIZE			= 0x0008,
	CURSOR_SE_RESIZE		= 0x0009,
	CURSOR_SW_RESIZE		= 0x000a,
	CURSOR_S_RESIZE			= 0x000b,
	CURSOR_W_RESIZE			= 0x000c,
	CURSOR_TEXT			= 0x000d,
	CURSOR_WAIT			= 0x000e,
	CURSOR_HELP			= 0x000f,
	CURSOR_PROGRESS			= 0x0010
};

enum op_direction {
	DIRECTION_LTR			= 0x0000,
	DIRECTION_RTL			= 0x0001
};

enum op_display {
	DISPLAY_INLINE			= 0x0000,
	DISPLAY_BLOCK			= 0x0001,
	DISPLAY_LIST_ITEM		= 0x0002,
	DISPLAY_RUN_IN			= 0x0003,
	DISPLAY_INLINE_BLOCK		= 0x0004,
	DISPLAY_TABLE			= 0x0005,
	DISPLAY_INLINE_TABLE		= 0x0006,
	DISPLAY_TABLE_ROW_GROUP		= 0x0007,
	DISPLAY_TABLE_HEADER_GROUP	= 0x0008,
	DISPLAY_TABLE_FOOTER_GROUP	= 0x0009,
	DISPLAY_TABLE_ROW		= 0x000a,
	DISPLAY_TABLE_COLUMN_GROUP	= 0x000b,
	DISPLAY_TABLE_COLUMN		= 0x000c,
	DISPLAY_TABLE_CELL		= 0x000d,
	DISPLAY_TABLE_CAPTION		= 0x000e,
	DISPLAY_NONE			= 0x000f
};

enum op_elevation {
	ELEVATION_ANGLE			= 0x0080,
	ELEVATION_BELOW			= 0x0000,
	ELEVATION_LEVEL			= 0x0001,
	ELEVATION_ABOVE			= 0x0002,
	ELEVATION_HIGHER		= 0x0003,
	ELEVATION_LOWER			= 0x0004
};

enum op_empty_cells {
	EMPTY_CELLS_SHOW		= 0x0000,
	EMPTY_CELLS_HIDE		= 0x0001
};

enum op_float {
	FLOAT_LEFT			= 0x0000,
	FLOAT_RIGHT			= 0x0001,
	FLOAT_NONE			= 0x0002
};

enum op_font_family {
	FONT_FAMILY_STRING		= 0x0080,
	FONT_FAMILY_IDENT_LIST		= 0x0081,

	FONT_FAMILY_END			= 0x0000,

	FONT_FAMILY_SERIF		= 0x0001,
	FONT_FAMILY_SANS_SERIF		= 0x0002,
	FONT_FAMILY_CURSIVE		= 0x0003,
	FONT_FAMILY_FANTASY		= 0x0004,
	FONT_FAMILY_MONOSPACE		= 0x0005
};

enum op_font_size {
	FONT_SIZE_DIMENSION		= 0x0080,

	FONT_SIZE_XX_SMALL		= 0x0000,
	FONT_SIZE_X_SMALL		= 0x0001,
	FONT_SIZE_SMALL			= 0x0002,
	FONT_SIZE_MEDIUM		= 0x0003,
	FONT_SIZE_LARGE			= 0x0004,
	FONT_SIZE_X_LARGE		= 0x0005,
	FONT_SIZE_XX_LARGE		= 0x0006,
	FONT_SIZE_LARGER		= 0x0007,
	FONT_SIZE_SMALLER		= 0x0008
};

enum op_font_style {
	FONT_STYLE_NORMAL		= 0x0000,
	FONT_STYLE_ITALIC		= 0x0001,
	FONT_STYLE_OBLIQUE		= 0x0002
};

enum op_font_variant {
	FONT_VARIANT_NORMAL		= 0x0000,
	FONT_VARIANT_SMALL_CAPS		= 0x0001
};

enum op_font_weight {
	FONT_WEIGHT_NORMAL		= 0x0000,
	FONT_WEIGHT_BOLD		= 0x0001,
	FONT_WEIGHT_BOLDER		= 0x0002,
	FONT_WEIGHT_LIGHTER		= 0x0003,
	FONT_WEIGHT_100			= 0x0004,
	FONT_WEIGHT_200			= 0x0005,
	FONT_WEIGHT_300			= 0x0006,
	FONT_WEIGHT_400			= 0x0007,
	FONT_WEIGHT_500			= 0x0008,
	FONT_WEIGHT_600			= 0x0009,
	FONT_WEIGHT_700			= 0x000a,
	FONT_WEIGHT_800			= 0x000b,
	FONT_WEIGHT_900			= 0x000c
};

enum op_height {
	HEIGHT_SET			= 0x0080,
	HEIGHT_AUTO			= 0x0000
};

enum op_left {
	LEFT_SET			= BOTTOM_SET,
	LEFT_AUTO			= BOTTOM_AUTO
};

enum op_letter_spacing {
	LETTER_SPACING_SET		= 0x0080,
	LETTER_SPACING_NORMAL		= 0x0000
};

enum op_line_height {
	LINE_HEIGHT_NUMBER		= 0x0080,
	LINE_HEIGHT_DIMENSION		= 0x0081,
	LINE_HEIGHT_NORMAL		= 0x0000
};

enum op_list_style_image {
	LIST_STYLE_IMAGE_URI		= 0x0080,
	LIST_STYLE_IMAGE_NONE		= 0x0000
};

enum op_list_style_position {
	LIST_STYLE_POSITION_INSIDE	= 0x0000,
	LIST_STYLE_POSITION_OUTSIDE	= 0x0001
};

enum op_list_style_type {
	LIST_STYLE_TYPE_DISC		= 0x0000,
	LIST_STYLE_TYPE_CIRCLE		= 0x0001,
	LIST_STYLE_TYPE_SQUARE		= 0x0002,
	LIST_STYLE_TYPE_DECIMAL		= 0x0003,
	LIST_STYLE_TYPE_DECIMAL_LEADING_ZERO	= 0x0004,
	LIST_STYLE_TYPE_LOWER_ROMAN	= 0x0005,
	LIST_STYLE_TYPE_UPPER_ROMAN	= 0x0006,
	LIST_STYLE_TYPE_LOWER_GREEK	= 0x0007,
	LIST_STYLE_TYPE_LOWER_LATIN	= 0x0008,
	LIST_STYLE_TYPE_UPPER_LATIN	= 0x0009,
	LIST_STYLE_TYPE_ARMENIAN	= 0x000a,
	LIST_STYLE_TYPE_GEORGIAN	= 0x000b,
	LIST_STYLE_TYPE_LOWER_ALPHA	= 0x000c,
	LIST_STYLE_TYPE_UPPER_ALPHA	= 0x000d,
	LIST_STYLE_TYPE_NONE		= 0x000e
};

enum op_margin {
	MARGIN_SET			= 0x0080,
	MARGIN_AUTO			= 0x0000
};

enum op_max_height {
	MAX_HEIGHT_SET			= 0x0080,
	MAX_HEIGHT_NONE			= 0x0000
};

enum op_max_width {
	MAX_WIDTH_SET			= 0x0080,
	MAX_WIDTH_NONE			= 0x0000
};

enum op_min_height {
	MIN_HEIGHT_SET			= 0x0080
};

enum op_min_width {
	MIN_WIDTH_SET			= 0x0080
};

enum op_opacity {
	OPACITY_SET			= 0x0080
};

enum op_orphans {
	ORPHANS_SET			= 0x0080
};

enum op_outline_color {
	OUTLINE_COLOR_TRANSPARENT	= 0x0000,
	OUTLINE_COLOR_CURRENT_COLOR	= 0x0001,
	OUTLINE_COLOR_INVERT		= 0x0002,
	OUTLINE_COLOR_SET		= 0x0080
};

enum op_outline_style {
	OUTLINE_STYLE_NONE		= BORDER_STYLE_NONE,
	OUTLINE_STYLE_HIDDEN		= BORDER_STYLE_HIDDEN,
	OUTLINE_STYLE_DOTTED		= BORDER_STYLE_DOTTED,
	OUTLINE_STYLE_DASHED		= BORDER_STYLE_DASHED,
	OUTLINE_STYLE_SOLID		= BORDER_STYLE_SOLID,
	OUTLINE_STYLE_DOUBLE		= BORDER_STYLE_DOUBLE,
	OUTLINE_STYLE_GROOVE		= BORDER_STYLE_GROOVE,
	OUTLINE_STYLE_RIDGE		= BORDER_STYLE_RIDGE,
	OUTLINE_STYLE_INSET		= BORDER_STYLE_INSET,
	OUTLINE_STYLE_OUTSET		= BORDER_STYLE_OUTSET
};

enum op_outline_width {
	OUTLINE_WIDTH_SET		= BORDER_WIDTH_SET,
	OUTLINE_WIDTH_THIN		= BORDER_WIDTH_THIN,
	OUTLINE_WIDTH_MEDIUM		= BORDER_WIDTH_MEDIUM,
	OUTLINE_WIDTH_THICK		= BORDER_WIDTH_THICK
};

enum op_overflow {
	OVERFLOW_VISIBLE		= 0x0000,
	OVERFLOW_HIDDEN			= 0x0001,
	OVERFLOW_SCROLL			= 0x0002,
	OVERFLOW_AUTO			= 0x0003
};

enum op_padding {
	PADDING_SET			= 0x0080
};

enum op_page_break_after {
	PAGE_BREAK_AFTER_AUTO		= 0x0000,
	PAGE_BREAK_AFTER_ALWAYS		= 0x0001,
	PAGE_BREAK_AFTER_AVOID		= 0x0002,
	PAGE_BREAK_AFTER_LEFT		= 0x0003,
	PAGE_BREAK_AFTER_RIGHT		= 0x0004
};

enum op_page_break_before {
	PAGE_BREAK_BEFORE_AUTO		= 0x0000,
	PAGE_BREAK_BEFORE_ALWAYS	= 0x0001,
	PAGE_BREAK_BEFORE_AVOID		= 0x0002,
	PAGE_BREAK_BEFORE_LEFT		= 0x0003,
	PAGE_BREAK_BEFORE_RIGHT		= 0x0004
};

enum op_page_break_inside {
	PAGE_BREAK_INSIDE_AUTO		= 0x0000,
	PAGE_BREAK_INSIDE_AVOID		= 0x0001
};

enum op_pause_after {
	PAUSE_AFTER_SET			= 0x0080
};

enum op_pause_before {
	PAUSE_BEFORE_SET		= 0x0080
};

enum op_pitch_range {
	PITCH_RANGE_SET			= 0x0080
};

enum op_pitch {
	PITCH_FREQUENCY			= 0x0080,

	PITCH_X_LOW			= 0x0000,
	PITCH_LOW			= 0x0001,
	PITCH_MEDIUM			= 0x0002,
	PITCH_HIGH			= 0x0003,
	PITCH_X_HIGH			= 0x0004
};

enum op_play_during {
	PLAY_DURING_TYPE_MASK		= 0x009f,
	PLAY_DURING_URI			= 0x0080,
	PLAY_DURING_MIX			= (1<<6),
	PLAY_DURING_REPEAT		= (1<<5),

	PLAY_DURING_AUTO		= 0x0000,
	PLAY_DURING_NONE		= 0x0001
};

enum op_position {
	POSITION_STATIC			= 0x0000,
	POSITION_RELATIVE		= 0x0001,
	POSITION_ABSOLUTE		= 0x0002,
	POSITION_FIXED			= 0x0003
};

enum op_quotes {
	QUOTES_STRING			= 0x0080,

	QUOTES_NONE			= 0x0000
};

enum op_richness {
	RICHNESS_SET			= 0x0080
};

enum op_right {
	RIGHT_SET			= BOTTOM_SET,
	RIGHT_AUTO			= BOTTOM_AUTO
};

enum op_speak_header {
	SPEAK_HEADER_ONCE		= 0x0000,
	SPEAK_HEADER_ALWAYS		= 0x0001
};

enum op_speak_numeral {
	SPEAK_NUMERAL_DIGITS		= 0x0000,
	SPEAK_NUMERAL_CONTINUOUS	= 0x0001
};

enum op_speak_punctuation {
	SPEAK_PUNCTUATION_CODE		= 0x0000,
	SPEAK_PUNCTUATION_NONE		= 0x0001
};

enum op_speak {
	SPEAK_NORMAL			= 0x0000,
	SPEAK_NONE			= 0x0001,
	SPEAK_SPELL_OUT			= 0x0002
};

enum op_speech_rate {
	SPEECH_RATE_SET			= 0x0080,

	SPEECH_RATE_X_SLOW		= 0x0000,
	SPEECH_RATE_SLOW		= 0x0001,
	SPEECH_RATE_MEDIUM		= 0x0002,
	SPEECH_RATE_FAST		= 0x0003,
	SPEECH_RATE_X_FAST		= 0x0004,
	SPEECH_RATE_FASTER		= 0x0005,
	SPEECH_RATE_SLOWER		= 0x0006
};

enum op_stress {
	STRESS_SET			= 0x0080
};

enum op_table_layout {
	TABLE_LAYOUT_AUTO		= 0x0000,
	TABLE_LAYOUT_FIXED		= 0x0001
};

enum op_text_align {
	TEXT_ALIGN_LEFT			= 0x0000,
	TEXT_ALIGN_RIGHT		= 0x0001,
	TEXT_ALIGN_CENTER		= 0x0002,
	TEXT_ALIGN_JUSTIFY		= 0x0003,
	TEXT_ALIGN_LIBCSS_LEFT		= 0x0004,
	TEXT_ALIGN_LIBCSS_CENTER	= 0x0005,
	TEXT_ALIGN_LIBCSS_RIGHT		= 0x0006
};

enum op_text_decoration {
	TEXT_DECORATION_NONE		= 0x0000,

	TEXT_DECORATION_BLINK		= (1<<3),
	TEXT_DECORATION_LINE_THROUGH	= (1<<2),
	TEXT_DECORATION_OVERLINE	= (1<<1),
	TEXT_DECORATION_UNDERLINE	= (1<<0)
};

enum op_text_indent {
	TEXT_INDENT_SET			= 0x0080
};

enum op_text_transform {
	TEXT_TRANSFORM_CAPITALIZE	= 0x0000,
	TEXT_TRANSFORM_UPPERCASE	= 0x0001,
	TEXT_TRANSFORM_LOWERCASE	= 0x0002,
	TEXT_TRANSFORM_NONE		= 0x0003
};

enum op_top {
	TOP_SET				= BOTTOM_SET,
	TOP_AUTO			= BOTTOM_AUTO
};

enum op_unicode_bidi {
	UNICODE_BIDI_NORMAL		= 0x0000,
	UNICODE_BIDI_EMBED		= 0x0001,
	UNICODE_BIDI_BIDI_OVERRIDE	= 0x0002
};

enum op_vertical_align {
	VERTICAL_ALIGN_SET		= 0x0080,

	VERTICAL_ALIGN_BASELINE		= 0x0000,
	VERTICAL_ALIGN_SUB		= 0x0001,
	VERTICAL_ALIGN_SUPER		= 0x0002,
	VERTICAL_ALIGN_TOP		= 0x0003,
	VERTICAL_ALIGN_TEXT_TOP		= 0x0004,
	VERTICAL_ALIGN_MIDDLE		= 0x0005,
	VERTICAL_ALIGN_BOTTOM		= 0x0006,
	VERTICAL_ALIGN_TEXT_BOTTOM	= 0x0007
};

enum op_visibility {
	VISIBILITY_VISIBLE		= 0x0000,
	VISIBILITY_HIDDEN		= 0x0001,
	VISIBILITY_COLLAPSE		= 0x0002
};

enum op_voice_family {
	VOICE_FAMILY_STRING		= 0x0080,
	VOICE_FAMILY_IDENT_LIST		= 0x0081,

	VOICE_FAMILY_END		= 0x0000,

	VOICE_FAMILY_MALE		= 0x0001,
	VOICE_FAMILY_FEMALE		= 0x0002,
	VOICE_FAMILY_CHILD		= 0x0003
};

enum op_volume {
	VOLUME_NUMBER			= 0x0080,
	VOLUME_DIMENSION		= 0x0081,

	VOLUME_SILENT			= 0x0000,
	VOLUME_X_SOFT			= 0x0001,
	VOLUME_SOFT			= 0x0002,
	VOLUME_MEDIUM			= 0x0003,
	VOLUME_LOUD			= 0x0004,
	VOLUME_X_LOUD			= 0x0005
};

enum op_white_space {
	WHITE_SPACE_NORMAL		= 0x0000,
	WHITE_SPACE_PRE			= 0x0001,
	WHITE_SPACE_NOWRAP		= 0x0002,
	WHITE_SPACE_PRE_WRAP		= 0x0003,
	WHITE_SPACE_PRE_LINE		= 0x0004
};

enum op_widows {
	WIDOWS_SET			= 0x0080
};

enum op_width {
	WIDTH_SET			= 0x0080,

	WIDTH_AUTO			= 0x0000
};

enum op_word_spacing {
	WORD_SPACING_SET		= 0x0080,

	WORD_SPACING_NORMAL		= 0x0000
};

enum op_writing_mode {
	WRITING_MODE_HORIZONTAL_TB	= 0x0000,
	WRITING_MODE_VERTICAL_RL	= 0x0001,
	WRITING_MODE_VERTICAL_LR	= 0x0002
};

enum op_z_index {
	Z_INDEX_SET			= 0x0080,

	Z_INDEX_AUTO			= 0x0000
};

#endif

