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
			func_764();
			if(var_10_bool == 29382) {
				bool var_16_bool = false;
				bool var_17_bool = false;
				bool var_18_bool;
				func_844(var_1_object);
				if(var_18_bool != 0) {
					bool var_26_bool;
					func_832(var_1_object);
					if(var_26_bool != 0)
						var_17_bool = true;
				}
				if(var_17_bool != 0) {
					bool var_32_bool;
					func_856(var_1_object);
					if(!var_32_bool) //@nz
						var_16_bool = true;
				}
				if(var_16_bool != 0) {
					object var_39_object; object var_40_object;
					var_39_object = var_1_object;
					var_40_object = var_0_object;
					func_820();
					func_229(var_11_object, "Neutral");
					var_0_object->SetMessage(528020); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528021, 31634, 29383); //@t
					var_0_object->AddReply(530245, 31634, 31633); //@t
					return 0;
				}
				bool var_67_bool = false;
				bool var_68_bool = false;
				bool var_69_bool;
				func_868(var_1_object);
				if(var_69_bool != 0) {
					bool var_75_bool;
					func_832(var_1_object);
					if(var_75_bool != 0)
						var_68_bool = true;
				}
				if(var_68_bool != 0) {
					bool var_77_bool;
					func_856(var_1_object);
					if(var_77_bool != 0)
						var_67_bool = true;
				}
				if(var_67_bool != 0) {
					object var_79_object; object var_80_object;
					var_79_object = var_1_object;
					var_80_object = var_0_object;
					func_826();
					func_229(var_11_object, "Neutral");
					var_0_object->SetMessage(528028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530244, -1, 31632); //@t
					var_0_object->AddReply(528029, -1, 29391); //@t
					return 0;
				}
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(528022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528023, -1, 29385); //@t
				var_0_object->AddReply(530243, -1, 31631); //@t
				return 0;
			}
			if(var_10_bool == 31634) {
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(530246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530247, 31636, 31635); //@t
				var_0_object->AddReply(530249, 31636, 31637); //@t
				return 0;
			}
			if(var_10_bool == 31636) {
				func_229(var_11_object, "Neutral");
				var_0_object->SetMessage(530248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530250, -1, 31639); //@t
				var_0_object->AddReply(530251, -1, 31640); //@t
				return 0;
			}
			var_3_string = true;
			bool var_119_bool;
			func_794(var_119_bool);
			if(var_119_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_457(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_522(var_9_object, var_10_object);
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
			func_484(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_753(var_4_bool);
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
	func_635(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_788(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_786(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_790(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_792(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_880(var_77_int);
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
		var_194_bool = !var_24_bool; //@nz
		if(var_194_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_195_object;
	var_15_object = var_195_object;
	func_704();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_771(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_522(object var_2_object, string var_3_string)
{
	func_617();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_781(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_786(int var_74_int)
{
	var_74_int = 527721;
}


void func_788(int var_73_int)
{
	var_73_int = 527720;
}


void func_790(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_536(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_630(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_803(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_630(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_583;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_796(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_612;
				}
			} else if(var_27_int != 0) {
				goto Label_612;
			}
			}
					bool var_60_bool;
					func_615(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_607;
			}
		}
	Label_612:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_607:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_792(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_794(bool var_68_bool)
{
	var_68_bool = false;
}


void func_796(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_803(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_796(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


// @pe
void func_820(void)
{
	@SetVariable("ook11Soldier1", 1);
}


// @pe
void func_826(void)
{
	@SetVariable("ook11Soldier2", 1);
}


void func_704(void)
{
	bool var_197_bool;
	@CameraSwitchToNormal(true);
	bool var_199_bool;
	func_794(var_199_bool);
	if(var_199_bool != 0) {
	} else {
		@HasAnimationTrack(var_197_bool, "head");
		if(var_197_bool == 0) goto Label_721;
		@UnlookAsync("head");
	}
Label_721:
	
}


// @pe
void func_832(bool var_103_bool)
{
	int var_105_int;
	func_781(var_105_int, "k11q01");
	if(var_105_int == 2)
		var_103_bool = true;
	var_103_bool = false;
}


// @pe
void func_457(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_630(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_536();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool = false;
		bool var_94_bool = false;
		bool var_95_bool;
		func_844(var_1_object);
		if(var_95_bool != 0) {
			bool var_103_bool;
			func_832(var_1_object);
			if(var_103_bool != 0)
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			bool var_109_bool;
			func_856(var_1_object);
			if(!var_109_bool) //@nz
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			object var_116_object; object var_117_object;
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_820();
			func_229(var_87_object, "Neutral");
			var_0_object->SetMessage(528020); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528021, 31634, 29383); //@t
			var_0_object->AddReply(530245, 31634, 31633); //@t
		} else {
					bool var_162_bool = false;
					bool var_163_bool = false;
					bool var_164_bool;
					func_868(var_1_object);
					if(var_164_bool != 0) {
						bool var_170_bool;
						func_832(var_1_object);
						if(var_170_bool != 0)
							var_163_bool = true;
					}
					if(var_163_bool != 0) {
						bool var_172_bool;
						func_856(var_1_object);
						if(var_172_bool != 0)
							var_162_bool = true;
					}
					if(var_162_bool == 0) goto Label_177;
					object var_174_object; object var_175_object;
					var_174_object = var_1_object;
					var_175_object = var_0_object;
					func_826();
					func_229(var_87_object, "Neutral");
					var_0_object->SetMessage(528028); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530244, -1, 31632); //@t
					var_0_object->AddReply(528029, -1, 29391); //@t
		}
	}
Label_199:
	for(;;) {
		bool var_144_bool;
		func_794(var_144_bool);
		if(var_144_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_722(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_228;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_228:
			return 0;

		}

	}
	
Label_177:
	func_229(var_87_object, "Neutral");
	var_0_object->SetMessage(528022); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(528023, -1, 29385); //@t
	var_0_object->AddReply(530243, -1, 31631); //@t
	goto Label_199;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_844(bool var_95_bool)
{
	int var_97_int;
	func_781(var_97_int, "ook11Soldier1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


void func_722(string var_146_string)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_146_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_146_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_146_string);
	}
	
}


// @pe
void func_856(bool var_109_bool)
{
	int var_111_int;
	func_781(var_111_int, "k11q01Cured");
	if(var_111_int != 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


void func_738(string var_124_string, bool var_125_bool)
{
	bool var_131_bool; float var_132_float; float var_133_float;
	@lshHasAnimation(var_131_bool, var_124_string);
	if(var_131_bool != 0) {
		@lshGetAnimTimes(var_124_string, var_132_float, var_133_float);
		@lshPlayAnimation(var_132_float, var_133_float, var_125_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_124_string);
	}
	
}


// @pe
void func_868(bool var_164_bool)
{
	int var_166_int;
	func_781(var_166_int, "ook11Soldier2");
	if(var_166_int == 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


// @pe
void func_229(object var_2_object, string var_120_string)
{
	bool var_121_bool;
	func_794(var_121_bool);
	if(!var_121_bool) //@nz
		return 0;
	if(var_120_string == var_2_object)
		return 0;
	string var_124_string; bool var_125_bool;
	var_120_string = var_124_string;
	if(var_120_string == "")
		var_125_bool = false;
	else
		var_125_bool = true;
	func_738(var_124_string, var_125_bool);
	var_2_object = var_120_string;
	
}


void func_484(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_622(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_615(bool var_60_bool)
{
	var_60_bool = true;
}


void func_617(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_622(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_880(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x37f";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_753(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_630(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_635(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_771(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_794(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_698;
		@LookAsyncCamera("head");
	}
Label_698:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_764(void)
{
	bool var_13_bool;
	func_794(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


