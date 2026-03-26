// @IMPORTS: CreateWindow/3,CaptureKeyboard/0,ProcessEvents/0,SendMessageToParent/1,GetMaxAnisotropic/1,round/2,SetPlayerFOV/1,CreateFloatVector/1,SendMessage/3,SetAnisotropic/1,SetGammaCorrection/1,SetResolution/1,SetVolMaster/1,SetVolMusic/1,SetVolVoice/1,SetVolSounds/1,SetMouseSensivity/1,SetGamepadSensivity/1,SetGamepadUISensivity/1,EnableVSync/1,GetCurrentResolution/1,GetCurrentAnisotropic/1,GetGammaCorrection/1,GetPlayerFOV/1,IsVSyncEnabled/1,IsShadowsEnabled/1,IsDOFEnabled/1,IsSSAOEnabled/1,IsBloomEnabled/1,IsMotionBlurEnabled/1,IsFXAAEnabled/1,GetVolMaster/1,GetVolMusic/1,GetVolVoice/1,GetVolSounds/1,GetMouseSensivity/1,IsMouseInverted/1,GetGamepadSensivity/1,GetGamepadUISensivity/1,IsGamepadInverted/1,IsGamepadRumbleEnabled/1,EnableShadows/1,EnableDOF/1,EnableSSAO/1,EnableBloom/1,EnableMotionBlur/1,EnableFXAA/1,InvertMouse/1,InvertGamepad/1,EnableGamepadRumble/1,SaveConfig/0,WriteBinds/0,SendMessage/2,GetResolutionsCount/1
// @STRINGS: W:options_border.xml|A:add|W:video_page|W:audio_page|W:control_page|W:anisotropic_scrollbar|W:gamma_scrollbar|W:fov_scrollbar|W:vsync_check|W:shadow_check|W:dof_check|W:ssao_check|W:bloom_check|W:motionblur_check|W:fxaa_check|W:master_scrollbar|W:music_scrollbar|W:voice_scrollbar|W:sounds_scrollbar|W:sensivity_scrollbar|W:gamepad_scrollbar|W:gamepad_ui_scrollbar|W:invert_mouse_check|W:invert_gamepad_check|W:rumble_gamepad_check|W:key_form|W:apply|W:cancel|W:video|W:audio|W:controls|W:resolution_button_next|W:resolution_button_prev|A:DestroyWindow|W:video_page.xml|W:audio_page.xml|W:control_page.xml
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,int,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool params=0
// @EVENT_100: op=0x11 vars=int
// @EVENT_101: op=0x19 vars=int
// @EVENT_200: op=0x2b6 vars=int,string,object
// @PE: 0x0,0x11,0x19,0x50,0x58,0x76,0x7e,0x86,0x8e,0x96,0x9e,0x21b,0x3cf

task_0_event_100(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int)
{
	func_472(var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int);
	SendMessageToParent((int)1);
	return 0;
}


task_0_event_101(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int)
{
	var_47_bool = var_45_int == (int)266;
	if(var_47_bool != 0) {
		var_49_bool = var_2_int == (int)0;
		if(var_49_bool != 0) {
			var_50_int = 0;
			func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)1);
		} else {
			var_206_bool = var_2_int == (int)1;
			if(var_206_bool != 0) {
				var_207_int = 0;
				func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)2);
				goto Label_52;
			}
			var_209_bool = var_2_int == (int)2;
			if(var_209_bool == 0) goto Label_52;
			var_210_int = 0;
			func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)0);
	}
		var_212_bool = var_45_int == (int)265;
		if(var_212_bool == 0) goto Label_79;
		var_214_bool = var_2_int == (int)0;
		if(var_214_bool != 0) {
			var_215_int = 0;
			func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)2);
			goto Label_79;
		}
		var_217_bool = var_2_int == (int)1;
		if(var_217_bool != 0) {
			var_218_int = 0;
			func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)0);
			goto Label_79;
		}
		var_220_bool = var_2_int == (int)2;
		if(var_220_bool == 0) goto Label_79;
		var_221_int = 0;
		func_975(var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, (int)1);
	}
