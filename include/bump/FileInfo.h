//
//  FileInfo.h
//  Bump
//
//  Created by Christian Noon on 12/4/12.
//  Copyright (c) 2012 Christian Noon. All rights reserved.
//

#ifndef BUMP_FILE_INFO_H
#define BUMP_FILE_INFO_H

// Boost headers
#include <boost/filesystem/path.hpp>

// Bump headers
#include <bump/Export.h>
#include <bump/String.h>

namespace bump {

/**
 * TODO
 */
class BUMP_EXPORT FileInfo
{
public:

	/**
	 * Constructor.
	 */
	FileInfo(const String& path);

	/**
	 * Destructor.
	 */
	~FileInfo();

	/**
	 * Returns whether the path is an absolute path.
	 *
	 * @return true if the path is an absolute path, false otherwise.
	 */
	bool isAbsolute();

	/**
	 * Returns whether the path is a relative path.
	 *
	 * @return true if the path is an relative path, false otherwise.
	 */
	bool isRelative();

	/**
	 * Returns whether the path points to a directory.
	 *
	 * @return true if the path points to a directory, false othwerwise.
	 */
	bool isDirectory();

	/**
	 * Returns whether the path points to a file.
	 *
	 * @return true if the path points to a file, false othwerwise.
	 */
	bool isFile();

	/**
	 * Returns whether the path points to a symbolic link.
	 *
	 * @return true if the path points to a symbolic link, false othwerwise.
	 */
	bool isSymbolicLink();

protected:

	/** Instance member variables. */
	boost::filesystem::path _path;
};

}	// End of bump namespace

#endif	// End of BUMP_FILE_INFO_H
