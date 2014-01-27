#ifndef _THREADS_H__
#define _THREADS_H__

#include <cassert>
//#define LOKI_DEFAULT_THREADING ::Loki::SingleThreaded
//#define LOKI_DEFAULT_THREADING_NO_OBJ_LEVEL ::Loki::SingleThreaded
#define LOKI_DEFAULT_MUTEX ::Loki::Mutex

#define LOKI_THREADS_MUTEX(x)           CRITICAL_SECTION (x);
#define LOKI_THREADS_MUTEX_INIT(x)      ::InitializeCriticalSection (x)
#define LOKI_THREADS_MUTEX_DELETE(x)    ::DeleteCriticalSection (x)
#define LOKI_THREADS_MUTEX_LOCK(x)      ::EnterCriticalSection (x)
#define LOKI_THREADS_MUTEX_UNLOCK(x)    ::LeaveCriticalSection (x)
#define LOKI_THREADS_LONG               LONG
#define LOKI_THREADS_MUTEX_CTOR(x)

namespace Loki
{
////////////////////////////////////////////////////////////////////////////////
///  \class Mutex
//
///  \ingroup ThreadingGroup
///  A simple and portable Mutex.  A default policy class for locking objects.
////////////////////////////////////////////////////////////////////////////////

	class Mutex
	{
	public:
		Mutex() LOKI_THREADS_MUTEX_CTOR(mtx_)
		{
			LOKI_THREADS_MUTEX_INIT(&mtx_);
		}
		~Mutex()
		{
			LOKI_THREADS_MUTEX_DELETE(&mtx_);
		}
		void Lock()
		{
			LOKI_THREADS_MUTEX_LOCK(&mtx_);
		}
		void Unlock()
		{
			LOKI_THREADS_MUTEX_UNLOCK(&mtx_);
		}
	private:
		/// Copy-constructor not implemented.
		Mutex(const Mutex &);
		/// Copy-assignement operator not implemented.
		Mutex & operator = (const Mutex &);
		LOKI_THREADS_MUTEX(mtx_)
	};
}

#endif