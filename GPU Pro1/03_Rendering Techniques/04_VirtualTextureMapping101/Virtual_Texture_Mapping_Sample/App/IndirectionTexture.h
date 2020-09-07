/*
	Virtual texture mapping demo app
    Copyright (C) 2008, 2009 Matth�us G. Chajdas
    Contact: shaderx8@anteru.net

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef VTM_INDIRECTION_TEXTURE_H
#define VTM_INDIRECTION_TEXTURE_H

#include <vector>

class IndirectionTexture
{
public:
	IndirectionTexture (int size);

	void Set (const int page, const std::pair<float, float> uv, const float scale);

	const void*	GetData () const;
	int			GetDataSize () const;
	int			GetDataStride () const;

private:
	struct Entry_t
	{
		float	u;
		float	v;
		float	scale;
	};

	std::vector<Entry_t>	table_;
	int						stride_;
};

#endif