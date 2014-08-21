/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.TrafficStats
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class TrafficStats;
	class TrafficStats
		: public object<TrafficStats>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)

		explicit TrafficStats(jobject jobj)
		: object<TrafficStats>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static jlong getWifiTx(jlong);
		static jlong getWifiRx(jlong);
		static jlong getMobileTx(jlong);
		static jlong getMobileRx(jlong);
		static jlong updateWifiTx(jlong);
		static jlong updateWifiRx(jlong);
		static jlong updateMobileTx(jlong);
		static jlong updateMobileRx(jlong);
		static void reset();
		static void update();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > DEV_FILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > GPRSLINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > WIFILINE;
	}; //class TrafficStats

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::platformtools::TrafficStats::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jlong com::tencent::mm::sdk::platformtools::TrafficStats::getWifiTx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::getWifiRx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(2), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::getMobileTx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::getMobileRx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::updateWifiTx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::updateWifiRx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::updateMobileTx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(7),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(a0);
}

jlong com::tencent::mm::sdk::platformtools::TrafficStats::updateMobileRx(jlong a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(8),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(a0);
}

void com::tencent::mm::sdk::platformtools::TrafficStats::reset()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(9),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(9), 
		void
	>();
}

void com::tencent::mm::sdk::platformtools::TrafficStats::update()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_NAME(10),
		com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_METHOD_SIGNATURE(10), 
		void
	>();
}


static_field<
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_NAME(8),
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::platformtools::TrafficStats::DEV_FILE;

static_field<
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_NAME(9),
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::platformtools::TrafficStats::GPRSLINE;

static_field<
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_NAME(10),
	com::tencent::mm::sdk::platformtools::TrafficStats::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::platformtools::TrafficStats::WIFILINE;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::TrafficStats,"com/tencent/mm/sdk/platformtools/TrafficStats")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,1,"getWifiTx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,2,"getWifiRx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,3,"getMobileTx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,4,"getMobileRx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,5,"updateWifiTx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,6,"updateWifiRx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,7,"updateMobileTx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,8,"updateMobileRx","(J)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,9,"reset","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::TrafficStats,10,"update","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,0,"bl","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,1,"bm","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,2,"bn","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,3,"bo","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,4,"bp","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,5,"bq","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,6,"br","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,7,"bs","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,8,"DEV_FILE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,9,"GPRSLINE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::TrafficStats,10,"WIFILINE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_TRAFFICSTATS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION