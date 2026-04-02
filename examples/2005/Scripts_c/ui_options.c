maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object, int var_2_int, float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, float var_9_float, float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool)
	{
		func_57(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool);
		@CreateWindow("options_border.xml", false, var_0_object);
		var_2_int = -1;
		func_300(var_17_bool, var_18_bool, 0);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	// @pe
	void event_100(object var_0_object, object var_1_object, int var_2_int, float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, float var_9_float, float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int)
	{
		func_103(var_12_float, var_13_float, var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int);
		@SendMessageToParent(1);
	}

	// @pe
	void event_200(object var_0_object, object var_1_object, int var_2_int, float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, float var_9_float, float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool, int var_19_int, string var_20_string, object var_21_object)
	{
		if(var_20_string == "key_form") {
			@CaptureKeyboard();
		} else {
							if(var_20_string == "apply") {
								disable event_200;
								func_82(var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_int, var_20_string, var_21_object);
								@SendMessageToParent(1);
								}

		}
	Label_227:
		for(;;) {
			if(var_2_int == 0) {
				if(var_20_string == "gamma_scrollbar") {
					float var_28_float; int var_29_int;
					var_19_int = var_29_int;
					func_33(var_28_float, var_29_int);
					@SetGammaCorrection(var_28_float);
				} else {
						if(var_20_string == "shadow_check")
							var_15_bool = var_19_int != 0;
						if(var_2_int == 1) {
							if(var_20_string == "master_scrollbar") {
								@SetVolMaster(var_19_int / 100.0);
							} else {
							if(var_20_string == "music_scrollbar") {
								@SetVolMusic(var_19_int / 100.0);
							} else if(var_20_string == "voice_scrollbar") {
								@SetVolVoice(var_19_int / 100.0);
							} else if(var_20_string == "sounds_scrollbar") {
								@SetVolSounds(var_19_int / 100.0);
							}
						}
						if(!(var_2_int == 2)) goto Label_299;
						if(var_20_string == "sensivity_scrollbar") {
							float var_56_float; int var_57_int;
							var_19_int = var_57_int;
							func_49(var_56_float, var_57_int);
							var_8_float = var_56_float;
						} else if(var_20_string == "invert_mouse_check") {
							var_16_bool = var_19_int != 0;

						}
					}
					}
					} else {
			if(var_20_string == "video") {
				func_300(var_20_string, var_21_object, 0);
				return 0;
			EMIT "GOTO 0xe3";
			}
			if(var_20_string == "audio") {
				func_300(var_20_string, var_21_object, 1);
				return 0;
			EMIT "GOTO 0xe3";
			}
			if(!(var_20_string == "controls")) goto Label_227;
			func_300(var_20_string, var_21_object, 2);
			return 0;
					}
		Label_299:
			for(;;) {
				return 0;

			}

		}
	
	}

}


// @pe
void func_33(float var_28_float, int var_29_int)
{
	var_28_float = 0.5 + ((2.5 * var_29_int) / 100);
}


void func_103(float var_9_float, float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, bool var_17_bool, bool var_18_bool)
{
	@SetGammaCorrection(var_9_float);
	@EnableShadows(var_17_bool);
	@SetVolMaster(var_10_float);
	@SetVolMusic(var_11_float);
	@SetVolVoice(var_12_float);
	@SetVolSounds(var_13_float);
	@SetMouseSensivity(var_14_float);
	@InvertMouse(var_18_bool);
}


// @pe
void func_41(int var_65_int, float var_66_float)
{
	var_65_int = (100 * (var_66_float - 0.1)) / 4.9;
}


// @pe
void func_300(object var_1_object, int var_2_int, int var_21_int)
{
	if(var_2_int == var_21_int)
		return 0;
	var_2_int = var_21_int;
	if(var_1_object != 0)
		var_1_object->DestroyWindow(); //@t
	if(var_21_int == 0) {
		@CreateWindow("video_page.xml", false, var_1_object);
		@SendMessage(1, "video");
		@SendMessage(0, "audio");
		@SendMessage(0, "controls");
	} else if(var_21_int == 1) {
			@CreateWindow("audio_page.xml", false, var_1_object);
			@SendMessage(0, "video");
			@SendMessage(1, "audio");
			@SendMessage(0, "controls");
	}
Label_368:
	for(;;) {
		int var_34_int;
		var_21_int = var_34_int;
		func_120(var_14_float, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_21_int, var_34_int);
		return 0;

	}
	
	if(!(var_21_int == 2)) goto Label_368;
	@SendMessage(0, "video");
	@SendMessage(0, "audio");
	@SendMessage(1, "controls");
	@CreateWindow("control_page.xml", false, var_1_object);
}


// @pe
void func_49(float var_56_float, int var_57_int)
{
	var_56_float = 0.1 + ((4.9 * var_57_int) / 100);
}


void func_82(float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, bool var_15_bool, bool var_16_bool)
{
	@SetGammaCorrection(var_3_float);
	@EnableShadows(var_15_bool);
	@SetVolMaster(var_4_float);
	@SetVolMusic(var_5_float);
	@SetVolVoice(var_6_float);
	@SetVolSounds(var_7_float);
	@SetMouseSensivity(var_8_float);
	@InvertMouse(var_16_bool);
	@SaveConfig();
	@WriteBinds();
}


// @pe
void func_120(float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, int var_34_int)
{
	if(var_34_int == 0) {
		int var_37_int;
		func_25(var_37_int, var_3_float);
		@SendMessage(var_37_int, "gamma_scrollbar");
		if(var_15_bool != 0)
			var_46_int = 1;
		else
			var_48_int = 0; //@pi
			if(var_34_int == 1) {
				@SendMessage((100 * var_4_float), "master_scrollbar");
				@SendMessage((100 * var_5_float), "music_scrollbar");
				@SendMessage((100 * var_6_float), "voice_scrollbar");
				@SendMessage((100 * var_7_float), "sounds_scrollbar");
		}
		@SendMessage(var_46_int, "shadow_check");
			} else if(var_34_int == 2) {
		int var_65_int;
		func_41(var_65_int, var_8_float);
		@SendMessage(var_65_int, "sensivity_scrollbar");
		if(var_16_bool != 0)
			var_74_int = 1;
		else
			var_76_int = 0; //@pi
		@SendMessage(var_74_int, "invert_mouse_check");
			}
	for(;;) {
		return 0;

	}
	
}


void func_57(float var_3_float, float var_4_float, float var_5_float, float var_6_float, float var_7_float, float var_8_float, float var_9_float, float var_10_float, float var_11_float, float var_12_float, float var_13_float, float var_14_float, bool var_15_bool, bool var_16_bool, bool var_17_bool, bool var_18_bool)
{
	@GetGammaCorrection(var_3_float);
	var_9_float = var_3_float;
	@IsShadowsEnabled(var_17_bool);
	var_15_bool = var_17_bool;
	@GetVolMaster(var_4_float);
	var_10_float = var_4_float;
	@GetVolMusic(var_5_float);
	var_11_float = var_5_float;
	@GetVolVoice(var_6_float);
	var_12_float = var_6_float;
	@GetVolSounds(var_7_float);
	var_13_float = var_7_float;
	@GetMouseSensivity(var_14_float);
	var_8_float = var_14_float;
	@IsMouseInverted(var_18_bool);
	var_16_bool = var_18_bool;
}


// @pe
void func_25(int var_37_int, float var_38_float)
{
	var_37_int = (100 * (var_38_float - 0.5)) / 2.5;
}


