#pragma once
#ifndef ALERT_H
#define ALERT_H


	#include <stdbool.h>


/* Displays alert with given attributes, and blocks execution until the user
 * responds. Returns 0 if defaultButton was pressed, 1 if cancelButton was
 * pressed, or -1 if an error occurred. */
int showAlert(const char *title, const char *msg, const char *defaultButton,
              const char *cancelButton);

#endif /* ALERT_H */
