event OnChar 100;
event OnKeyDown 101;
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
	var float tv15;
	var float tv16;
	var float tv17;
	var float tv18;
	var float tv19;
	var float tv20;
	var float tv21;
	var float tv22;
	var float tv23;
	var float tv24;
	var bool tv25;
	var bool tv26;
	var bool tv27;
	var bool tv28;
	var bool tv29;
	var bool tv30;
	var bool tv31;
	var bool tv32;
	var bool tv33;
	var bool tv34;
	var bool tv35;
	var bool tv36;
	var bool tv37;
	var bool tv38;
	var bool tv39;
	var bool tv40;
	var bool tv41;
	var bool tv42;
	var bool tv43;
	var bool tv44;

	void init(void)
	{
		f_151_a0_v();
		@CreateWindow("options_border.xml", false, tv0);
		tv2 = -1;
		f_3cf_a1_v(0);
		@CaptureKeyboard();
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		f_1d8_a0_v();
		@SendMessageToParent(1);
	}

	void OnKeyDown(int a0)
	{
		if (a0 == 266) {
			if (tv2 == 0) {
				f_3cf_a1_v(1);
			} else {
				if (tv2 == 1) {
					f_3cf_a1_v(2);
				} else {
					if (tv2 == 2) {
						f_3cf_a1_v(0);
					}
				}
			}
		} else {
			if (a0 == 265) {
				if (tv2 == 0) {
					f_3cf_a1_v(2);
				} else {
					if (tv2 == 1) {
						f_3cf_a1_v(0);
					} else {
						if (tv2 == 2) {
							f_3cf_a1_v(1);
						}
					}
				}
			}
		}
	}

	int f_50_a1_i(float a0)
	{
		return 100 * (a0 - 70.0) / 40.0;
	}

	float f_58_a1_f(int a0)
	{
		return 70.0 + 40.0 * a0 / 100;
	}

	int f_60_a1_i(float a0)
	{
		float L0;
		@GetMaxAnisotropic(L0);
		return 100 * (a0 - 0.0) / (L0 - 0.0);
	}

	float f_6b_a1_f(int a0)
	{
		float L0;
		@GetMaxAnisotropic(L0);
		return 0.0 + (L0 - 0.0) * a0 / 100;
	}

	int f_76_a1_i(float a0)
	{
		return 100 * (a0 - 0.5) / 0.75;
	}

	float f_7e_a1_f(int a0)
	{
		return 0.5 + 0.75 * a0 / 100;
	}

	int f_86_a1_i(float a0)
	{
		return 100 * (a0 - 0.10000000149011612) / 4.900000095367432;
	}

	float f_8e_a1_f(int a0)
	{
		return 0.10000000149011612 + 4.900000095367432 * a0 / 100;
	}

	float f_96_a1_f(int a0)
	{
		return 0.10000000149011612 + 4.900000095367432 * a0 / 100;
	}

	float f_9e_a1_f(int a0)
	{
		return 0.10000000149011612 + 4.900000095367432 * a0 / 100;
	}

	void f_a6_a1_v(float a0)
	{
		float L0;
		object L1;
		@round(a0, L0);
		@SetPlayerFOV(a0);
		@CreateFloatVector(L1);
		L1->add(L0);
		@SendMessage(104, "video_page", L1);
	}

	void f_b5_a1_v(float a0)
	{
		float L0;
		object L1;
		@round(a0, L0);
		@SetAnisotropic(L0);
		@CreateFloatVector(L1);
		L1->add(L0);
		L1->add(L0 != tv23);
		@SendMessage(103, "video_page", L1);
	}

	void f_c7_a1_v(float a0)
	{
		object L0;
		@SetGammaCorrection(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(100, "video_page", L0);
	}

	void f_d4_a1_v(float a0)
	{
		float L0;
		object L1;
		@round(a0, L0);
		@SetResolution(L0);
		@CreateFloatVector(L1);
		L1->add(L0);
		L1->add(L0 != tv22);
		@SendMessage(101, "video_page", L1);
	}

	void f_e6_a1_v(float a0)
	{
		object L0;
		@SetVolMaster(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(105, "audio_page", L0);
	}

	void f_f3_a1_v(float a0)
	{
		object L0;
		@SetVolMusic(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(106, "audio_page", L0);
	}

	void f_100_a1_v(float a0)
	{
		object L0;
		@SetVolVoice(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(107, "audio_page", L0);
	}

	void f_10d_a1_v(float a0)
	{
		object L0;
		@SetVolSounds(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(108, "audio_page", L0);
	}

	void f_11a_a1_v(float a0)
	{
		object L0;
		@SetMouseSensivity(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(109, "control_page", L0);
	}

	void f_127_a1_v(float a0)
	{
		object L0;
		@SetGamepadSensivity(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(110, "control_page", L0);
	}

	void f_134_a1_v(float a0)
	{
		object L0;
		@SetGamepadUISensivity(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		@SendMessage(111, "control_page", L0);
	}

	void f_141_a1_v(bool a0)
	{
		object L0;
		@EnableVSync(a0);
		@CreateFloatVector(L0);
		L0->add(a0);
		L0->add(a0 != tv40);
		@SendMessage(112, "video_page", L0);
	}

	void f_151_a0_v(void)
	{
		@GetCurrentResolution(tv11);
		tv22 = tv11;
		@GetCurrentAnisotropic(tv12);
		tv23 = tv12;
		@GetGammaCorrection(tv3);
		tv14 = tv3;
		@GetPlayerFOV(tv13);
		tv24 = tv13;
		@IsVSyncEnabled(tv40);
		tv30 = tv40;
		@IsShadowsEnabled(tv35);
		tv25 = tv35;
		@IsDOFEnabled(tv37);
		tv27 = tv37;
		@IsSSAOEnabled(tv36);
		tv26 = tv36;
		@IsBloomEnabled(tv38);
		tv28 = tv38;
		@IsMotionBlurEnabled(tv39);
		tv29 = tv39;
		@IsFXAAEnabled(tv44);
		tv34 = tv44;
		@GetVolMaster(tv4);
		tv15 = tv4;
		@GetVolMusic(tv5);
		tv16 = tv5;
		@GetVolVoice(tv6);
		tv17 = tv6;
		@GetVolSounds(tv7);
		tv18 = tv7;
		@GetMouseSensivity(tv19);
		tv8 = tv19;
		@IsMouseInverted(tv41);
		tv31 = tv41;
		@GetGamepadSensivity(tv20);
		tv9 = tv20;
		@GetGamepadUISensivity(tv21);
		tv10 = tv21;
		@IsGamepadInverted(tv42);
		tv32 = tv42;
		@IsGamepadRumbleEnabled(tv43);
		tv33 = tv43;
	}

	void f_191_a0_v(void)
	{
		f_d4_a1_v(tv11);
		f_b5_a1_v(tv12);
		f_c7_a1_v(tv3);
		f_a6_a1_v(tv13);
		@EnableShadows(tv25);
		f_141_a1_v(tv30);
		@EnableDOF(tv27);
		@EnableSSAO(tv26);
		@EnableBloom(tv28);
		@EnableMotionBlur(tv29);
		@EnableFXAA(tv34);
		f_e6_a1_v(tv4);
		f_f3_a1_v(tv5);
		f_100_a1_v(tv6);
		f_10d_a1_v(tv7);
		f_11a_a1_v(tv8);
		f_127_a1_v(tv9);
		f_134_a1_v(tv10);
		@InvertMouse(tv31);
		@InvertGamepad(tv32);
		@EnableGamepadRumble(tv33);
		@SaveConfig();
		@WriteBinds();
	}

	void f_1d8_a0_v(void)
	{
		f_d4_a1_v(tv22);
		f_b5_a1_v(tv23);
		f_c7_a1_v(tv14);
		f_a6_a1_v(tv24);
		f_141_a1_v(tv40);
		@EnableShadows(tv35);
		@EnableDOF(tv37);
		@EnableSSAO(tv36);
		@EnableBloom(tv38);
		@EnableMotionBlur(tv39);
		@EnableFXAA(tv44);
		f_e6_a1_v(tv15);
		f_f3_a1_v(tv16);
		f_100_a1_v(tv17);
		f_10d_a1_v(tv18);
		f_11a_a1_v(tv19);
		f_127_a1_v(tv20);
		f_134_a1_v(tv21);
		@InvertMouse(tv41);
		@InvertGamepad(tv42);
		@EnableGamepadRumble(tv43);
	}

	void f_21b_a1_v(int a0)
	{
		if (a0 == 0) {
			@SendMessage(f_60_a1_i(tv12), "anisotropic_scrollbar");
			@SendMessage(f_76_a1_i(tv3), "gamma_scrollbar");
			@SendMessage(f_50_a1_i(tv13), "fov_scrollbar");
			@SendMessage(tv30 ? 1 : 0, "vsync_check");
			@SendMessage(tv25 ? 1 : 0, "shadow_check");
			@SendMessage(tv27 ? 1 : 0, "dof_check");
			@SendMessage(tv26 ? 1 : 0, "ssao_check");
			@SendMessage(tv28 ? 1 : 0, "bloom_check");
			@SendMessage(tv29 ? 1 : 0, "motionblur_check");
			@SendMessage(tv34 ? 1 : 0, "fxaa_check");
		} else {
			if (a0 == 1) {
				@SendMessage(100 * tv4, "master_scrollbar");
				@SendMessage(100 * tv5, "music_scrollbar");
				@SendMessage(100 * tv6, "voice_scrollbar");
				@SendMessage(100 * tv7, "sounds_scrollbar");
			} else {
				if (a0 == 2) {
					@SendMessage(f_86_a1_i(tv8), "sensivity_scrollbar");
					@SendMessage(f_86_a1_i(tv9), "gamepad_scrollbar");
					@SendMessage(f_86_a1_i(tv10), "gamepad_ui_scrollbar");
					@SendMessage(tv31 ? 1 : 0, "invert_mouse_check");
					@SendMessage(tv32 ? 1 : 0, "invert_gamepad_check");
					@SendMessage(tv33 ? 1 : 0, "rumble_gamepad_check");
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
				f_191_a0_v();
				@SendMessageToParent(1);
			}
		}
		if (a1 == "cancel") {
			disable OnMessage;
			f_1d8_a0_v();
			@SendMessageToParent(1);
		} else {
			if (a1 == "video") {
				f_3cf_a1_v(0);
				return;
			} else {
				if (a1 == "audio") {
					f_3cf_a1_v(1);
					return;
				} else {
					if (a1 == "controls") {
						f_3cf_a1_v(2);
						return;
					}
				}
			}
		}
		if (tv2 == 0) {
			if (a1 == "resolution_button_next") {
				float L0;
				@GetResolutionsCount(L0);
				if (tv11 >= L0 - 1) {
					tv11 = 0;
				} else {
					tv11 = tv11 + 1;
				}
				f_d4_a1_v(tv11);
			} else {
				if (a1 == "resolution_button_prev") {
					float L1;
					@GetResolutionsCount(L1);
					if (tv11 <= 0) {
						tv11 = L1 - 1;
					} else {
						tv11 = tv11 - 1;
					}
					f_d4_a1_v(tv11);
				} else {
					if (a1 == "anisotropic_scrollbar") {
						tv12 = f_6b_a1_f(a0);
						f_b5_a1_v(tv12);
					} else {
						if (a1 == "gamma_scrollbar") {
							tv3 = f_7e_a1_f(a0);
							f_c7_a1_v(tv3);
						} else {
							if (a1 == "fov_scrollbar") {
								tv13 = f_58_a1_f(a0);
								f_a6_a1_v(tv13);
							} else {
								if (a1 == "vsync_check") {
									tv30 = a0 != 0;
									f_141_a1_v(tv30);
								} else {
									if (a1 == "shadow_check") {
										tv25 = a0 != 0;
									} else {
										if (a1 == "dof_check") {
											tv27 = a0 != 0;
										} else {
											if (a1 == "ssao_check") {
												tv26 = a0 != 0;
											} else {
												if (a1 == "bloom_check") {
													tv28 = a0 != 0;
												} else {
													if (a1 == "motionblur_check") {
														tv29 = a0 != 0;
													} else {
														if (a1 == "fxaa_check") {
															tv34 = a0 != 0;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} else {
			if (tv2 == 1) {
				if (a1 == "master_scrollbar") {
					tv4 = a0 / 100.0;
					f_e6_a1_v(tv4);
				} else {
					if (a1 == "music_scrollbar") {
						tv5 = a0 / 100.0;
						f_f3_a1_v(tv5);
					} else {
						if (a1 == "voice_scrollbar") {
							tv6 = a0 / 100.0;
							f_100_a1_v(tv6);
						} else {
							if (a1 == "sounds_scrollbar") {
								tv7 = a0 / 100.0;
								f_10d_a1_v(tv7);
							}
						}
					}
				}
			} else {
				if (tv2 == 2) {
					if (a1 == "sensivity_scrollbar") {
						tv8 = f_8e_a1_f(a0);
						f_11a_a1_v(tv8);
					} else {
						if (a1 == "invert_mouse_check") {
							tv31 = a0 != 0;
						} else {
							if (a1 == "gamepad_scrollbar") {
								tv9 = f_96_a1_f(a0);
								f_127_a1_v(tv9);
							} else {
								if (a1 == "gamepad_ui_scrollbar") {
									tv10 = f_9e_a1_f(a0);
									f_134_a1_v(tv10);
								} else {
									if (a1 == "invert_gamepad_check") {
										tv32 = a0 != 0;
									} else {
										if (a1 == "rumble_gamepad_check") {
											tv33 = a0 != 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_3cf_a1_v(int a0)
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
			f_141_a1_v(tv30);
			f_b5_a1_v(tv12);
			f_d4_a1_v(tv11);
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
		f_21b_a1_v(a0);
	}
}