Label_52:
	goto Label_79;
	
Label_79:
	return 0;
	
}


task_0_event_200(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, var_46_string, var_47_object)
{
	var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0;
	var_53_bool = var_46_string == "key_form";
	if(var_53_bool != 0) {
		CaptureKeyboard();
	} else {
							var_401_bool = var_46_string == "apply";
							if(var_401_bool == 0) goto Label_711;
							EventDisable(200);
							func_401(var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, var_46_string, var_47_object, var_48_float, var_49_float, var_50_float, var_51_float);
							SendMessageToParent((int)1);
	}
Label_711:
	var_55_bool = var_46_string == "cancel";
	if(var_55_bool != 0) {
		EventDisable(200);
		func_472(var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_45_int, var_46_string, var_47_object, var_48_float, var_49_float, var_50_float, var_51_float);
		SendMessageToParent((int)1);
	} else {
						var_257_bool = var_46_string == "video";
						if(var_257_bool != 0) {
							var_258_int = 0;
							func_975(var_47_object, var_48_float, var_49_float, var_50_float, var_51_float, (int)0);
							return 4;
						EMIT "GOTO 0x2ec";
						}
						var_395_bool = var_46_string == "audio";
						if(var_395_bool != 0) {
							var_396_int = 0;
							func_975(var_47_object, var_48_float, var_49_float, var_50_float, var_51_float, (int)1);
							return 4;
						EMIT "GOTO 0x2ec";
						}
						var_398_bool = var_46_string == "controls";
						if(var_398_bool == 0) goto Label_748;
						var_399_int = 0;
						func_975(var_47_object, var_48_float, var_49_float, var_50_float, var_51_float, (int)2);
						return 4;

	}
Label_748:
	var_127_bool = var_2_int == (int)0;
	if(var_127_bool != 0) {
		var_129_bool = var_46_string == "resolution_button_next";
		if(var_129_bool != 0) {
			GetResolutionsCount(var_50_float);
			var_131_int = var_50_float - (int)1;
			var_132_bool = var_11_float >= var_131_int;
			if(var_132_bool != 0) {
			} else {
				(float)0 = (float)0 + (int)1;
		}
			var_136_bool = var_46_string == "resolution_button_prev";
			if(var_136_bool != 0) {
				GetResolutionsCount(var_51_float);
				var_138_bool = var_11_float <= (int)0;
				if(var_138_bool != 0) {
					var_11_float = var_51_float - (int)1;
				} else {
					var_11_float = var_11_float - (int)1;
			}
				var_143_bool = var_46_string == "anisotropic_scrollbar";
				if(var_143_bool != 0) {
					var_144_float = 0; var_145_int = 0;
					var_45_int = var_145_int;
					func_107(var_144_float, var_145_int);
					var_12_float = var_144_float;
					var_154_float = 0;
					var_154_float = var_12_float;
					func_181(var_51_float, var_154_float);
					goto Label_871;
				}
				var_156_bool = var_46_string == "gamma_scrollbar";
				if(var_156_bool != 0) {
					var_157_float = 0; var_158_int = 0;
					var_45_int = var_158_int;
					func_126(var_157_float, var_158_int);
					var_3_float = var_157_float;
					var_164_float = 0;
					var_164_float = var_3_float;
					func_199(var_164_float);
					goto Label_871;
				}
				var_166_bool = var_46_string == "fov_scrollbar";
				if(var_166_bool != 0) {
					var_167_float = 0; var_168_int = 0;
					var_45_int = var_168_int;
					func_88(var_167_float, var_168_int);
					var_13_float = var_167_float;
					var_174_float = 0;
					var_174_float = var_13_float;
					func_166(var_174_float);
					goto Label_871;
				}
				var_176_bool = var_46_string == "vsync_check";
				if(var_176_bool != 0) {
					var_30_bool = var_45_int != (int)0;
					var_178_bool = 0;
					var_178_bool = var_30_bool;
					func_321(var_51_float, var_178_bool);
					goto Label_871;
				}
				var_180_bool = var_46_string == "shadow_check";
				if(var_180_bool != 0) {
					var_25_bool = var_45_int != (int)0;
					goto Label_871;
				}
				var_183_bool = var_46_string == "dof_check";
				if(var_183_bool != 0) {
					var_27_bool = var_45_int != (int)0;
					goto Label_871;
				}
				var_186_bool = var_46_string == "ssao_check";
				if(var_186_bool != 0) {
					var_26_bool = var_45_int != (int)0;
					goto Label_871;
				}
				var_189_bool = var_46_string == "bloom_check";
				if(var_189_bool != 0) {
					var_28_bool = var_45_int != (int)0;
					goto Label_871;
				}
				var_192_bool = var_46_string == "motionblur_check";
				if(var_192_bool != 0) {
					var_29_bool = var_45_int != (int)0;
					goto Label_871;
				}
				var_195_bool = var_46_string == "fxaa_check";
				if(var_195_bool == 0) goto Label_871;
				var_34_bool = var_45_int != (int)0;
	}
			var_198_bool = var_2_int == (int)1;
			if(var_198_bool != 0) {
				var_200_bool = var_46_string == "master_scrollbar";
				if(var_200_bool != 0) {
					var_4_float = var_45_int / (float)100.0;
					var_202_float = 0;
					var_202_float = var_4_float;
					func_230(var_202_float);
				} else {
					var_204_bool = var_46_string == "music_scrollbar";
					if(var_204_bool != 0) {
						var_5_float = var_45_int / (float)100.0;
						var_206_float = 0;
						var_206_float = var_5_float;
						func_243(var_206_float);
						goto Label_914;
					}
					var_208_bool = var_46_string == "voice_scrollbar";
					if(var_208_bool != 0) {
						var_6_float = var_45_int / (float)100.0;
						var_210_float = 0;
						var_210_float = var_6_float;
						func_256(var_210_float);
						goto Label_914;
					}
					var_212_bool = var_46_string == "sounds_scrollbar";
					if(var_212_bool == 0) goto Label_914;
					var_7_float = var_45_int / (float)100.0;
					var_214_float = 0;
					var_214_float = var_7_float;
					func_269(var_214_float);
			}
				var_216_bool = var_2_int == (int)2;
				if(var_216_bool == 0) goto Label_974;
				var_218_bool = var_46_string == "sensivity_scrollbar";
				if(var_218_bool != 0) {
					var_219_float = 0; var_220_int = 0;
					var_45_int = var_220_int;
					func_142(var_219_float, var_220_int);
					var_8_float = var_219_float;
					var_226_float = 0;
					var_226_float = var_8_float;
					func_282(var_226_float);
					goto Label_974;
				}
				var_228_bool = var_46_string == "invert_mouse_check";
				if(var_228_bool != 0) {
					var_31_bool = var_45_int != (int)0;
					goto Label_974;
				}
				var_231_bool = var_46_string == "gamepad_scrollbar";
				if(var_231_bool != 0) {
					var_232_float = 0; var_233_int = 0;
					var_45_int = var_233_int;
					func_150(var_232_float, var_233_int);
					var_9_float = var_232_float;
					var_239_float = 0;
					var_239_float = var_9_float;
					func_295(var_239_float);
					goto Label_974;
				}
				var_241_bool = var_46_string == "gamepad_ui_scrollbar";
				if(var_241_bool != 0) {
					var_242_float = 0; var_243_int = 0;
					var_45_int = var_243_int;
					func_158(var_242_float, var_243_int);
					var_10_float = var_242_float;
					var_249_float = 0;
					var_249_float = var_10_float;
					func_308(var_249_float);
					goto Label_974;
				}
				var_251_bool = var_46_string == "invert_gamepad_check";
				if(var_251_bool != 0) {
					var_32_bool = var_45_int != (int)0;
					goto Label_974;
				}
				var_254_bool = var_46_string == "rumble_gamepad_check";
				if(var_254_bool != 0) {
					var_33_bool = var_45_int != (int)0;

				}
			Label_914:
				goto Label_974;
			}
			var_140_float = 0;
			var_140_float = var_11_float;
			func_212(var_51_float, var_140_float);
			goto Label_871;
		}
		var_133_float = 0;
		var_133_float = var_11_float;
		func_212(var_51_float, var_133_float);
				} else {
		return 4;
				}
Label_871:
	goto Label_974;
	
}


