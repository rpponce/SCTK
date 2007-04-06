/*
 * asclite
 * Author: Jerome Ajot, Nicolas Radde, Chris Laprun
 *
 * This software was developed at the National Institute of Standards and Technology by
 * employees of the Federal Government in the course of their official duties.  Pursuant to
 * Title 17 Section 105 of the United States Code this software is not subject to copyright
 * protection within the United States and is in the public domain. asclite is
 * an experimental system.  NIST assumes no responsibility whatsoever for its use by any party.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef PROPERTIES_H
#define PROPERTIES_H

#include "stdinc.h"

/**
 * Contain the global properties of the aligner.
 * This object in created once and for all during the argument parsing.
 */
class Properties
{
	public:
		/** Determines if the properties were updated since the last call to GetProperty. */
		static bool IsDirty() { return dirty; }
		/**
         * Set the property to the desired value
         */
        static void SetProperty(string name, string value);
        /**
         * Retrieve the value of the specified property
         */
        static string GetProperty(string name);
        /**
         * Set the properties with a all set of predefined values
         */
        static void SetProperties(map<string, string> props);
        /**
         * Initialize the properties.
         * Nothing to do for now there...
         */
        static void Initialize();
	private:
		/**
		 * Internal representation of the properties
		 */
		static map<string, string> properties;
		static bool dirty;
};

#endif // PROPERTIES_H
