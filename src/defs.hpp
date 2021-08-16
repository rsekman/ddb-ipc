#define DDB_API_LEVEL 8
#define DDB_IPC_VERSION_MAJOR 0
#define DDB_IPC_VERSION_MINOR 1
#define DDB_IPC_PROJECT_ID "ddb_ipc"
#define DDB_IPC_PROJECT_NAME "DeaDBeef IPC"
#define DDB_IPC_PROJECT_DESC "Provides socket-based IPC using JSON messages."
#define DDB_IPC_PROJECT_URL "https://github.com/rsekman/ddb-ipc"
#define DDB_IPC_DEFAULT_SOCKET "/tmp/ddb_socket"
#define DDB_IPC_POLL_FREQ 1000 // Socket polling frequency in ms
#define DDB_IPC_MAX_MESSAGE_LENGTH 4096
#define DDB_IPC_LICENSE_TEXT  \
    "Copyright 2021 Robin Ekman\n" \
    "\n" \
    "This program is free software: you can redistribute it and/or modify\n" \
    "it under the terms of the GNU General Public License as published by\n" \
    "the Free Software Foundation, either version 3 of the License, or\n" \
    "(at your option) any later version.\n" \
    "\n" \
    "This program is distributed in the hope that it will be useful,\n" \
    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n" \
    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n" \
    "GNU General Public License for more details.\n" \
    "\n" \
    "You should have received a copy of the GNU General Public License\n" \
    "along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"

#define DDB_IPC_LOG_NONE  0
#define DDB_IPC_LOG_ERR   1
#define DDB_IPC_LOG_WARN  2
#define DDB_IPC_LOG_DEBUG 3

#define DDB_IPC_LOGLEVEL DDB_IPC_LOG_DEBUG

#define DDB_IPC_ERR \
    if (DDB_IPC_LOGLEVEL < DDB_IPC_LOG_ERR) {} \
    else std::cerr << "[ddb_ipc_err] "
#define DDB_IPC_WARN \
    if (DDB_IPC_LOGLEVEL < DDB_IPC_LOG_WARN) {} \
    else std::cerr << "[ddb_ipc] [warn] "
#define DDB_IPC_DEBUG \
    if (DDB_IPC_LOGLEVEL < DDB_IPC_LOG_DEBUG) {} \
    else std::cerr << "[ddb_ipc] [debug] "

#define DDB_IPC_RESPONSE_OK     "OK"
#define DDB_IPC_RESPONSE_ERR    "ERROR"
#define DDB_IPC_RESPONSE_BADQ   "BAD REQUEST"
