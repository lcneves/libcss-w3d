/*
 * This file is part of LibCSS
 * Licensed under the MIT License,
 *		  http://www.opensource.org/licenses/mit-license.php
 * Copyright 2017 Lucas Neves <lcneves@gmail.com>
 */

#include "bytecode/bytecode.h"
#include "bytecode/opcodes.h"
#include "select/propset.h"
#include "select/propget.h"
#include "utils/utils.h"

#include "select/properties/properties.h"
#include "select/properties/helpers.h"

css_error css__cascade_padding_far(uint32_t opv, css_style *style,
		css_select_state *state)
{
	return css__cascade_length(opv, style, state, set_padding_far);
}

css_error css__set_padding_far_from_hint(const css_hint *hint,
		css_computed_style *style)
{
	return set_padding_far(style, hint->status,
			hint->data.length.value, hint->data.length.unit);
}

css_error css__initial_padding_far(css_select_state *state)
{
	return set_padding_far(state->computed, CSS_PADDING_SET, 0, CSS_UNIT_PX);
}

css_error css__compose_padding_far(const css_computed_style *parent,
		const css_computed_style *child,
		css_computed_style *result)
{
	css_fixed length = 0;
	css_unit unit = CSS_UNIT_PX;
	uint8_t type = get_padding_far(child, &length, &unit);

	if (type == CSS_PADDING_INHERIT) {
		type = get_padding_far(parent, &length, &unit);
	}

	return set_padding_far(result, type, length, unit);
}

