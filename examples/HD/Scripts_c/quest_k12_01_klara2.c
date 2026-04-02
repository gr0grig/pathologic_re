// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_1049();
			if(var_7_bool == 41158) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_1086();
			}
			if(var_7_bool == 41160) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1092();
			}
			if(var_7_bool == 43422) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_1098();
			}
			if(var_6_int == 41157) {
				bool var_30_bool;
				func_1104(var_1_object);
				if(!var_30_bool) { //@nz
					func_204(var_7_bool, "Neutral");
					var_0_object->SetMessage(539214); //@t
					var_0_object->ClearReplies(); //@t
					bool var_57_bool;
					func_1128(var_1_object);
					if(var_57_bool != 0)
						var_0_object->AddReply(539215, 43417, 41158); //@t
					var_0_object->AddReply(541312, -1, 43448); //@t
					return 0;
				}
				func_204(var_7_bool, "Sly");
				var_0_object->SetMessage(539216); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool = false;
				bool var_72_bool;
				func_1116(var_1_object);
				if(!var_72_bool) { //@nz
					bool var_79_bool;
					func_1140(var_1_object);
					if(var_79_bool != 0)
						var_71_bool = true;
				}
				if(var_71_bool != 0)
					var_0_object->AddReply(539217, 43420, 41160); //@t
				bool var_88_bool = false;
				bool var_89_bool;
				func_1116(var_1_object);
				if(var_89_bool != 0) {
					bool var_91_bool;
					func_1152(var_1_object);
					if(var_91_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_object->AddReply(541289, 43423, 43422); //@t
				var_0_object->AddReply(541288, -1, 43421); //@t
				return 0;
			}
			if(var_6_int == 43423) {
				func_204(var_7_bool, "Neutral");
				var_0_object->SetMessage(541290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541303, 43441, 43438); //@t
				var_0_object->AddReply(541304, 43441, 43439); //@t
				return 0;
			}
			if(var_6_int == 43441) {
				func_204(var_7_bool, "Neutral");
				var_0_object->SetMessage(541306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541307, -1, 43443); //@t
				var_0_object->AddReply(541308, 43445, 43444); //@t
				return 0;
			}
			if(var_6_int == 43445) {
				func_204(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(541309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541310, -1, 43446); //@t
				var_0_object->AddReply(541311, -1, 43447); //@t
				return 0;
			}
			if(var_6_int == 43420) {
				func_204(var_7_bool, "Sly");
				var_0_object->SetMessage(541287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541296, 43430, 43429); //@t
				var_0_object->AddReply(541291, 43425, 43424); //@t
				return 0;
			}
			if(var_6_int == 43425) {
				func_204(var_7_bool, "Neutral");
				var_0_object->SetMessage(541292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541293, 43427, 43426); //@t
				var_0_object->AddReply(541298, -1, 43431); //@t
				return 0;
			}
			if(var_6_int == 43427) {
				func_204(var_7_bool, "Neutral");
				var_0_object->SetMessage(541294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541295, -1, 43428); //@t
				return 0;
			}
			if(var_6_int == 43430) {
				func_204(var_7_bool, "Smile");
				var_0_object->SetMessage(541297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541299, 43433, 43432); //@t
				return 0;
			}
			if(var_6_int == 43433) {
				func_204(var_7_bool, "Smile");
				var_0_object->SetMessage(541300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541301, 43427, 43434); //@t
				var_0_object->AddReply(541302, 43427, 43436); //@t
				return 0;
			}
			if(var_6_int == 43417) {
				func_204(var_7_bool, "Grin");
				var_0_object->SetMessage(541284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541320, 43457, 43456); //@t
				var_0_object->AddReply(541285, 43419, 43418); //@t
				return 0;
			}
			if(var_6_int == 43457) {
				func_204(var_7_bool, "Sly");
				var_0_object->SetMessage(541321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541322, 43459, 43458); //@t
				var_0_object->AddReply(541325, 43450, 43462); //@t
				return 0;
			}
			if(var_6_int == 43459) {
				func_204(var_7_bool, "Sly");
				var_0_object->SetMessage(541323); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541324, 43419, 43460); //@t
				var_0_object->AddReply(541326, 43419, 43464); //@t
				return 0;
			}
			if(var_6_int == 43419) {
				func_204(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(541286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541313, 43450, 43449); //@t
				var_0_object->AddReply(541327, 43452, 43466); //@t
				return 0;
			}
			if(var_6_int == 43450) {
				func_204(var_7_bool, "Saveyouall");
				var_0_object->SetMessage(541314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541315, 43452, 43451); //@t
				var_0_object->AddReply(541328, 43474, 43468); //@t
				var_0_object->AddReply(541330, 43474, 43470); //@t
				return 0;
			}
			if(var_6_int == 43452) {
				func_204(var_7_bool, "Smile");
				var_0_object->SetMessage(541316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541317, 43474, 43453); //@t
				var_0_object->AddReply(541334, 43474, 43477); //@t
				return 0;
			}
			if(var_6_int == 43474) {
				func_204(var_7_bool, "Neutral");
				var_0_object->SetMessage(541331); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541332, -1, 43475); //@t
				var_0_object->AddReply(541335, 43482, 43481); //@t
				return 0;
			}
			if(var_6_int == 43482) {
				func_204(var_7_bool, "Smile");
				var_0_object->SetMessage(541336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541333, -1, 43476); //@t
				var_0_object->AddReply(541337, -1, 43483); //@t
				return 0;
			}
			var_3_string = true;
			bool var_260_bool;
			func_1189(var_260_bool);
			if(var_260_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe3";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_776(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_1056(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_776(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_1056(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


// @pe
void func_1152(bool var_260_bool)
{
	int var_262_int;
	func_1072(var_262_int, "ook12Klara2Sobor3");
	if(var_262_int == 0) {
		var_260_bool = true;
		return 0;
	}
	var_260_bool = false;
}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_778(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1183(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1181(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1185(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1187(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1164(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_1056(var_81_object);
	var_81_object = var_80_object;
	func_865(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_272_bool = !var_17_bool; //@nz
		if(var_272_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_273_object;
	var_8_object = var_273_object;
	func_847();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_960(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_1077(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_1034(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_1092(void)
{
	@SetVariable("ook12Klara2Sobor2", 1);
}


void func_776(bool var_8_bool)
{
	var_8_bool = true;
}


void func_778(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_1062(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_1189(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_841;
		@LookAsyncCamera("head");
	}
Label_841:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_1034(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1189(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


void func_1164(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x49b";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_1098(void)
{
	@SetVariable("ook12Klara2Sobor3", 1);
}


// @pe
void func_204(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_1189(var_191_bool);
	if(!var_191_bool) //@nz
		return 0;
	if(var_190_string == var_2_object)
		return 0;
	string var_194_string; bool var_195_bool;
	var_190_string = var_194_string;
	if(var_190_string == "")
		var_195_bool = false;
	else
		var_195_bool = true;
	func_1019(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


void func_847(void)
{
	bool var_275_bool;
	@CameraSwitchToNormal(true);
	bool var_277_bool;
	func_1189(var_277_bool);
	if(var_277_bool != 0) {
	} else {
		@HasAnimationTrack(var_275_bool, "head");
		if(var_275_bool == 0) goto Label_864;
		@UnlookAsync("head");
	}
Label_864:
	
}


// @pe
void func_1104(bool var_181_bool)
{
	int var_183_int;
	func_1072(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_1104(var_1_object);
		if(!var_181_bool) { //@nz
			func_204(var_175_object, "Neutral");
			var_0_object->SetMessage(539214); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_1128(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(539215, 43417, 41158); //@t
			var_0_object->AddReply(541312, -1, 43448); //@t
		} else {
					func_204(var_175_object, "Sly");
					var_0_object->SetMessage(539216); //@t
					var_0_object->ClearReplies(); //@t
					bool var_240_bool = false;
					bool var_241_bool;
					func_1116(var_1_object);
					if(!var_241_bool) { //@nz
						bool var_248_bool;
						func_1140(var_1_object);
						if(var_248_bool != 0)
							var_240_bool = true;
					}
					if(var_240_bool != 0)
						var_0_object->AddReply(539217, 43420, 41160); //@t
					bool var_257_bool = false;
					bool var_258_bool;
					func_1116(var_1_object);
					if(var_258_bool != 0) {
						bool var_260_bool;
						func_1152(var_1_object);
						if(var_260_bool != 0)
							var_257_bool = true;
					}
					if(var_257_bool != 0)
						var_0_object->AddReply(541289, 43423, 43422); //@t
					var_0_object->AddReply(541288, -1, 43421); //@t
		}
	}
	for(;;) {
		bool var_220_bool;
		func_1189(var_220_bool);
		if(var_220_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1003(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_203;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_203:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1049(void)
{
	bool var_9_bool;
	func_1189(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_923(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_1034(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


// @pe
void func_1116(bool var_241_bool)
{
	int var_243_int;
	func_1072(var_243_int, "game_final");
	if(var_243_int == 3)
		var_241_bool = true;
	var_241_bool = false;
}


void func_1181(int var_67_int)
{
	var_67_int = 515540;
}


void func_1183(int var_66_int)
{
	var_66_int = 502865;
}


void func_1056(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_1185(string var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
}


void func_865(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_923(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_960(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_960(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_923(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_921;
	
Label_921:
	var_79_bool = true;
	
}


void func_1187(string var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
}


void func_1189(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1062(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


// @pe
void func_1128(bool var_208_bool)
{
	int var_210_int;
	func_1072(var_210_int, "ook12Klara2Sobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_1003(string var_222_string)
{
	bool var_226_bool; float var_227_float; float var_228_float;
	@lshHasAnimation(var_226_bool, var_222_string);
	if(var_226_bool != 0) {
		@lshGetAnimTimes(var_222_string, var_227_float, var_228_float);
		@lshPlayAnimation(var_227_float, var_228_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_222_string);
	}
	
}


void func_1072(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


// @pe
void func_1140(bool var_248_bool)
{
	int var_250_int;
	func_1072(var_250_int, "ook12Klara2Sobor2");
	if(var_250_int == 0) {
		var_248_bool = true;
		return 0;
	}
	var_248_bool = false;
}


void func_1077(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


void func_1019(string var_194_string, bool var_195_bool)
{
	bool var_201_bool; float var_202_float; float var_203_float;
	@lshHasAnimation(var_201_bool, var_194_string);
	if(var_201_bool != 0) {
		@lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		@lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_194_string);
	}
	
}


// @pe
void func_1086(void)
{
	@SetVariable("ook12Klara2Sobor1", 1);
}


