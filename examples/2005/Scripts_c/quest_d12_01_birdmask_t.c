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
			func_772();
			if(var_11_object == 37173) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_846();
			}
			if(var_11_object == 37188) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_852();
			}
			if(var_10_bool == 37172) {
				bool var_32_bool = false;
				bool var_33_bool;
				func_859(var_33_bool, var_1_object);
				if(!var_33_bool) { //@nz
					bool var_147_bool;
					func_893(var_1_object);
					if(!var_147_bool) //@nz
						var_32_bool = true;
				}
				if(var_32_bool != 0) {
					func_211(var_11_object, "Neutral");
					var_0_object->SetMessage(535490); //@t
					var_0_object->ClearReplies(); //@t
					bool var_169_bool;
					func_881(var_1_object);
					if(var_169_bool != 0)
						var_0_object->AddReply(535491, 37174, 37173); //@t
					var_0_object->AddReply(535504, -1, 37186); //@t
					return 0;
				}
				bool var_181_bool = false;
				bool var_182_bool = false;
				bool var_183_bool;
				func_893(var_1_object);
				if(var_183_bool != 0) {
					bool var_185_bool;
					func_859(var_185_bool, var_1_object);
					if(var_185_bool != 0)
						var_182_bool = true;
				}
				if(var_182_bool != 0) {
					bool var_187_bool;
					func_869(var_1_object);
					if(var_187_bool != 0)
						var_181_bool = true;
				}
				if(var_181_bool != 0) {
					object var_193_object; object var_194_object;
					var_193_object = var_1_object;
					var_194_object = var_0_object;
					func_840();
					func_211(var_11_object, "Neutral");
					var_0_object->SetMessage(535505); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535506, -1, 37188); //@t
					return 0;
				}
				func_211(var_11_object, "Neutral");
				var_0_object->SetMessage(535507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535508, -1, 37190); //@t
				return 0;
			}
			if(var_10_bool == 37174) {
				func_211(var_11_object, "Neutral");
				var_0_object->SetMessage(535492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535493, 37176, 37175); //@t
				var_0_object->AddReply(535497, 37180, 37179); //@t
				return 0;
			}
			if(var_10_bool == 37180) {
				func_211(var_11_object, "Neutral");
				var_0_object->SetMessage(535498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535499, 37182, 37181); //@t
				var_0_object->AddReply(535503, -1, 37185); //@t
				return 0;
			}
			if(var_10_bool == 37182) {
				func_211(var_11_object, "Neutral");
				var_0_object->SetMessage(535500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535501, -1, 37183); //@t
				var_0_object->AddReply(535502, -1, 37184); //@t
				return 0;
			}
			if(var_10_bool == 37176) {
				func_211(var_11_object, "Neutral");
				var_0_object->SetMessage(535494); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535495, -1, 37177); //@t
				var_0_object->AddReply(535496, -1, 37178); //@t
				return 0;
			}
			var_3_string = true;
			bool var_247_bool;
			func_838(var_247_bool);
			if(var_247_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xea";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_485(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(1);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_550(var_9_object, var_10_object);
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
			func_512(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_761(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_663(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_832(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_830(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_834(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_836(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_911(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_280_bool = !var_24_bool; //@nz
		if(var_280_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_281_object;
	var_15_object = var_281_object;
	func_731();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_512(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_650(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_643(bool var_61_bool)
{
	var_61_bool = true;
}


void func_772(void)
{
	bool var_13_bool;
	func_838(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_645(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1029(bool var_133_bool, int var_134_int)
{
	int var_136_int;
	@GetVariable(("vol_" + var_134_int), var_136_int);
	var_133_bool = (var_136_int & 4) != 0;
}


// @pe
void func_905(bool var_95_bool)
{
	bool var_97_bool;
	func_1163(var_97_bool);
	var_97_bool = var_95_bool;
}


void func_650(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_779(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_1163(bool var_97_bool)
{
	var_97_bool = false;
	bool var_98_bool = false;
	bool var_99_bool;
	func_1125(var_99_bool);
	if(var_99_bool != 0) {
		bool var_143_bool;
		func_1087(var_143_bool);
		if(var_143_bool != 0)
			var_98_bool = true;
	}
	if(var_98_bool != 0) {
		bool var_175_bool;
		func_1049(var_175_bool);
		if(var_175_bool != 0)
			var_97_bool = true;
	}
}


void func_911(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x39e";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_1039(bool var_124_bool, int var_125_int)
{
	int var_127_int;
	@GetVariable(("vol_" + var_125_int), var_127_int);
	var_124_bool = (var_127_int & 16) != 0;
}


void func_658(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_789(int var_209_int, string var_210_string)
{
	int var_212_int;
	@GetVariable(var_210_string, var_212_int);
	var_212_int = var_209_int;
}


void func_663(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_779(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_838(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_725;
		@LookAsyncCamera("head");
	}
Label_725:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_1049(bool var_175_bool)
{
	object var_180_object; int var_183_int;
	@CreateIntVector(var_180_object);
	object var_184_object;
	var_180_object = var_184_object;
	func_928(var_184_object, false, -1);
	int var_181_int;
	var_180_object->size(var_181_int);
	int var_182_int = 0;
	
	while(var_182_int < var_181_int) {
		var_180_object->get(var_183_int, var_182_int);
		bool var_200_bool = true;
		bool var_201_bool; int var_202_int;
		var_183_int = var_202_int;
		func_1039(var_201_bool, var_202_int);
		if(var_201_bool != 1) {
			bool var_203_bool; int var_204_int;
			var_183_int = var_204_int;
			func_1029(var_203_bool, var_204_int);
			if(var_203_bool != 1)
				var_200_bool = false;
		}
		if(var_200_bool != 0)
			var_175_bool = false;
		var_182_int += 1;
	}
	
	var_175_bool = true;
}
EMIT "Stack[-4] = 0";


void func_794(bool var_24_bool, string var_25_string, string var_26_string)
{
	object var_28_object;
	@FindActor(var_28_object, var_25_string);
	if(var_28_object == null)
		var_24_bool = false;
	@Trigger(var_28_object, var_26_string);
	var_24_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_928(object var_184_object, bool var_185_bool, int var_186_int)
{
	var_184_object->add(18);
	var_184_object->add(24);
	var_184_object->add(20);
	var_184_object->add(14);
	if(var_185_bool == false) {
		var_184_object->add(10);
		var_184_object->add(17);
		var_184_object->add(8);
	} else if(var_186_int != 1) {
		var_184_object->add(10);
	}
	
}


// @pe
void func_550(object var_2_object, string var_3_string)
{
	func_645();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_806(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_813(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_806(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


void func_564(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_658(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_813(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_658(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_611;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_806(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_640;
				}
			} else if(var_28_int != 0) {
				goto Label_640;
			}
			}
					bool var_61_bool;
					func_643(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_635;
			}
		}
	Label_640:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_635:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_830(int var_73_int)
{
	var_73_int = 515571;
}


void func_1087(bool var_143_bool)
{
	object var_148_object; int var_151_int;
	@CreateIntVector(var_148_object);
	object var_152_object;
	var_148_object = var_152_object;
	func_961(var_152_object, false, -1);
	int var_149_int;
	var_148_object->size(var_149_int);
	int var_150_int = 0;
	
	while(var_150_int < var_149_int) {
		var_148_object->get(var_151_int, var_150_int);
		bool var_169_bool = true;
		bool var_170_bool; int var_171_int;
		var_151_int = var_171_int;
		func_1039(var_170_bool, var_171_int);
		if(var_170_bool != 1) {
			bool var_172_bool; int var_173_int;
			var_151_int = var_173_int;
			func_1029(var_172_bool, var_173_int);
			if(var_172_bool != 1)
				var_169_bool = false;
		}
		if(var_169_bool != 0)
			var_143_bool = false;
		var_150_int += 1;
	}
	
	var_143_bool = true;
}
EMIT "Stack[-4] = 0";


void func_832(int var_72_int)
{
	var_72_int = 504029;
}


// @pe
void func_961(object var_152_object, bool var_153_bool, int var_154_int)
{
	var_152_object->add(6);
	var_152_object->add(26);
	var_152_object->add(2);
	var_152_object->add(22);
	if(var_153_bool == false) {
		var_152_object->add(15);
		var_152_object->add(5);
		var_152_object->add(16);
		var_152_object->add(19);
	} else if(var_154_int != 0) {
		var_152_object->add(15);
	}
	
}


void func_834(string var_74_string)
{
	var_74_string = "ui/NPC_bmask.png";
}


void func_836(string var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png";
}


void func_838(bool var_67_bool)
{
	var_67_bool = false;
}


// @pe
void func_840(void)
{
	@SetVariable("ood12BirdmaskT", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool = false;
		bool var_93_bool;
		func_859(var_93_bool, var_1_object);
		if(!var_93_bool) { //@nz
			bool var_207_bool;
			func_893(var_1_object);
			if(!var_207_bool) //@nz
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			func_211(var_86_object, "Neutral");
			var_0_object->SetMessage(535490); //@t
			var_0_object->ClearReplies(); //@t
			bool var_229_bool;
			func_881(var_1_object);
			if(var_229_bool != 0)
				var_0_object->AddReply(535491, 37174, 37173); //@t
			var_0_object->AddReply(535504, -1, 37186); //@t
		} else {
					bool var_254_bool = false;
					bool var_255_bool = false;
					bool var_256_bool;
					func_893(var_1_object);
					if(var_256_bool != 0) {
						bool var_258_bool;
						func_859(var_258_bool, var_1_object);
						if(var_258_bool != 0)
							var_255_bool = true;
					}
					if(var_255_bool != 0) {
						bool var_260_bool;
						func_869(var_1_object);
						if(var_260_bool != 0)
							var_254_bool = true;
					}
					if(var_254_bool == 0) goto Label_164;
					object var_266_object; object var_267_object;
					var_266_object = var_1_object;
					var_267_object = var_0_object;
					func_840();
					func_211(var_86_object, "Neutral");
					var_0_object->SetMessage(535505); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(535506, -1, 37188); //@t
		}
	}
Label_181:
	for(;;) {
		bool var_241_bool;
		func_838(var_241_bool);
		if(var_241_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_748(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_210;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_210:
			return 0;

		}

	}
	
Label_164:
	func_211(var_86_object, "Neutral");
	var_0_object->SetMessage(535507); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(535508, -1, 37190); //@t
	goto Label_181;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_846(void)
{
	@SetVariable("ood12BirdmaskT2", 1);
}


// @pe
void func_211(object var_2_object, string var_216_string)
{
	bool var_217_bool;
	func_838(var_217_bool);
	if(!var_217_bool) //@nz
		return 0;
	if(var_216_string == var_2_object)
		return 0;
	string var_220_string; bool var_221_bool;
	var_216_string = var_220_string;
	if(var_216_string == "")
		var_221_bool = false;
	else
		var_221_bool = true;
	func_755(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	
}


// @pe
void func_852(void)
{
	bool var_24_bool;
	func_794(var_24_bool, "quest_d12_01", "init_theater");
}


// @pe
void func_859(bool var_93_bool, object var_94_object)
{
	object var_96_object;
	var_94_object = var_96_object;
	func_905(var_96_object);
	bool var_95_bool;
	if(var_95_bool != 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_731(void)
{
	bool var_283_bool;
	@CameraSwitchToNormal();
	bool var_284_bool;
	func_838(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		@HasAnimationTrack(var_283_bool, "head");
		if(var_283_bool == 0) goto Label_747;
		@UnlookAsync("head");
	}
Label_747:
	
}


// @pe
void func_869(bool var_260_bool)
{
	int var_262_int;
	func_789(var_262_int, "ood12BirdmaskT");
	if(var_262_int == 0) {
		var_260_bool = true;
		return 0;
	}
	var_260_bool = false;
}


// @pe
void func_485(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_658(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_564();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_997(object var_108_object, bool var_109_bool)
{
	var_108_object->add(7);
	var_108_object->add(23);
	var_108_object->add(21);
	var_108_object->add(9);
	var_108_object->add(3);
	var_108_object->add(1);
	var_108_object->add(11);
	var_108_object->add(13);
	if(var_109_bool == false)
		var_108_object->add(25);
}


void func_1125(bool var_99_bool)
{
	object var_104_object; int var_107_int;
	@CreateIntVector(var_104_object);
	object var_108_object;
	var_104_object = var_108_object;
	func_997(false, -1);
	int var_105_int;
	var_104_object->size(var_105_int);
	int var_106_int = 0;
	
	while(var_106_int < var_105_int) {
		var_104_object->get(var_107_int, var_106_int);
		bool var_123_bool = true;
		bool var_124_bool; int var_125_int;
		var_107_int = var_125_int;
		func_1039(var_124_bool, var_125_int);
		if(var_124_bool != 1) {
			bool var_133_bool; int var_134_int;
			var_107_int = var_134_int;
			func_1029(var_133_bool, var_134_int);
			if(var_133_bool != 1)
				var_123_bool = false;
		}
		if(var_123_bool != 0)
			var_99_bool = false;
		var_106_int += 1;
	}
	
	var_99_bool = true;
}
EMIT "Stack[-4] = 0";


void func_748(string var_243_string)
{
	float var_246_float; float var_247_float;
	@lshGetAnimTimes(var_243_string, var_246_float, var_247_float);
	@lshPlayAnimation(var_246_float, var_247_float, false);
}


// @pe
void func_881(bool var_229_bool)
{
	int var_231_int;
	func_789(var_231_int, "ood12BirdmaskT2");
	if(var_231_int == 0) {
		var_229_bool = true;
		return 0;
	}
	var_229_bool = false;
}


void func_755(string var_220_string, bool var_221_bool)
{
	float var_226_float; float var_227_float;
	@lshGetAnimTimes(var_220_string, var_226_float, var_227_float);
	@lshPlayAnimation(var_226_float, var_227_float, var_221_bool);
}


void func_761(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_893(bool var_207_bool)
{
	int var_209_int;
	func_789(var_209_int, "d12q01ChildsAreVisited");
	if(var_209_int != 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


