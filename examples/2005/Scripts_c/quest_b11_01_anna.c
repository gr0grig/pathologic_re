// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_931();
			if(var_6_int == 23207) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_1011();
				object var_25_object; object var_26_object;
				var_25_object = var_1_object;
				var_26_object = var_0_object;
				func_1036();
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_object;
				func_1002();
			}
			if(var_6_int == 23210) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_1011();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_1036();
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1002();
			}
			if(var_5_int == 23204) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_1047(var_1_object);
				if(!var_73_bool) { //@nz
					bool var_82_bool;
					func_1059(var_1_object);
					if(var_82_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_1030();
					func_228(var_6_int, "Neutral");
					var_0_object->SetMessage(522034); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523328, 24543, 24542); //@t
					return 0;
				}
				bool var_108_bool;
				func_1047(var_1_object);
				if(!var_108_bool) { //@nz
					func_228(var_6_int, "Neutral");
					var_0_object->SetMessage(522039); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522040, -1, 23210); //@t
					var_0_object->AddReply(522041, -1, 23211); //@t
					return 0;
				}
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(522042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522043, -1, 23213); //@t
				bool var_124_bool;
				func_1071(var_1_object);
				if(var_124_bool != 0)
					var_0_object->AddReply(522602, -1, 23788); //@t
				bool var_133_bool;
				func_1071(var_1_object);
				if(var_133_bool != 0)
					var_0_object->AddReply(522603, -1, 23789); //@t
				return 0;
			}
			if(var_5_int == 24543) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523323, 24540, 24537); //@t
				var_0_object->AddReply(523322, 24538, 24536); //@t
				var_0_object->AddReply(522035, 24546, 23205); //@t
				return 0;
			}
			if(var_5_int == 24546) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523337, 24555, 24551); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=89";
			EMIT "Call2 0xe4";
			EMIT "Pop(1)";
			EMIT "Push((int) 523334)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
			EMIT "Pop(0)";
			EMIT "Push((int) 523335)";
			EMIT "Push((int) 24550)";
			EMIT "Push((int) 24549)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_5_int == 24555) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523341, 24550, 24556); //@t
				return 0;
			}
			if(var_5_int == 24538) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523325, 23214, 24539); //@t
				return 0;
			}
			if(var_5_int == 23214) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(522044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522045, -1, 23215); //@t
				var_0_object->AddReply(523321, 24550, 24535); //@t
				return 0;
			}
			if(var_5_int == 24550) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523338, -1, 24553); //@t
				var_0_object->AddReply(523339, -1, 24554); //@t
				return 0;
			}
			if(var_5_int == 24540) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523326); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523327, 24544, 24541); //@t
				return 0;
			}
			if(var_5_int == 24544) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(523330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523331, 23206, 24545); //@t
				return 0;
			}
			if(var_5_int == 23206) {
				func_228(var_6_int, "Neutral");
				var_0_object->SetMessage(522036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522037, -1, 23207); //@t
				var_0_object->AddReply(522038, -1, 23208); //@t
				return 0;
			}
			var_3_string = true;
			bool var_216_bool;
			func_1000(var_216_bool);
			if(var_216_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfb";
	
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		bool var_5_bool;
		func_675(var_5_bool);
		if(!var_5_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_903("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) { //@nz
			disable OnUse;
			bool var_9_bool; object var_10_object;
			var_5_object = var_10_object;
			func_666(var_9_bool, var_10_object);
			enable OnUse;
			object var_23_object;
			var_5_object = var_23_object;
			func_606(var_23_object);
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_9_bool;
	func_675(var_9_bool);
	if(!var_9_bool) goto Label_0; //@nz
}


// @pe
void func_1030(void)
{
	@SetVariable("oob11Anna1", 1);
}


void func_903(string var_11_string)
{
	float var_14_float; float var_15_float;
	@lshGetAnimTimes(var_11_string, var_14_float, var_15_float);
	@lshPlayAnimation(var_14_float, var_15_float, false);
}


// @pe
void func_1036(void)
{
	@SetVariable("b11q01", 2);
	bool var_29_bool;
	func_959(var_29_bool, "quest_b11_01", "open_well_exit");
}


void func_13(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	object var_37_object;
	func_938(var_37_object);
	var_37_object = var_36_object;
	func_765(var_35_bool, var_36_object);
	bool var_130_bool; object var_131_object;
	var_25_object = var_131_object;
	func_680(var_130_bool, var_131_object, 70.0);
	if(!var_130_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_177_int;
	func_994(var_177_int);
	var_31_object->SetNPCName(var_177_int);
	int var_178_int;
	func_992(var_178_int);
	var_31_object->SetNPCDescription(var_178_int);
	string var_179_string;
	func_996(var_179_string);
	var_31_object->SetPhoto(var_179_string);
	string var_180_string;
	func_998(var_180_string);
	var_31_object->SetPhoto2(var_180_string);
	int var_181_int;
	func_1137(var_181_int);
	var_31_object->SetPlayerName(var_181_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_190_object; object var_191_object;
	var_25_object = var_190_object;
	var_31_object = var_191_object;
	TaskCall(2);
	func_94(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_276_bool = !var_34_bool; //@nz
		if(var_276_bool == 0) goto Label_83;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_83:
	object var_277_object;
	var_25_object = var_277_object;
	func_748();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_910(string var_221_string, bool var_222_bool)
{
	float var_227_float; float var_228_float;
	@lshGetAnimTimes(var_221_string, var_227_float, var_228_float);
	@lshPlayAnimation(var_227_float, var_228_float, var_222_bool);
}


void func_656(bool var_13_bool, cvector var_14_cvector)
{
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector = var_14_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	bool var_20_bool;
	@Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_13_bool;
}


void func_916(bool var_69_bool, string var_70_string)
{
	bool var_72_bool;
	bool var_73_bool;
	func_1000(var_73_bool);
	if(var_73_bool != 0) {
		@lshHasSpeech(var_72_bool, var_70_string);
		if(var_72_bool != 0) {
			@lshPlaySpeech(var_70_string);
			var_69_bool = true;
		}
	}
	var_69_bool = false;
}


// @pe
void func_1047(bool var_198_bool)
{
	int var_200_int;
	func_954(var_200_int, "b11q01VictimChoosed");
	if(var_200_int != 0) {
		var_198_bool = true;
		return 0;
	}
	var_198_bool = false;
}


void func_666(bool var_9_bool, object var_10_object)
{
	cvector var_12_cvector;
	var_10_object->GetPosition(var_12_cvector);
	bool var_13_bool; cvector var_14_cvector;
	var_12_cvector = var_14_cvector;
	func_656(var_13_bool, var_14_cvector);
	var_13_bool = var_9_bool;
}


void func_675(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


// @pe
void func_1059(bool var_207_bool)
{
	int var_209_int;
	func_954(var_209_int, "oob11Anna1");
	if(var_209_int == 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


void func_931(void)
{
	bool var_8_bool;
	func_1000(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


void func_680(bool var_130_bool, object var_131_object, float var_132_float)
{
	cvector var_143_cvector; bool var_150_bool;
	var_131_object->GetPosition(var_143_cvector);
	float var_142_float;
	var_131_object->GetEyesHeight(var_142_float);
	var_151_float = GetByIndex(var_143_cvector, 1);
	SetByIndex(var_143_cvector, 1) = (var_151_float + var_142_float);
	cvector var_144_cvector;
	@GetPosition(var_144_cvector);
	@GetEyesHeight(var_142_float);
	var_152_float = GetByIndex(var_144_cvector, 1);
	SetByIndex(var_144_cvector, 1) = (var_152_float + var_142_float);
	cvector var_145_cvector = var_143_cvector - var_144_cvector;
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (float)0;
	var_155_float = sqrt(var_145_cvector | var_145_cvector);
	var_145_cvector /= var_155_float;
	cvector var_146_cvector = -var_145_cvector;
	cvector var_157_cvector;
	func_944(var_157_cvector, (var_146_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_147_cvector = ((var_145_cvector * var_132_float) + (var_157_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_149_bool;
	@IsOverrideActive(var_149_bool);
	if(var_149_bool != 0)
		var_130_bool = false;
	@StopWorld();
	@CameraTransit((var_144_cvector + var_147_cvector), var_146_cvector);
	var_170_float = GetByIndex(var_147_cvector, 0);
	var_171_float = GetByIndex(var_147_cvector, 2);
	@Rotate(var_170_float, var_171_float);
	bool var_172_bool;
	func_1000(var_172_bool);
	if(var_172_bool != 0) {
	} else {
		@HasAnimationTrack(var_150_bool, "head");
		if(var_150_bool == 0) goto Label_742;
		@LookAsyncCamera("head");
	}
Label_742:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_130_bool = true;
	
}


void func_938(object var_37_object)
{
	object var_39_object;
	@self(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1071(bool var_262_bool)
{
	int var_264_int;
	func_954(var_264_int, "b11q01KillAnna");
	if(var_264_int != 0) {
		var_262_bool = true;
		return 0;
	}
	var_262_bool = false;
}


void func_944(cvector var_157_cvector, cvector var_158_cvector)
{
	float var_161_float = sqrt(var_158_cvector | var_158_cvector);
	if(var_161_float < 0.000001)
		var_157_cvector = [0.0, 0.0, 0.0];
	var_157_cvector = var_158_cvector / var_161_float;
}


void func_823(bool var_46_bool, object var_47_object)
{
	string var_53_string; bool var_55_bool; int var_56_int; string var_57_string;
	var_53_string = "c";
	int var_54_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_47_object->HasProperty((var_53_string + (var_54_int + 1)), var_55_bool);
			if(!var_55_bool) { //@nz
			} else {
				var_54_int += 1;
			}
		}
		if(!var_54_int) { //@nz
			var_46_bool = false;
			return 10;
		}
		var_56_int = 0;
		if(var_54_int > 1)
			@irand(var_56_int, var_54_int);
		var_47_object->GetProperty((var_53_string + (var_56_int + 1)), var_57_string);
		bool var_69_bool; string var_70_string;
		var_57_string = var_70_string;
		func_916(var_69_bool, var_70_string);
		var_69_bool = var_46_bool;
		return 10;

	}
}


void func_954(int var_200_int, string var_201_string)
{
	int var_203_int;
	@GetVariable(var_201_string, var_203_int);
	var_203_int = var_200_int;
}


void func_1083(void)
{
	object var_40_object;
	@CreateDiaryEntry(var_40_object, 315, 1, 522057);
	bool var_44_bool; object var_45_object;
	var_40_object = var_45_object;
	func_1109(var_44_bool, var_45_object, 313);
}
EMIT "Stack[-1] = 0";


void func_959(bool var_29_bool, string var_30_string, string var_31_string)
{
	object var_33_object;
	@FindActor(var_33_object, var_30_string);
	if(var_33_object == null)
		var_29_bool = false;
	@Trigger(var_33_object, var_31_string);
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1096(object var_53_object)
{
	object var_55_object;
	@GetDiaryRoot(var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_53_object = false;
	}
	var_55_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_971(bool var_17_bool, string var_18_string, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_18_string);
	if(var_22_object == null)
		var_17_bool = false;
	@Trigger(var_22_object, var_19_string, var_20_string);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1109(bool var_44_bool, object var_45_object, int var_46_int)
{
	object var_53_object;
	func_1096(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	object var_51_object;
	var_50_object->Find(var_46_int, var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_46_int);
		var_44_bool = false;
	}
	var_51_object->AddChild(var_45_object);
	@SendWorldWndMessage(7);
	int var_52_int;
	var_45_object->GetCategory(var_52_int);
	@SetDiarySection(var_52_int);
	var_44_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_983(int var_90_int)
{
	float var_92_float;
	@GetGameTime(var_92_float);
	var_90_int = 1 + (var_92_float / 24);
}


void func_860(bool var_77_bool, object var_78_object)
{
	bool var_86_bool; int var_87_int; string var_88_string;
	int var_90_int;
	func_983(var_90_int);
	string var_84_string = ("d" + var_90_int) + "m";
	int var_85_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_78_object->HasProperty((var_84_string + (var_85_int + 1)), var_86_bool);
			if(!var_86_bool) { //@nz
			} else {
				var_85_int += 1;
			}
		}
		if(!var_85_int) { //@nz
			var_77_bool = false;
			return 10;
		}
		var_87_int = 0;
		if(var_85_int > 1)
			@irand(var_87_int, var_85_int);
		var_78_object->GetProperty((var_84_string + (var_87_int + 1)), var_88_string);
		bool var_109_bool; string var_110_string;
		var_88_string = var_110_string;
		func_916(var_109_bool, var_110_string);
		var_109_bool = var_77_bool;
		return 10;

	}
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_190_object, object var_191_object)
{
	var_0_object = var_191_object;
	var_1_object = var_190_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_197_bool = false;
		bool var_198_bool;
		func_1047(var_1_object);
		if(!var_198_bool) { //@nz
			bool var_207_bool;
			func_1059(var_1_object);
			if(var_207_bool != 0)
				var_197_bool = true;
		}
		if(var_197_bool != 0) {
			object var_213_object; object var_214_object;
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_1030();
			func_228(var_191_object, "Neutral");
			var_0_object->SetMessage(522034); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523328, 24543, 24542); //@t
		} else {
					bool var_246_bool;
					func_1047(var_1_object);
					var_248_bool = !var_246_bool; //@nz
					if(var_248_bool == 0) goto Label_161;
					func_228(var_191_object, "Neutral");
					var_0_object->SetMessage(522039); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522040, -1, 23210); //@t
					var_0_object->AddReply(522041, -1, 23211); //@t
		}
	}
Label_198:
	for(;;) {
		bool var_233_bool;
		func_1000(var_233_bool);
		if(var_233_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_903(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_227;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_227:
			return 0;

		}

	}
	
Label_161:
	func_228(var_191_object, "Neutral");
	var_0_object->SetMessage(522042); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(522043, -1, 23213); //@t
	bool var_262_bool;
	func_1071(var_1_object);
	if(var_262_bool != 0)
		var_0_object->AddReply(522602, -1, 23788); //@t
	bool var_271_bool;
	func_1071(var_1_object);
	if(var_271_bool != 0)
		var_0_object->AddReply(522603, -1, 23789); //@t
	goto Label_198;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_606(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(1);
	int var_24_int;
	func_13(var_26_object, var_24_int, var_25_object);
	TaskReturn();
}


void func_992(int var_178_int)
{
	var_178_int = 515530;
}


void func_994(int var_177_int)
{
	var_177_int = 502856;
}


void func_996(string var_179_string)
{
	var_179_string = "ui/NPC_Anna.png";
}


// @pe
void func_228(object var_2_object, string var_217_string)
{
	bool var_218_bool;
	func_1000(var_218_bool);
	if(!var_218_bool) //@nz
		return 0;
	if(var_217_string == var_2_object)
		return 0;
	string var_221_string; bool var_222_bool;
	var_217_string = var_221_string;
	if(var_217_string == "")
		var_222_bool = false;
	else
		var_222_bool = true;
	func_910(var_221_string, var_222_bool);
	var_2_object = var_217_string;
	
}


void func_998(string var_180_string)
{
	var_180_string = "ui/NPC_Anna_b.png";
}


void func_1000(bool var_73_bool)
{
	var_73_bool = true;
}


// @pe
void func_1002(void)
{
	@SetVariable("b11q01KnowWhoKilled", 1);
	func_1083();
}


void func_748(void)
{
	bool var_279_bool;
	@CameraSwitchToNormal();
	bool var_280_bool;
	func_1000(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_279_bool, "head");
		if(var_279_bool == 0) goto Label_764;
		@UnlookAsync("head");
	}
Label_764:
	
}


void func_1137(int var_181_int)
{
	int var_183_int;
	@GetVariable("branch", var_183_int);
	if(var_183_int == 0) {
		var_181_int = 1;
		return 2;
	EMIT "GOTO 0x480";
	}
	if(var_183_int == 1) {
		var_181_int = 2;
		return 2;
	}
	var_181_int = 3;
}


// @pe
void func_1011(void)
{
	@SetVariable("b11q01VictimChoosed", 1);
	@SetVariable("b11q01KillAnna", 1);
	bool var_17_bool;
	func_971(var_17_bool, "volonteers_danko", "kill", "anna");
	@Trace("Anna is dead");
}


void func_765(bool var_35_bool, object var_36_object)
{
	int var_42_int; int var_43_int;
	@GetVariable("voice_common", var_42_int);
	if(var_42_int != 0) {
		bool var_46_bool; object var_47_object;
		var_36_object = var_47_object;
		func_823(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			bool var_77_bool; object var_78_object;
			var_36_object = var_78_object;
			func_860(var_77_bool, var_78_object);
			if(!var_77_bool) { //@nz
				var_35_bool = false;
				return 4;
			}
		}
		@irand(var_43_int, 2);
		if(var_43_int != 0)
			@SetVariable("voice_common", ((var_42_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_122_bool; object var_123_object;
		var_36_object = var_123_object;
		func_860(var_122_bool, var_123_object);
		if(!var_122_bool) { //@nz
			bool var_125_bool; object var_126_object;
			var_36_object = var_126_object;
			func_823(var_125_bool, var_126_object);
			if(!var_125_bool) { //@nz
				var_35_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_821;
	
Label_821:
	var_35_bool = true;
	
}


