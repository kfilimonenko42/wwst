#pragma once

#pragma warning(disable : 4996)

#include <winsock2.h>
#include "wx/wx.h"
#include "wx/notifmsg.h"
#include "wx/popupwin.h"
#include "wx/taskbar.h"
#include "wx/simplebook.h"

#ifdef _WIN32
#define _WIN32_WINNT 0x0A00
#define WIN32_LEAN_AND_MEAN
#endif // _WIN32

#define BOOST_ASIO_STANDALONE
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>


