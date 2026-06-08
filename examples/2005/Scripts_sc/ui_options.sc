event OnChar 100;
event OnMessage 200;

maintask t0
{
	var object tv0;
	var object tv1;
	var int tv2;
	var float tv3;
	var float tv4;
	var float tv5;
	var float tv6;
	var float tv7;
	var float tv8;
	var float tv9;
	var float tv10;
	var float tv11;
	var float tv12;
	var float tv13;
	var float tv14;
	var bool tv15;
	var bool tv16;
	var bool tv17;
	var bool tv18;

	void init(void)
	{
		f_39_a0_v();
		@CreateWindow("options_border.xml", false, tv0);
		tv2 = -1;
		f_12c_a1_v(0);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		f_67_a0_v();
		@SendMessageToParent(1);
	}

	int f_19_a1_i(float a0)
	{
		return 100 * (a0 - 0.5) / 2.5;
	}

	float f_21_a1_f(int a0)
	{
		return 0.5 + 2.5 * a0 / 100;
	}

	int f_29_a1_i(float a0)
	{
		return 100 * (a0 - 0.10000000149011612) / 4.900000095367432;
	}

	float f_31_a1_f(int a0)
	{
		return 0.10000000149011612 + 4.900000095367432 * a0 / 100;
	}

	void f_39_a0_v(void)
	{
		@GetGammaCorrection(tv3);
		tv9 = tv3;
		@IsShadowsEnabled(tv17);
		tv15 = tv17;
		@GetVolMaster(tv4);
		tv10 = tv4;
		@GetVolMusic(tv5);
		tv11 = tv5;
		@GetVolVoice(tv6);
		tv12 = tv6;
		@GetVolSounds(tv7);
		tv13 = tv7;
		@GetMouseSensivity(tv14);
		tv8 = tv14;
		@IsMouseInverted(tv18);
		tv16 = tv18;
	}

	void f_52_a0_v(void)
	{
		@SetGammaCorrection(tv3);
		@EnableShadows(tv15);
		@SetVolMaster(tv4);
		@SetVolMusic(tv5);
		@SetVolVoice(tv6);
		@SetVolSounds(tv7);
		@SetMouseSensivity(tv8);
		@InvertMouse(tv16);
		@SaveConfig();
		@WriteBinds();
	}

	void f_67_a0_v(void)
	{
		@SetGammaCorrection(tv9);
		@EnableShadows(tv17);
		@SetVolMaster(tv10);
		@SetVolMusic(tv11);
		@SetVolVoice(tv12);
		@SetVolSounds(tv13);
		@SetMouseSensivity(tv14);
		@InvertMouse(tv18);
	}

	void f_78_a1_v(int a0)
	{
		if (a0 == 0) {
			@SendMessage(f_19_a1_i(tv3), "gamma_scrollbar");
			@SendMessage(tv15 ? 1 : 0, "shadow_check");
		} else {
			if (a0 == 1) {
				@SendMessage(100 * tv4, "master_scrollbar");
				@SendMessage(100 * tv5, "music_scrollbar");
				@SendMessage(100 * tv6, "voice_scrollbar");
				@SendMessage(100 * tv7, "sounds_scrollbar");
			} else {
				if (a0 == 2) {
					@SendMessage(f_29_a1_i(tv8), "sensivity_scrollbar");
					@SendMessage(tv16 ? 1 : 0, "invert_mouse_check");
				}
			}
		}
	}

	void OnMessage(int a0, string a1, object a2)
	{
		if (a1 == "key_form") {
			@CaptureKeyboard();
		} else {
			if (a1 == "apply") {
				disable OnMessage;
				f_52_a0_v();
				@SendMessageToParent(1);
			} else {
				if (a1 == "video") {
					f_12c_a1_v(0);
					return;
				} else {
					if (a1 == "audio") {
						f_12c_a1_v(1);
						return;
					} else {
						if (a1 == "controls") {
							f_12c_a1_v(2);
							return;
						}
					}
				}
			}
		}
		if (tv2 == 0) {
			if (a1 == "gamma_scrollbar") {
				tv3 = f_21_a1_f(a0);
				@SetGammaCorrection(tv3);
			} else {
				if (a1 == "shadow_check") {
					tv15 = a0 != 0;
				}
			}
		} else {
			if (tv2 == 1) {
				if (a1 == "master_scrollbar") {
					tv4 = a0 / 100.0;
					@SetVolMaster(tv4);
				} else {
					if (a1 == "music_scrollbar") {
						tv5 = a0 / 100.0;
						@SetVolMusic(tv5);
					} else {
						if (a1 == "voice_scrollbar") {
							tv6 = a0 / 100.0;
							@SetVolVoice(tv6);
						} else {
							if (a1 == "sounds_scrollbar") {
								tv7 = a0 / 100.0;
								@SetVolSounds(tv7);
							}
						}
					}
				}
			} else {
				if (tv2 == 2) {
					if (a1 == "sensivity_scrollbar") {
						tv8 = f_31_a1_f(a0);
					} else {
						if (a1 == "invert_mouse_check") {
							tv16 = a0 != 0;
						}
					}
				}
			}
		}
	}

	void f_12c_a1_v(int a0)
	{
		if (tv2 == a0) {
			return;
		}
		tv2 = a0;
		if (tv1) {
			tv1->DestroyWindow();
		}
		if (a0 == 0) {
			@CreateWindow("video_page.xml", false, tv1);
			@SendMessage(1, "video");
			@SendMessage(0, "audio");
			@SendMessage(0, "controls");
		} else {
			if (a0 == 1) {
				@CreateWindow("audio_page.xml", false, tv1);
				@SendMessage(0, "video");
				@SendMessage(1, "audio");
				@SendMessage(0, "controls");
			} else {
				if (a0 == 2) {
					@SendMessage(0, "video");
					@SendMessage(0, "audio");
					@SendMessage(1, "controls");
					@CreateWindow("control_page.xml", false, tv1);
				}
			}
		}
		f_78_a1_v(a0);
	}
}

