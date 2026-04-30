#include "SatellitePlaylistPlugin.hxx"
#include "../PlaylistPlugin.hxx"
#include "../SongEnumerator.hxx"
#include "song/DetachedSong.hxx"
#include "tag/Tag.hxx"
#include "tag/Builder.hxx"
#include "util/StringStrip.hxx"
#include "util/StringCompare.hxx"
#include "input/TextInputStream.hxx"
#include "input/InputStream.hxx"

class SatellitePlaylist final : public SongEnumerator {

};