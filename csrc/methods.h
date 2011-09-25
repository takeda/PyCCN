/*
 * Copyright (c) 2011, Regents of the University of California
 * BSD license, See the COPYING file for more information
 * Written by: Derek Kulinski <takeda@takeda.tk>
 *             Jeff Burke <jburke@ucla.edu>
 */

#ifndef METHODS_H
#  define	METHODS_H

PyObject *_pyccn_cmd_create(PyObject *UNUSED(self), PyObject *UNUSED(args));
PyObject *_pyccn_cmd_connect(PyObject *UNUSED(self), PyObject *py_ccn_handle);
PyObject *_pyccn_cmd_disconnect(PyObject *UNUSED(self),
		PyObject *py_ccn_handle);
PyObject *_pyccn_get_connection_fd(PyObject *self, PyObject *py_handle);
PyObject *_pyccn_cmd_process_scheduled_operations(PyObject *self,
		PyObject *py_handle);
PyObject *_pyccn_cmd_output_is_pending(PyObject *self, PyObject *py_handle);
PyObject *_pyccn_cmd_run(PyObject *UNUSED(self), PyObject *args);
PyObject *_pyccn_cmd_set_run_timeout(PyObject *UNUSED(self), PyObject *args);
PyObject *_pyccn_cmd_is_upcall_executing(PyObject *self, PyObject *py_handle);
PyObject *_pyccn_cmd_express_interest(PyObject *UNUSED(self),
		PyObject *args);
PyObject *_pyccn_cmd_set_interest_filter(PyObject *UNUSED(self),
		PyObject *args);
PyObject *_pyccn_cmd_get(PyObject *UNUSED(self), PyObject *args);
PyObject *_pyccn_cmd_put(PyObject *UNUSED(self), PyObject *args);
PyObject *_pyccn_cmd_get_default_key(PyObject *self, PyObject *arg);
PyObject *_pyccn_cmd_generate_RSA_key(PyObject *UNUSED(self), PyObject *args);
PyObject *_pyccn_SigningParams_from_ccn(PyObject *UNUSED(self),
		PyObject *py_signing_params);
PyObject *_pyccn_cmd_dump_charbuf(PyObject *self, PyObject *py_charbuf);

#endif	/* METHODS_H */

