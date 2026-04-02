// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1191();
			if(var_8_bool == 32390) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1339();
			}
			if(var_8_bool == 32396) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1339();
			}
			if(var_8_bool == 32574) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_1339();
			}
			if(var_8_bool == 32398) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_1351();
				object var_76_object = var_1_object;
				func_1376(var_0_object);
				object var_97_object = var_1_object;
				func_1365(var_0_object);
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_1327();
			}
			if(var_8_bool == 32573) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_1351();
				object var_126_object = var_1_object;
				func_1376(var_0_object);
				object var_128_object = var_1_object;
				func_1365(var_0_object);
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_1327();
			}
			if(var_7_cvector == 32388) {
				bool var_134_bool = false;
				bool var_135_bool;
				func_1398(var_1_object);
				if(var_135_bool != 0) {
					bool var_143_bool;
					func_1386(var_1_object);
					if(!var_143_bool) //@nz
						var_134_bool = true;
				}
				if(var_134_bool != 0) {
					object var_150_object; object var_151_object;
					var_150_object = var_1_object;
					var_151_object = var_0_object;
					func_1333();
					func_237(var_8_bool, "Neutral");
					var_0_object->SetMessage(531063); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531064, 32569, 32389); //@t
					var_0_object->AddReply(531269, 32569, 32581); //@t
					return 0;
				}
				bool var_173_bool;
				func_1386(var_1_object);
				if(var_173_bool != 0) {
					func_237(var_8_bool, "Neutral");
					var_0_object->SetMessage(531077); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531078, -1, 32400); //@t
					var_0_object->AddReply(531255, -1, 32571); //@t
					return 0;
				}
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531066); //@t
				var_0_object->ClearReplies(); //@t
				bool var_185_bool;
				func_1410(var_1_object);
				if(var_185_bool != 0)
					var_0_object->AddReply(531067, 32395, 32392); //@t
				bool var_194_bool;
				func_1422(var_1_object);
				if(var_194_bool != 0)
					var_0_object->AddReply(531068, 32397, 32393); //@t
				var_0_object->AddReply(531069, -1, 32394); //@t
				var_0_object->AddReply(531256, -1, 32572); //@t
				return 0;
			}
			if(var_7_cvector == 32397) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531073, -1, 32398); //@t
				var_0_object->AddReply(531257, -1, 32573); //@t
				return 0;
			}
			if(var_7_cvector == 32395) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531071, -1, 32396); //@t
				var_0_object->AddReply(531258, -1, 32574); //@t
				return 0;
			}
			if(var_7_cvector == 32569) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531254, 32576, 32570); //@t
				var_0_object->AddReply(531270, -1, 32583); //@t
				return 0;
			}
			if(var_7_cvector == 32576) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531265, 32578, 32577); //@t
				var_0_object->AddReply(531271, -1, 32584); //@t
				return 0;
			}
			if(var_7_cvector == 32578) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531267, 32580, 32579); //@t
				var_0_object->AddReply(531272, 32580, 32585); //@t
				return 0;
			}
			if(var_7_cvector == 32580) {
				func_237(var_8_bool, "Neutral");
				var_0_object->SetMessage(531268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531065, -1, 32390); //@t
				var_0_object->AddReply(531273, -1, 32587); //@t
				return 0;
			}
			var_3_string = true;
			bool var_269_bool;
			func_1539(var_269_bool);
			if(var_269_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x104";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_643(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1198(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1198(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_756();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_771();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_714();
			bool var_11_bool = false;
			bool var_12_bool;
			func_935(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_683(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_663(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1198(var_53_object);
					var_53_object = var_52_object;
					func_1083(var_51_bool, var_52_object);
				}
			} else {
				func_678(var_7_int);
				func_705();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_705();
		else
			func_1163("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_896();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_926(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_594(var_25_object);
			func_1163("Neutral");
			func_714();
			func_705();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_935(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1025(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1083(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1120(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1120(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1083(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1081;
	
Label_1081:
	var_37_bool = true;
	
}


// @pe
void func_1410(bool var_263_bool)
{
	int var_265_int;
	func_1214(var_265_int, "b2q03_1");
	if(var_265_int == 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


void func_1539(bool var_75_bool)
{
	var_75_bool = true;
}


void func_1537(string var_182_string)
{
	var_182_string = "ui/NPC_Maria_b.png";
}


void func_643(object var_0_object)
{
	bool var_7_bool;
	func_935(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_639();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_825();
	}
}
EMIT "Return(); Pop(0)";


void func_771(void)
{
	@StopGroup0();
	func_714();
	func_1163("Neutral");
	func_705();
}


void func_901(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_896(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1282(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1163(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1198(var_39_object);
	var_39_object = var_38_object;
	func_1025(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_940(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1533(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1531(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1535(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1537(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1514(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_287_bool = !var_36_bool; //@nz
		if(var_287_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_288_object;
	var_27_object = var_288_object;
	func_1008();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1422(bool var_272_bool)
{
	int var_274_int;
	func_1214(var_274_int, "b2q03_1");
	if(var_274_int == 2)
		var_272_bool = true;
	var_272_bool = false;
}


void func_1294(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_909(object var_83_object, string var_84_string, int var_85_int)
{
	int var_87_int;
	var_83_object->GetProperty(var_84_string, var_87_int);
	var_83_object->SetProperty(var_84_string, (var_87_int + var_85_int));
}


void func_1170(string var_223_string, bool var_224_bool)
{
	float var_229_float; float var_230_float;
	@lshGetAnimTimes(var_223_string, var_229_float, var_230_float);
	@lshPlayAnimation(var_229_float, var_230_float, var_224_bool);
}


void func_916(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_663(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_926(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1303(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1176(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1539(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1434(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 588, 2, 531074);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1486(var_22_bool, var_23_object, -1);
}
EMIT "Stack[-1] = 0";


void func_926(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_916(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1310(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1303(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_678(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_935(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1191(void)
{
	bool var_10_bool;
	func_1539(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1447(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 590, 2, 531076);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_1486(var_67_bool, var_68_object, 588);
}
EMIT "Stack[-1] = 0";


void func_683(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_901(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_940(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1204(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1539(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1002;
		@LookAsyncCamera("head");
	}
Label_1002:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1535(string var_181_string)
{
	var_181_string = "ui/NPC_Maria.png";
}


void func_1198(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1327(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1204(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1333(void)
{
	@SetVariable("oob2MariaKabak1", 1);
}


void func_1460(void)
{
	object var_41_object;
	@CreateDiaryEntry(var_41_object, 589, 2, 531075);
	bool var_45_bool; object var_46_object;
	var_41_object = var_46_object;
	func_1486(var_45_bool, var_46_object, 588);
}
EMIT "Stack[-1] = 0";


void func_825(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_935(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1310(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_935(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1303(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_880;
			goto Label_891;
			}
				Label_880:
					bool var_59_bool;
					func_894(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_886;
			}
		}
	Label_891:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_886:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


// @pe
void func_1339(void)
{
	@SetVariable("b2q03_1", 1);
	func_1434();
	func_1460();
}


void func_1083(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1176(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1214(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_705(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1473(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1219(int var_92_int, int var_93_int)
{
	object var_95_object;
	@CreateIntVector(var_95_object);
	var_95_object->add(var_92_int);
	var_95_object->add(var_93_int);
	@SendWorldWndMessage(3, var_95_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1351(void)
{
	@SetVariable("b2q03_1", 1000);
	func_1447();
	bool var_70_bool;
	func_1282(var_70_bool, "quest_b2_03", "fail");
}


void func_714(void)
{
	@KillTimer(10);
}


void func_1486(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1473(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1231(object var_79_object, int var_80_int)
{
	int var_82_int;
	object var_83_object;
	var_79_object = var_83_object;
	int var_85_int;
	func_909(var_83_object, "money", var_85_int);
	if(var_85_int > 0) {
		@GetInvItemByName(var_82_int, "Money");
		int var_92_int; int var_93_int;
		var_82_int = var_92_int;
		var_80_int = var_93_int;
		func_1219(var_92_int, var_93_int);
	}
}


// @pe
void func_594(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1365(object var_97_object)
{
	@Trace("recipe5 is given");
	object var_100_object;
	var_97_object = var_100_object;
	func_1269(var_100_object, "recipe5", 1);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool = false;
		bool var_200_bool;
		func_1398(var_1_object);
		if(var_200_bool != 0) {
			bool var_208_bool;
			func_1386(var_1_object);
			if(!var_208_bool) //@nz
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			object var_215_object; object var_216_object;
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_1333();
			func_237(var_193_object, "Neutral");
			var_0_object->SetMessage(531063); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531064, 32569, 32389); //@t
			var_0_object->AddReply(531269, 32569, 32581); //@t
		} else {
					bool var_251_bool;
					func_1386(var_1_object);
					if(var_251_bool == 0) goto Label_165;
					func_237(var_193_object, "Neutral");
					var_0_object->SetMessage(531077); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531078, -1, 32400); //@t
					var_0_object->AddReply(531255, -1, 32571); //@t
		}
	}
Label_207:
	for(;;) {
		bool var_238_bool;
		func_1539(var_238_bool);
		if(var_238_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1163(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_236;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_236:
			return 0;

		}

	}
	
Label_165:
	func_237(var_193_object, "Neutral");
	var_0_object->SetMessage(531066); //@t
	var_0_object->ClearReplies(); //@t
	bool var_263_bool;
	func_1410(var_1_object);
	if(var_263_bool != 0)
		var_0_object->AddReply(531067, 32395, 32392); //@t
	bool var_272_bool;
	func_1422(var_1_object);
	if(var_272_bool != 0)
		var_0_object->AddReply(531068, 32397, 32393); //@t
	var_0_object->AddReply(531069, -1, 32394); //@t
	var_0_object->AddReply(531256, -1, 32572); //@t
	goto Label_207;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_1376(object var_76_object)
{
	@Trace("money 5000 is given");
	object var_79_object;
	var_76_object = var_79_object;
	func_1231(var_79_object, 5000);
}


void func_1120(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1294(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1176(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1250(object var_105_object, object var_106_object, int var_107_int)
{
	int var_111_int;
	var_106_object->GetItemID(var_111_int);
	int var_112_int;
	@GetInvItemProperty(var_112_int, var_111_int, "Category");
	bool var_113_bool;
	var_105_object->AddItem(var_113_bool, var_106_object, var_112_int, var_107_int);
	if(!var_113_bool) { //@nz
		var_105_object->DropItems(var_106_object, var_107_int);
	} else {
		int var_116_int; int var_117_int;
		var_111_int = var_116_int;
		var_107_int = var_117_int;
		func_1219(var_116_int, var_117_int);
	}
	
}


void func_1514(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x5f9";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1386(bool var_208_bool)
{
	int var_210_int;
	func_1214(var_210_int, "b2q03");
	if(var_210_int == 1000)
		var_208_bool = true;
	var_208_bool = false;
}


// @pe
void func_237(object var_2_object, string var_219_string)
{
	bool var_220_bool;
	func_1539(var_220_bool);
	if(!var_220_bool) //@nz
		return 0;
	if(var_219_string == var_2_object)
		return 0;
	string var_223_string; bool var_224_bool;
	var_219_string = var_223_string;
	if(var_219_string == "")
		var_224_bool = false;
	else
		var_224_bool = true;
	func_1170(var_223_string, var_224_bool);
	var_2_object = var_219_string;
	
}


void func_1008(void)
{
	bool var_290_bool;
	@CameraSwitchToNormal();
	bool var_291_bool;
	func_1539(var_291_bool);
	if(var_291_bool != 0) {
	} else {
		@HasAnimationTrack(var_290_bool, "head");
		if(var_290_bool == 0) goto Label_1024;
		@UnlookAsync("head");
	}
Label_1024:
	
}


// @pe
void func_756(void)
{
	func_896();
	func_714();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1269(object var_100_object, string var_101_string, int var_102_int)
{
	object var_104_object;
	@CreateInvItem(var_104_object);
	var_104_object->SetItemName(var_101_string);
	object var_105_object; object var_106_object; int var_107_int;
	var_100_object = var_105_object;
	var_104_object = var_106_object;
	var_102_int = var_107_int;
	func_1250(var_105_object, var_106_object, var_107_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1398(bool var_200_bool)
{
	int var_202_int;
	func_1214(var_202_int, "oob2MariaKabak1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1531(int var_180_int)
{
	var_180_int = 515543;
}


void func_1533(int var_179_int)
{
	var_179_int = 502868;
}


void func_894(bool var_59_bool)
{
	var_59_bool = true;
}


