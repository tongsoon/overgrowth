//-----------------------------------------------------------------------------
//           Name: linux_time.cpp
//      Developer: Wolfire Games LLC
//    Description: 
//        License: Read below
//-----------------------------------------------------------------------------
//
//   Copyright 2022 Wolfire Games LLC
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//
//-----------------------------------------------------------------------------
#include <Compat/time.h>

#include <sys/time.h>
#include <stdlib.h>

uint64_t GetPrecisionTime() {
    struct timeval time;
    
    gettimeofday(&time, NULL);
    return time.tv_usec +
            (time.tv_sec * 1000 * 1000);
}

uint64_t ToNanoseconds(uint64_t time){
    return time * 1000;
}
