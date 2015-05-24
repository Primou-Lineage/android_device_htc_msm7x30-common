#
# Property overrides msm7x30
#

PRODUCT_PROPERTY_OVERRIDES += \
	ro.sf.lcd_density=240 \
	ro.gsm.2nd_data_retry_config=max_retries=3,2000,2000,2000 \
	com.qc.hardware=true

# RIL
PRODUCT_PROPERTY_OVERRIDES += \
	rild.libpath=/system/lib/libhtc_ril.so \
	ro.ril.ecc.HTC-GCC=999,112,997 \
	ro.ril.ecc.HTC-WWE=999 \
	ro.ril.ecc.HTC-ELL=92,93,94 \
	ro.ril.enable.a52.HTC-ITA=1 \
	ro.ril.enable.a53.HTC-ITA=1 \
	ro.ril.enable.a52=0 \
	ro.ril.enable.a53=1 \
	ro.ril.disable.fd.plmn.prefix=23402,23410,23411 \
	ro.ril.enable.sdr=1 \
	ro.ril.enable.amr.wideband=1 \
	ro.ril.enable.dtm=1 \
	ro.ril.gprsclass=32 \
	ro.ril.hsdpa.category=28 \
	ro.ril.hsupa.category=9 \
	ro.ril.hsxpa=3 \
	ro.ril.def.agps.mode=2 \
	ro.ril.disable.power.collapse=1 \
	ro.telephony.ril.v3=signalstrength

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
	ro.telephony.default_network=0 \
	mobiledata.interfaces=gannet0,rmnet0,rmnet1,rmnet2 \
	ro.use_data_netmgrd=true

# WiFi
PRODUCT_PROPERTY_OVERRIDES += \
	wifi.interface=wlan0 \
	wifi.supplicant_scan_interval=15 \
	ro.tethering.kb_disconnect=1

# Display
PRODUCT_PROPERTY_OVERRIDES += \
	ro.opengles.version=131072 \
	debug.composition.type=gpu \
	debug.sf.hw=1 \
	debug.egl.hw=1 \
	debug.egl.recordable.rgba8888=1

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
	camera2.portability.force_api=1

# UMS
PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
	ro.sys.usb.default.config=mtp \
	persist.sys.usb.config=mtp

# Memory
PRODUCT_PROPERTY_OVERRIDES += \
	ro.config.low_ram=true \
	ro.sys.fw.bg_apps_limit=14 \
	ro.config.max_starting_bg=6

# Misc
PRODUCT_PROPERTY_OVERRIDES += \
	ro.setupwizard.enable_bypass=1 \
	ro.com.google.locationfeatures=1 \
	ro.product.locale.language=en \
	ro.product.locale.region=US

# Disable strict mode
PRODUCT_PROPERTY_OVERRIDES += \
	persist.sys.strictmode.visual=0 \
	persist.sys.strictmode.disable=1