main(var_0_object, var_1_object, var_2_int, var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool)
{
	func_337(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool);
	CreateWindow("options_border.xml", (bool)0, var_0_object);
	var_2_int = -1;
	var_47_int = 0;
	func_975(var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, (int)0);
	CaptureKeyboard();
	ProcessEvents();
	return 0;
}


func_256(var_100_float)
{
	var_101_object = Obj(); var_102_object = Obj();
	SetVolVoice(var_100_float);
	CreateFloatVector(var_102_object);
	@@var_102_object:add(var_100_float);
	SendMessage((int)107, "audio_page", var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_321(var_40_bool, var_60_bool)
{
	var_61_object = Obj(); var_62_object = Obj();
	EnableVSync(var_60_bool);
	CreateFloatVector(var_62_object);
	@@var_62_object:add(var_60_bool);
	var_63_bool = var_60_bool != var_40_bool;
	@@var_62_object:add(var_63_bool);
	SendMessage((int)112, "video_page", var_62_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_134(var_156_int, var_157_float)
{
	var_160_int = var_157_float - (float)0.10000000149011612;
	var_161_float = (int)100 * var_160_int;
	var_156_int = var_161_float / (float)4.900000095367432;
	return 0;
}


func_199(var_72_float)
{
	var_73_object = Obj(); var_74_object = Obj();
	SetGammaCorrection(var_72_float);
	CreateFloatVector(var_74_object);
	@@var_74_object:add(var_72_float);
	SendMessage((int)100, "video_page", var_74_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_269(var_105_float)
{
	var_106_object = Obj(); var_107_object = Obj();
	SetVolSounds(var_105_float);
	CreateFloatVector(var_107_object);
	@@var_107_object:add(var_105_float);
	SendMessage((int)108, "audio_page", var_107_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_142(var_219_float, var_220_int)
{
	var_223_float = (float)4.900000095367432 * var_220_int;
	var_225_float = var_223_float / (int)100;
	var_219_float = (float)0.10000000149011612 + var_225_float;
	return 0;
}


func_975(var_1_object, var_2_int, var_11_float, var_12_float, var_30_bool, var_47_int)
{
	var_48_bool = var_2_int == var_47_int;
	if(var_48_bool != 0) {
		return 0;
	}
	var_2_int = var_47_int;
	var_49_object = var_1_object;
	if(var_49_object != 0) {
		@@@var_1_object:DestroyWindow();
	}
	var_51_bool = var_47_int == (int)0;
	if(var_51_bool != 0) {
		CreateWindow("video_page.xml", (bool)0, var_1_object);
		SendMessage((int)1, "video");
		SendMessage((int)0, "audio");
		SendMessage((int)0, "controls");
		var_60_bool = 0;
		var_60_bool = var_30_bool;
		func_321(var_47_int, var_60_bool);
		var_66_float = 0;
		var_66_float = var_12_float;
		func_181(var_47_int, var_66_float);
		var_74_float = 0;
		var_74_float = var_11_float;
		func_212(var_47_int, var_74_float);
	} else {
		var_183_bool = var_47_int == (int)1;
		if(var_183_bool != 0) {
			CreateWindow("audio_page.xml", (bool)0, var_1_object);
			SendMessage((int)0, "video");
			SendMessage((int)1, "audio");
			SendMessage((int)0, "controls");
			goto Label_1055;
		}
		var_193_bool = var_47_int == (int)2;
		if(var_193_bool == 0) goto Label_1055;
		SendMessage((int)0, "video");
		SendMessage((int)0, "audio");
		SendMessage((int)1, "controls");
		CreateWindow("control_page.xml", (bool)0, var_1_object);
	}
Label_1055:
	var_82_int = 0;
	var_47_int = var_82_int;
	func_539(var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool, var_47_int, var_82_int);
	return 0;
	
}


func_80(var_104_int, var_105_float)
{
	var_108_int = var_105_float - (float)70.0;
	var_109_float = (int)100 * var_108_int;
	var_104_int = var_109_float / (float)40.0;
	return 0;
}


func_401(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool)
{
	var_402_float = 0;
	var_402_float = var_11_float;
	func_212(var_51_float, var_402_float);
	var_403_float = 0;
	var_403_float = var_12_float;
	func_181(var_51_float, var_403_float);
	var_404_float = 0;
	var_404_float = var_3_float;
	func_199(var_404_float);
	var_405_float = 0;
	var_405_float = var_13_float;
	func_166(var_405_float);
	EnableShadows(var_25_bool);
	var_406_bool = 0;
	var_406_bool = var_30_bool;
	func_321(var_51_float, var_406_bool);
	EnableDOF(var_27_bool);
	EnableSSAO(var_26_bool);
	EnableBloom(var_28_bool);
	EnableMotionBlur(var_29_bool);
	EnableFXAA(var_34_bool);
	var_407_float = 0;
	var_407_float = var_4_float;
	func_230(var_407_float);
	var_408_float = 0;
	var_408_float = var_5_float;
	func_243(var_408_float);
	var_409_float = 0;
	var_409_float = var_6_float;
	func_256(var_409_float);
	var_410_float = 0;
	var_410_float = var_7_float;
	func_269(var_410_float);
	var_411_float = 0;
	var_411_float = var_8_float;
	func_282(var_411_float);
	var_412_float = 0;
	var_412_float = var_9_float;
	func_295(var_412_float);
	var_413_float = 0;
	var_413_float = var_10_float;
	func_308(var_413_float);
	InvertMouse(var_31_bool);
	InvertGamepad(var_32_bool);
	EnableGamepadRumble(var_33_bool);
	SaveConfig();
	WriteBinds();
	return 0;
}


func_337(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_bool, var_32_bool, var_33_bool, var_34_bool, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool)
{
	GetCurrentResolution(var_11_float);
	var_22_float = var_11_float;
	GetCurrentAnisotropic(var_12_float);
	var_23_float = var_12_float;
	GetGammaCorrection(var_3_float);
	var_14_float = var_3_float;
	GetPlayerFOV(var_13_float);
	var_24_float = var_13_float;
	IsVSyncEnabled(var_40_bool);
	var_30_bool = var_40_bool;
	IsShadowsEnabled(var_35_bool);
	var_25_bool = var_35_bool;
	IsDOFEnabled(var_37_bool);
	var_27_bool = var_37_bool;
	IsSSAOEnabled(var_36_bool);
	var_26_bool = var_36_bool;
	IsBloomEnabled(var_38_bool);
	var_28_bool = var_38_bool;
	IsMotionBlurEnabled(var_39_bool);
	var_29_bool = var_39_bool;
	IsFXAAEnabled(var_44_bool);
	var_34_bool = var_44_bool;
	GetVolMaster(var_4_float);
	var_15_float = var_4_float;
	GetVolMusic(var_5_float);
	var_16_float = var_5_float;
	GetVolVoice(var_6_float);
	var_17_float = var_6_float;
	GetVolSounds(var_7_float);
	var_18_float = var_7_float;
	GetMouseSensivity(var_19_float);
	var_8_float = var_19_float;
	IsMouseInverted(var_41_bool);
	var_31_bool = var_41_bool;
	GetGamepadSensivity(var_20_float);
	var_9_float = var_20_float;
	GetGamepadUISensivity(var_21_float);
	var_10_float = var_21_float;
	IsGamepadInverted(var_42_bool);
	var_32_bool = var_42_bool;
	IsGamepadRumbleEnabled(var_43_bool);
	var_33_bool = var_43_bool;
	return 0;
}


func_212(var_22_float, var_74_float)
{
	var_75_float = 0; var_76_object = Obj(); var_77_float = 0; var_78_object = Obj();
	round(var_74_float, var_77_float);
	SetResolution(var_77_float);
	CreateFloatVector(var_78_object);
	@@var_78_object:add(var_77_float);
	var_79_bool = var_77_float != var_22_float;
	@@var_78_object:add(var_79_bool);
	SendMessage((int)101, "video_page", var_78_object);
	return 4;
}
EMIT "Stack[-1] = 0";


func_150(var_232_float, var_233_int)
{
	var_236_float = (float)4.900000095367432 * var_233_int;
	var_238_float = var_236_float / (int)100;
	var_232_float = (float)0.10000000149011612 + var_238_float;
	return 0;
}


func_472(var_14_float, var_15_float, var_16_float, var_17_float, var_18_float, var_19_float, var_20_float, var_21_float, var_22_float, var_23_float, var_24_float, var_35_bool, var_36_bool, var_37_bool, var_38_bool, var_39_bool, var_40_bool, var_41_bool, var_42_bool, var_43_bool, var_44_bool)
{
	var_56_float = 0;
	var_56_float = var_22_float;
	func_212(var_51_float, var_56_float);
	var_64_float = 0;
	var_64_float = var_23_float;
	func_181(var_51_float, var_64_float);
	var_72_float = 0;
	var_72_float = var_14_float;
	func_199(var_72_float);
	var_77_float = 0;
	var_77_float = var_24_float;
	func_166(var_77_float);
	var_84_bool = 0;
	var_84_bool = var_40_bool;
	func_321(var_51_float, var_84_bool);
	EnableShadows(var_35_bool);
	EnableDOF(var_37_bool);
	EnableSSAO(var_36_bool);
	EnableBloom(var_38_bool);
	EnableMotionBlur(var_39_bool);
	EnableFXAA(var_44_bool);
	var_90_float = 0;
	var_90_float = var_15_float;
	func_230(var_90_float);
	var_95_float = 0;
	var_95_float = var_16_float;
	func_243(var_95_float);
	var_100_float = 0;
	var_100_float = var_17_float;
	func_256(var_100_float);
	var_105_float = 0;
	var_105_float = var_18_float;
	func_269(var_105_float);
	var_110_float = 0;
	var_110_float = var_19_float;
	func_282(var_110_float);
	var_115_float = 0;
	var_115_float = var_20_float;
	func_295(var_115_float);
	var_120_float = 0;
	var_120_float = var_21_float;
	func_308(var_120_float);
	InvertMouse(var_41_bool);
	InvertGamepad(var_42_bool);
	EnableGamepadRumble(var_43_bool);
	return 0;
}


func_88(var_167_float, var_168_int)
{
	var_171_float = (float)40.0 * var_168_int;
	var_173_float = var_171_float / (int)100;
	var_167_float = (float)70.0 + var_173_float;
	return 0;
}


func_282(var_110_float)
{
	var_111_object = Obj(); var_112_object = Obj();
	SetMouseSensivity(var_110_float);
	CreateFloatVector(var_112_object);
	@@var_112_object:add(var_110_float);
	SendMessage((int)109, "control_page", var_112_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_539(var_3_float, var_4_float, var_5_float, var_6_float, var_7_float, var_8_float, var_9_float, var_10_float, var_12_float, var_13_float, var_82_int)
{
	var_84_bool = var_82_int == (int)0;
	if(var_84_bool != 0) {
		var_85_int = 0; var_86_float = 0;
		var_86_float = var_12_float;
		func_96(var_85_int, var_86_float);
		SendMessage(var_85_int, "anisotropic_scrollbar");
		var_96_int = 0; var_97_float = 0;
		var_97_float = var_3_float;
		func_118(var_96_int, var_97_float);
		SendMessage(var_96_int, "gamma_scrollbar");
		var_104_int = 0; var_105_float = 0;
		var_105_float = var_13_float;
		func_80(var_104_int, var_105_float);
		SendMessage(var_104_int, "fov_scrollbar");
		var_112_bool = var_30_bool;
		if(var_112_bool != 0) {
			var_113_int = 1;
		} else {
									var_139_int = 0; //@pi
	}
								var_141_bool = var_82_int == (int)1;
								if(var_141_bool != 0) {
									var_143_float = (int)100 * var_4_float;
									SendMessage(var_143_float, "master_scrollbar");
									var_146_float = (int)100 * var_5_float;
									SendMessage(var_146_float, "music_scrollbar");
									var_149_float = (int)100 * var_6_float;
									SendMessage(var_149_float, "voice_scrollbar");
									var_152_float = (int)100 * var_7_float;
									SendMessage(var_152_float, "sounds_scrollbar");
									goto Label_693;
								}
								var_155_bool = var_82_int == (int)2;
								if(var_155_bool == 0) goto Label_693;
								var_156_int = 0; var_157_float = 0;
								var_157_float = var_8_float;
								func_134(var_156_int, var_157_float);
								SendMessage(var_156_int, "sensivity_scrollbar");
								var_164_int = 0; var_165_float = 0;
								var_165_float = var_9_float;
								func_134(var_164_int, var_165_float);
								SendMessage(var_164_int, "gamepad_scrollbar");
								var_167_int = 0; var_168_float = 0;
								var_168_float = var_10_float;
								func_134(var_167_int, var_168_float);
								SendMessage(var_167_int, "gamepad_ui_scrollbar");
								var_170_bool = var_31_bool;
								if(var_170_bool != 0) {
									var_171_int = 1;
								} else {
											var_181_int = 0; //@pi
								}
								SendMessage(var_171_int, "invert_mouse_check");
								var_173_bool = var_32_bool;
								if(var_173_bool != 0) {
									var_174_int = 1;
								} else {
										var_180_int = 0; //@pi

								}
								SendMessage(var_174_int, "invert_gamepad_check");
								var_176_bool = var_33_bool;
								if(var_176_bool != 0) {
									var_177_int = 1;
								} else {
									var_179_int = 0; //@pi

								}
								SendMessage(var_177_int, "rumble_gamepad_check");
	}
	SendMessage(var_113_int, "vsync_check");
	var_115_bool = var_25_bool;
	if(var_115_bool != 0) {
		var_116_int = 1;
	} else {
							var_138_int = 0; //@pi

	}
	SendMessage(var_116_int, "shadow_check");
	var_118_bool = var_27_bool;
	if(var_118_bool != 0) {
		var_119_int = 1;
	} else {
						var_137_int = 0; //@pi

	}
	SendMessage(var_119_int, "dof_check");
	var_121_bool = var_26_bool;
	if(var_121_bool != 0) {
		var_122_int = 1;
	} else {
					var_136_int = 0; //@pi

	}
	SendMessage(var_122_int, "ssao_check");
	var_124_bool = var_28_bool;
	if(var_124_bool != 0) {
		var_125_int = 1;
	} else {
				var_135_int = 0; //@pi

	}
	SendMessage(var_125_int, "bloom_check");
	var_127_bool = var_29_bool;
	if(var_127_bool != 0) {
		var_128_int = 1;
	} else {
			var_134_int = 0; //@pi

	}
	SendMessage(var_128_int, "motionblur_check");
	var_130_bool = var_34_bool;
	if(var_130_bool != 0) {
		var_131_int = 1;
	} else {
		var_133_int = 0; //@pi

	}
	SendMessage(var_131_int, "fxaa_check");
	goto Label_693;
	
Label_693:
	return 0;
	
}


func_158(var_242_float, var_243_int)
{
	var_246_float = (float)4.900000095367432 * var_243_int;
	var_248_float = var_246_float / (int)100;
	var_242_float = (float)0.10000000149011612 + var_248_float;
	return 0;
}


func_96(var_85_int, var_86_float)
{
	var_87_float = 0; var_88_float = 0;
	GetMaxAnisotropic(var_88_float);
	var_91_int = var_86_float - (float)0.0;
	var_92_float = (int)100 * var_91_int;
	var_94_int = var_88_float - (float)0.0;
	var_85_int = var_92_float / var_94_int;
	return 2;
}


func_166(var_77_float)
{
	var_78_float = 0; var_79_object = Obj(); var_80_float = 0; var_81_object = Obj();
	round(var_77_float, var_80_float);
	SetPlayerFOV(var_77_float);
	CreateFloatVector(var_81_object);
	@@var_81_object:add(var_80_float);
	SendMessage((int)104, "video_page", var_81_object);
	return 4;
}
EMIT "Stack[-1] = 0";


func_295(var_115_float)
{
	var_116_object = Obj(); var_117_object = Obj();
	SetGamepadSensivity(var_115_float);
	CreateFloatVector(var_117_object);
	@@var_117_object:add(var_115_float);
	SendMessage((int)110, "control_page", var_117_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_230(var_90_float)
{
	var_91_object = Obj(); var_92_object = Obj();
	SetVolMaster(var_90_float);
	CreateFloatVector(var_92_object);
	@@var_92_object:add(var_90_float);
	SendMessage((int)105, "audio_page", var_92_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_107(var_144_float, var_145_int)
{
	var_146_float = 0; var_147_float = 0;
	GetMaxAnisotropic(var_147_float);
	var_150_int = var_147_float - (float)0.0;
	var_151_float = var_150_int * var_145_int;
	var_153_float = var_151_float / (int)100;
	var_144_float = (float)0.0 + var_153_float;
	return 2;
}


func_243(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj();
	SetVolMusic(var_95_float);
	CreateFloatVector(var_97_object);
	@@var_97_object:add(var_95_float);
	SendMessage((int)106, "audio_page", var_97_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_308(var_120_float)
{
	var_121_object = Obj(); var_122_object = Obj();
	SetGamepadUISensivity(var_120_float);
	CreateFloatVector(var_122_object);
	@@var_122_object:add(var_120_float);
	SendMessage((int)111, "control_page", var_122_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_181(var_23_float, var_66_float)
{
	var_67_float = 0; var_68_object = Obj(); var_69_float = 0; var_70_object = Obj();
	round(var_66_float, var_69_float);
	SetAnisotropic(var_69_float);
	CreateFloatVector(var_70_object);
	@@var_70_object:add(var_69_float);
	var_71_bool = var_69_float != var_23_float;
	@@var_70_object:add(var_71_bool);
	SendMessage((int)103, "video_page", var_70_object);
	return 4;
}
EMIT "Stack[-1] = 0";


func_118(var_96_int, var_97_float)
{
	var_100_int = var_97_float - (float)0.5;
	var_101_float = (int)100 * var_100_int;
	var_96_int = var_101_float / (float)0.75;
	return 0;
}


func_126(var_157_float, var_158_int)
{
	var_161_float = (float)0.75 * var_158_int;
	var_163_float = var_161_float / (int)100;
	var_157_float = (float)0.5 + var_163_float;
	return 0;
}


