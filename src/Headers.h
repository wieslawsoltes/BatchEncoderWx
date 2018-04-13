#pragma once

#include <string>
#include <utility>
#include <memory>
#include <array>
#include <vector>
#include <thread>
#include <algorithm>
#include <functional>

#include "utilities\FileSystem.h"
#include "utilities\Log.h"
#include "utilities\FileLog.h"
#include "utilities\String.h"
#include "utilities\TimeCount.h"
#include "utilities\Utf8String.h"
#include "utilities\Utilities.h"

#include "config\Config.h"

#include "worker\WorkerContext.h"
#include "worker\OutputPath.h"
#include "worker\ToolDownloader.h"
#include "worker\Worker.h"
#include "worker\Win32.h"
