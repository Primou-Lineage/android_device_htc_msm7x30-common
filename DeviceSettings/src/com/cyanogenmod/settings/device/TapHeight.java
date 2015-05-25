package com.cyanogenmod.settings.device;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.SharedPreferences.Editor;
import android.preference.PreferenceManager;
import java.lang.Integer;

public class TapHeight {

    private static final String FILE = "/sys/android_touch/dt2w_barrier_y";

    public static boolean isSupported() {
        return Utils.fileExists(FILE);
    }

    public static void restore(Context context) {
        if (!isSupported())
            return;
        SharedPreferences sharedPrefs = PreferenceManager.getDefaultSharedPreferences(context);
        int value = sharedPrefs.getInt(DevicePreferenceActivity.KEY_TAP_HEIGHT, getValue());
        Utils.writeValue(FILE, "" + (1800 - value));
    }

    public static int getValue() {
        if (!isSupported())
            return 0;
        return 1800 - Integer.parseInt(Utils.readOneLine(FILE));
    }

    public static void setValue(Context context, int value) {
        if (!isSupported())
            return;
        Utils.writeValue(FILE, "" + (1800 - value));
        SharedPreferences sharedPrefs = PreferenceManager.getDefaultSharedPreferences(context);
        SharedPreferences.Editor editor = sharedPrefs.edit();
        editor.putInt(DevicePreferenceActivity.KEY_TAP_HEIGHT, getValue());
        editor.commit();
    }

}
