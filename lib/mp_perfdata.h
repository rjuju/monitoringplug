/***
 * Monitoring Plugin - mp_perfdata.h
 **
 *
 * Copyright (C) 2012 Marius Rieder <marius.rieder@durchmesser.ch>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * $Id$
 */

#ifndef _MP_PERFDATA_H_
#define _MP_PERFDATA_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "mp_args.h"

/* The global perfdata vars. */
/** The global perfdata variable. */
extern unsigned int mp_showperfdata;
/** The global perf data string. */
extern char *mp_perfdata;

/**
 * Add (long) int perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 */
void mp_perfdata_int(const char *label, long int value, const char *unit,
      thresholds *threshold);

/**
 * Add (long) int perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 * \param[in] have_min perfdata should list minimum value
 * \param[in] min perfdata minimum value
 * \param[in] have_max perfdata should list maximum value
 * \param[in] max perfdata maximum value
 */
void mp_perfdata_int2(const char *label, long int value, const char *unit,
      thresholds *threshold, int have_min, long int min,
      int have_max, long int max);

/**
 * Add (long) int perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 * \param[in] have_min perfdata should list minimum value
 * \param[in] min perfdata minimum value
 * \param[in] have_max perfdata should list maximum value
 * \param[in] max perfdata maximum value
 * \param[in] have_warn perfdata should list warning threshold
 * \param[in] warn perfdata warning threshold
 * \param[in] have_crit perfdata should list critical threshold
 * \param[in] crit perfdata critical threshold
 */
void mp_perfdata_int3(const char *label, long int value, const char *unit,
      int have_warn, long int warn, int have_crit, long int crit,
      int have_min, long int min, int have_max, long int max);

/**
 * Add float perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 */
void mp_perfdata_float(const char *label, float value, const char *unit,
      thresholds *threshold);

/**
 * Add float perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 * \param[in] have_min perfdata should list minimum value
 * \param[in] min perfdata minimum value
 * \param[in] have_max perfdata should list maximum value
 * \param[in] max perfdata maximum value
 */
void mp_perfdata_float2(const char *label, float value, const char *unit,
      thresholds *threshold, int have_min, float min,
      int have_max, float max);

/**
 * Add float perfdata
 * \param[in] label perfdata label string
 * \param[in] value perfdata value
 * \param[in] unit perfdata unit string
 * \param[in] threshold perfdata threshold
 * \param[in] have_min perfdata should list minimum value
 * \param[in] min perfdata minimum value
 * \param[in] have_max perfdata should list maximum value
 * \param[in] max perfdata maximum value
 * \param[in] have_warn perfdata should list warning threshold
 * \param[in] warn perfdata warning threshold
 * \param[in] have_crit perfdata should list critical threshold
 * \param[in] crit perfdata critical threshold
 */
void mp_perfdata_float3(const char *label, float value, const char *unit,
      int have_warn, float warn, int have_crit, float crit,
      int have_min, float min, int have_max, float max);

#endif /* _MP_PERFDATA_H_ */

/* vim: set ts=4 sw=4 et syn=c : */
