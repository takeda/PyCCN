/*
 * Copyright (c) 2011, Regents of the University of California
 * BSD license, See the COPYING file for more information
 * Written by: Derek Kulinski <takeda@takeda.tk>
 *             Jeff Burke <jburke@ucla.edu>
 */

#ifndef MEDHODS_CONTENTOBJECT_H
#  define	MEDHODS_CONTENTOBJECT_H

PyObject *ContentObject_obj_from_ccn_parsed(PyObject *py_content_object,
		PyObject *py_parsed_content_object, PyObject *py_components);
PyObject *_pyccn_content_to_bytes(PyObject *self, PyObject *arg);
PyObject *_pyccn_content_to_bytearray(PyObject *self, PyObject *arg);
PyObject *_pyccn_ContentObject_to_ccn(PyObject *self, PyObject *args);
PyObject *_pyccn_ContentObject_from_ccn(PyObject *self, PyObject *py_co);
PyObject *_pyccn_digest_contentobject(PyObject *self, PyObject *args);
PyObject *_pyccn_content_matches_interest(PyObject *self, PyObject *args);

#endif	/* MEDHODS_CONTENTOBJECT_H */

