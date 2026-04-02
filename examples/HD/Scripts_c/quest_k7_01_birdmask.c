// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_1010();
			if(var_11_object == 27413) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_1123();
				object var_48_object = var_1_object;
				func_1155(var_0_object);
			}
			if(var_11_object == 43962) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_1123();
				object var_78_object = var_1_object;
				func_1155(var_0_object);
			}
			if(var_11_object == 29630) {
				object var_82_object; object var_83_object;
				var_82_object = var_1_object;
				var_83_object = var_0_object;
				func_1171();
			}
			if(var_11_object == 29633) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_1177();
			}
			if(var_10_bool == 31582) {
				bool var_94_bool;
				func_1190(var_1_object);
				if(var_94_bool != 0) {
					object var_100_object; object var_101_object;
					var_100_object = var_1_object;
					var_101_object = var_0_object;
					func_1117();
					func_245(var_11_object, "Neutral");
					var_0_object->SetMessage(530193); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526124, 27404, 27403); //@t
					return 0;
				}
				bool var_125_bool = false;
				bool var_126_bool;
				func_1236(var_126_bool, var_1_object);
				if(var_126_bool != 0) {
					bool var_137_bool;
					func_1246(var_137_bool, var_1_object);
					if(var_137_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 0) {
					func_245(var_11_object, "Neutral");
					var_0_object->SetMessage(526123); //@t
					var_0_object->ClearReplies(); //@t
					bool var_154_bool = false;
					bool var_155_bool;
					func_1226(var_155_bool, var_1_object);
					if(var_155_bool != 0) {
						bool var_193_bool;
						func_1202(var_1_object);
						if(var_193_bool != 0)
							var_154_bool = true;
					}
					if(var_154_bool != 0)
						var_0_object->AddReply(528266, 29631, 29630); //@t
					var_0_object->AddReply(528258, -1, 29621); //@t
					var_0_object->AddReply(526135, -1, 27414); //@t
					return 0;
				}
				bool var_208_bool;
				func_1226(var_208_bool, var_1_object);
				if(var_208_bool != 0) {
					object var_210_object; object var_211_object;
					var_210_object = var_1_object;
					var_211_object = var_0_object;
					func_1183();
					func_245(var_11_object, "Neutral");
					var_0_object->SetMessage(526136); //@t
					var_0_object->ClearReplies(); //@t
					bool var_224_bool;
					func_1214(var_1_object);
					if(var_224_bool != 0)
						var_0_object->AddReply(528269, 29634, 29633); //@t
					var_0_object->AddReply(526137, -1, 27416); //@t
					var_0_object->AddReply(528259, -1, 29622); //@t
					return 0;
				}
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(530191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530192, -1, 31581); //@t
				return 0;
			}
			if(var_10_bool == 29634) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(528270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528271, 29636, 29635); //@t
				return 0;
			}
			if(var_10_bool == 29636) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(528272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528273, -1, 29637); //@t
				var_0_object->AddReply(528274, -1, 29638); //@t
				return 0;
			}
			if(var_10_bool == 29631) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(528267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526132, 27412, 27411); //@t
				return 0;
			}
			if(var_10_bool == 27412) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(526133); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528268, -1, 29632); //@t
				return 0;
			}
			if(var_10_bool == 27404) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(526125); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528260, 29624, 29623); //@t
				return 0;
			}
			if(var_10_bool == 29624) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(528261); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526126, 27406, 27405); //@t
				var_0_object->AddReply(528262, 29626, 29625); //@t
				return 0;
			}
			if(var_10_bool == 29626) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(528263); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528264, 27408, 29627); //@t
				return 0;
			}
			if(var_10_bool == 27406) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(526127); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526128, 27408, 27407); //@t
				var_0_object->AddReply(528265, 27408, 29629); //@t
				return 0;
			}
			if(var_10_bool == 27408) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(526129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526130, 27410, 27409); //@t
				var_0_object->AddReply(541756, 43961, 43960); //@t
				return 0;
			}
			if(var_10_bool == 43961) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(541757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541758, -1, 43962); //@t
				return 0;
			}
			if(var_10_bool == 27410) {
				func_245(var_11_object, "Neutral");
				var_0_object->SetMessage(526131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526134, -1, 27413); //@t
				return 0;
			}
			var_3_string = true;
			bool var_333_bool;
			func_1091(var_333_bool);
			if(var_333_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10c";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_703(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_768(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_730(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_999(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


// @pe
void func_768(object var_2_object, string var_3_string)
{
	func_863();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_881(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_1085(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1083(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1087(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1089(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1382(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_263_bool = !var_24_bool; //@nz
		if(var_263_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_264_object;
	var_15_object = var_264_object;
	func_950();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1027(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


// @pe
void func_1155(object var_49_object)
{
	object var_53_object;
	func_1332(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	func_1349(var_50_object, "pt_d7q02_corpse", (float)2);
	object var_73_object;
	func_1332(var_73_object);
	var_49_object->ShowMap(var_73_object);
}


void func_1032(string var_231_string, bool var_232_bool)
{
	object var_234_object;
	@FindActor(var_234_object, var_231_string);
	if(!var_234_object) //@nz
		@Trace(("Door " + var_231_string) + " not found");
	else
		var_234_object->SetProperty("locked", var_232_bool);
	
}
EMIT "Stack[-1] = 0";


void func_782(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_876(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_1100(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_876(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_829;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_1093(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_858;
				}
			} else if(var_27_int != 0) {
				goto Label_858;
			}
			}
					bool var_60_bool;
					func_861(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_853;
			}
		}
	Label_858:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_853:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


// @pe
void func_1171(void)
{
	@SetVariable("ook7Birdmask2", 1);
}


// @pe
void func_1304(bool var_147_bool)
{
	int var_149_int;
	func_1066(var_149_int);
	var_147_bool = var_149_int == 7;
}


// @pe
void func_1177(void)
{
	@SetVariable("ook7Birdmask3", 1);
}


void func_1049(bool var_42_bool, string var_43_string, string var_44_string)
{
	object var_46_object;
	@FindActor(var_46_object, var_43_string);
	if(var_46_object == null)
		var_42_bool = false;
	@Trigger(var_46_object, var_44_string);
	var_42_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1311(bool var_158_bool)
{
	bool var_160_bool = false;
	int var_161_int;
	func_1075(var_161_int);
	if(var_161_int >= 0) {
		int var_168_int;
		func_1075(var_168_int);
		if(var_168_int < 12)
			var_160_bool = true;
	}
	if(var_160_bool != 0) {
		var_158_bool = true;
		return 0;
	}
	var_158_bool = false;
}


// @pe
void func_1183(void)
{
	func_1032("sobor@door1", false);
}


void func_1061(float var_39_float)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	var_41_float = var_39_float;
}


// @pe
void func_1190(bool var_93_bool)
{
	int var_95_int;
	func_1027(var_95_int, "ook7Birdmask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_1066(int var_149_int)
{
	float var_151_float;
	@GetGameTime(var_151_float);
	var_149_int = 1 + (var_151_float / 24);
}


// @pe
void func_1202(bool var_212_bool)
{
	int var_214_int;
	func_1027(var_214_int, "ook7Birdmask2");
	if(var_214_int == 0) {
		var_212_bool = true;
		return 0;
	}
	var_212_bool = false;
}


void func_1075(int var_161_int)
{
	float var_163_float;
	@GetGameTime(var_163_float);
	int var_164_int;
	var_163_float = var_164_int;
	var_161_int = var_164_int % 24;
}


void func_1332(object var_28_object)
{
	object var_31_object; object var_32_object;
	@GetMainOutdoorScene(var_31_object);
	if(var_31_object == null) {
		@Trace("Can't find main outdoor scene");
		var_32_object = null;
		var_32_object = var_28_object;
	}
	var_31_object->GetMap(var_32_object);
	var_32_object = var_28_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_950(void)
{
	bool var_266_bool;
	@CameraSwitchToNormal(true);
	bool var_268_bool;
	func_1091(var_268_bool);
	if(var_268_bool != 0) {
	} else {
		@HasAnimationTrack(var_266_bool, "head");
		if(var_266_bool == 0) goto Label_967;
		@UnlookAsync("head");
	}
Label_967:
	
}


void func_1083(int var_74_int)
{
	var_74_int = 515571;
}


void func_1085(int var_73_int)
{
	var_73_int = 504029;
}


// @pe
void func_1214(bool var_243_bool)
{
	int var_245_int;
	func_1027(var_245_int, "ook7Birdmask3");
	if(var_245_int == 0) {
		var_243_bool = true;
		return 0;
	}
	var_243_bool = false;
}


void func_1087(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
}


// @pe
void func_703(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_876(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_782();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1089(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_1091(bool var_68_bool)
{
	var_68_bool = false;
}


void func_1093(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_1349(object var_50_object, string var_51_string, float var_52_float)
{
	object var_60_object;
	@GetMainOutdoorScene(var_60_object);
	if(var_60_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_58_cvector;
	cvector var_59_cvector;
	bool var_61_bool;
	var_60_object->GetLocator(var_51_string, var_61_bool, var_58_cvector, var_59_cvector);
	if(!var_61_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_51_string) + " doesnt exist");
	var_60_object->GetMap(var_50_object);
	if(var_50_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_71_float = GetByIndex(var_58_cvector, 0);
	var_72_float = GetByIndex(var_58_cvector, 2);
	var_50_object->SetMapParams(var_71_float, var_72_float, var_52_float);
}
EMIT "Stack[-2] = 0";


void func_968(string var_128_string)
{
	bool var_132_bool; float var_133_float; float var_134_float;
	@lshHasAnimation(var_132_bool, var_128_string);
	if(var_132_bool != 0) {
		@lshGetAnimTimes(var_128_string, var_133_float, var_134_float);
		@lshPlayAnimation(var_133_float, var_134_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_128_string);
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_1190(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_1117();
			func_245(var_87_object, "Neutral");
			var_0_object->SetMessage(530193); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526124, 27404, 27403); //@t
		} else {
					bool var_144_bool = false;
					bool var_145_bool;
					func_1236(var_145_bool, var_1_object);
					if(var_145_bool != 0) {
						bool var_156_bool;
						func_1246(var_156_bool, var_1_object);
						if(var_156_bool != 0)
							var_144_bool = true;
					}
					if(var_144_bool == 0) goto Label_158;
					func_245(var_87_object, "Neutral");
					var_0_object->SetMessage(526123); //@t
					var_0_object->ClearReplies(); //@t
					bool var_173_bool = false;
					bool var_174_bool;
					func_1226(var_174_bool, var_1_object);
					if(var_174_bool != 0) {
						bool var_212_bool;
						func_1202(var_1_object);
						if(var_212_bool != 0)
							var_173_bool = true;
					}
					if(var_173_bool != 0)
						var_0_object->AddReply(528266, 29631, 29630); //@t
					var_0_object->AddReply(528258, -1, 29621); //@t
					var_0_object->AddReply(526135, -1, 27414); //@t
		}
	}
Label_215:
	for(;;) {
		bool var_126_bool;
		func_1091(var_126_bool);
		if(var_126_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_968(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_244;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_244:
			return 0;

		}

	}
	
Label_158:
	bool var_227_bool;
	func_1226(var_227_bool, var_1_object);
	if(var_227_bool != 0) {
		object var_229_object; object var_230_object;
		var_229_object = var_1_object;
		var_230_object = var_0_object;
		func_1183();
		func_245(var_87_object, "Neutral");
		var_0_object->SetMessage(526136); //@t
		var_0_object->ClearReplies(); //@t
		bool var_243_bool;
		func_1214(var_1_object);
		if(var_243_bool != 0)
			var_0_object->AddReply(528269, 29634, 29633); //@t
		var_0_object->AddReply(526137, -1, 27416); //@t
		var_0_object->AddReply(528259, -1, 29622); //@t
		goto Label_215;
	}
	func_245(var_87_object, "Neutral");
	var_0_object->SetMessage(530191); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(530192, -1, 31581); //@t
	goto Label_215;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_1226(bool var_174_bool, object var_175_object)
{
	object var_177_object;
	var_175_object = var_177_object;
	bool var_176_bool;
	func_1256(var_176_bool, var_177_object);
	if(var_176_bool != 0) {
		var_174_bool = true;
		return 0;
	}
	var_174_bool = false;
}


void func_1100(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_1093(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


// @pe
void func_1236(bool var_145_bool, object var_146_object)
{
	object var_148_object;
	var_146_object = var_148_object;
	func_1304(var_148_object);
	bool var_147_bool;
	if(var_147_bool != 0) {
		var_145_bool = true;
		return 0;
	}
	var_145_bool = false;
}


void func_984(string var_109_string, bool var_110_bool)
{
	bool var_116_bool; float var_117_float; float var_118_float;
	@lshHasAnimation(var_116_bool, var_109_string);
	if(var_116_bool != 0) {
		@lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		@lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_109_string);
	}
	
}


void func_730(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_868(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_1117(void)
{
	@SetVariable("ook7Birdmask1", 1);
}


// @pe
void func_1246(bool var_156_bool, object var_157_object)
{
	object var_159_object;
	var_157_object = var_159_object;
	func_1311(var_159_object);
	bool var_158_bool;
	if(var_158_bool != 0) {
		var_156_bool = true;
		return 0;
	}
	var_156_bool = false;
}


void func_863(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_861(bool var_60_bool)
{
	var_60_bool = true;
}


void func_1123(void)
{
	object var_19_object;
	int var_20_int;
	func_1027(var_20_int, "k7q01CorpseMark");
	if(var_20_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_28_object;
		func_1332(var_28_object);
		var_28_object = var_19_object;
		float var_39_float;
		func_1061(var_39_float);
		var_19_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_39_float);
		bool var_42_bool;
		func_1049(var_42_bool, "quest_k7_01", "place_corpse");
		var_19_object = null;
	}
}


void func_868(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_1382(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x575";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_999(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_1256(bool var_176_bool, object var_177_object)
{
	int var_188_int; object var_194_object; int var_195_int; bool var_196_bool; bool var_197_bool;
	var_177_object->GetItemCount(var_188_int, 1);
	int var_189_int;
	@GetInvItemByName(var_189_int, "bird_mask");
	int var_190_int;
	@GetInvItemByName(var_190_int, "bird_balahon");
	bool var_191_bool = false;
	bool var_192_bool = false;
	int var_193_int = 0;
	
	for(;;) {
		if(var_193_int < var_188_int) {
			var_177_object->GetItem(var_194_object, var_193_int, 1);
			var_194_object->GetItemID(var_195_int);
			if(var_195_int == var_189_int) {
				var_177_object->IsItemSelected(var_196_bool, var_193_int, 1);
				if(var_196_bool != 0)
					var_191_bool = true;
			} else {
			if(!(var_195_int == var_190_int)) goto Label_1293;
			var_177_object->IsItemSelected(var_197_bool, var_193_int, 1);
			if(var_197_bool == 0) goto Label_1293;
		}
		var_176_bool = false;
		if(var_191_bool != 0) {
			if(true != 0)
				var_176_bool = true;
		}
		}
	Label_1293:
		var_194_object = null;
		var_193_int += 1;
	}
	
}


void func_876(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_881(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1017(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_1091(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_944;
		@LookAsyncCamera("head");
	}
Label_944:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_1010(void)
{
	bool var_13_bool;
	func_1091(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_245(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_1091(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_984(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_1017(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


