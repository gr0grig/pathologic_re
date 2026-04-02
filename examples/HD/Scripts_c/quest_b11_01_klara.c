// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1216();
			if(var_7_cvector == 23179) {
				bool var_13_bool = false;
				bool var_14_bool;
				func_1293(var_1_object);
				if(!var_14_bool) { //@nz
					bool var_23_bool;
					func_1305(var_1_object);
					if(var_23_bool != 0)
						var_13_bool = true;
				}
				if(var_13_bool != 0) {
					object var_29_object; object var_30_object;
					var_29_object = var_1_object;
					var_30_object = var_0_object;
					func_1287();
					func_204(var_8_bool, "Neutral");
					var_0_object->SetMessage(522009); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523279, 24484, 24483); //@t
					var_0_object->AddReply(522010, 24503, 23180); //@t
					var_0_object->AddReply(523284, 24490, 24489); //@t
					var_0_object->AddReply(523286, 24492, 24491); //@t
					var_0_object->AddReply(523305, 24514, 24513); //@t
					var_0_object->AddReply(523278, 24486, 24482); //@t
					var_0_object->AddReply(523304, -1, 24512); //@t
					return 0;
				}
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(522096); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522097, -1, 23266); //@t
				var_0_object->AddReply(523318, 24533, 24532); //@t
				return 0;
			}
			if(var_7_cvector == 24533) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523320, -1, 24534); //@t
				return 0;
			}
			if(var_7_cvector == 24514) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523307, 24516, 24515); //@t
				var_0_object->AddReply(523309, 24518, 24517); //@t
				return 0;
			}
			if(var_7_cvector == 24518) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523310); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523312, 24508, 24521); //@t
				var_0_object->AddReply(523314, 24484, 24524); //@t
				return 0;
			}
			if(var_7_cvector == 24516) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523311, 24508, 24519); //@t
				var_0_object->AddReply(523313, 24484, 24523); //@t
				return 0;
			}
			if(var_7_cvector == 24492) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523287); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523300, 24508, 24506); //@t
				return 0;
			}
			if(var_7_cvector == 24490) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523290, -1, 24495); //@t
				var_0_object->AddReply(523291, -1, 24496); //@t
				return 0;
			}
			if(var_7_cvector == 24503) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523299, 24494, 24504); //@t
				return 0;
			}
			if(var_7_cvector == 24484) {
				func_204(var_8_bool, "Neutral");
				var_0_object->SetMessage(523280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523281, 24486, 24485); //@t
				var_0_object->AddReply(523315, 24494, 24527); //@t
				return 0;
			}
			if(var_7_cvector == 24486) {
				func_204(var_8_bool, "Fear");
				var_0_object->SetMessage(523282); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523288, 24494, 24493); //@t
				var_0_object->AddReply(523316, 24498, 24529); //@t
				return 0;
			}
			if(var_7_cvector == 24494) {
				func_204(var_8_bool, "Neutral");
				var_0_object->SetMessage(523289); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523292, 24498, 24497); //@t
				return 0;
			}
			if(var_7_cvector == 24498) {
				func_204(var_8_bool, "Neutral");
				var_0_object->SetMessage(523293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523294, 24508, 24499); //@t
				var_0_object->AddReply(523295, 24501, 24500); //@t
				return 0;
			}
			if(var_7_cvector == 24501) {
				func_204(var_8_bool, "Neutral");
				var_0_object->SetMessage(523296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523301, 24508, 24507); //@t
				var_0_object->AddReply(523297, -1, 24502); //@t
				return 0;
			}
			if(var_7_cvector == 24508) {
				func_204(var_8_bool, "Neutral");
				var_0_object->SetMessage(523302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523303, -1, 24509); //@t
				var_0_object->AddReply(523317, -1, 24531); //@t
				return 0;
			}
			var_3_string = true;
			bool var_198_bool;
			func_1285(var_198_bool);
			if(var_198_bool != 0)
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
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_661(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1223(var_13_object);
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
			func_1223(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_768();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_783();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_726();
			bool var_11_bool = false;
			bool var_12_bool;
			func_940(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_695(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_675(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1223(var_53_object);
					var_53_object = var_52_object;
					func_1090(var_51_bool, var_52_object);
				}
			} else {
				func_690(var_7_int);
				func_717();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_717();
		else
			func_1170("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_908();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_931(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_612(var_25_object);
			func_1170("Neutral");
			func_726();
			func_717();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_945(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1279(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1277(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1281(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1283(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1317(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1223(var_100_object);
	var_100_object = var_99_object;
	func_1032(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_285_bool = !var_36_bool; //@nz
		if(var_285_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_286_object;
	var_27_object = var_286_object;
	func_1014();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1281(string var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
}


// @pe
void func_768(void)
{
	func_908();
	func_726();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1283(string var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
}


void func_1285(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1287(void)
{
	@SetVariable("oob11KlaraD1", 1);
}


void func_1032(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1090(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1127(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1127(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1090(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1088;
	
Label_1088:
	var_98_bool = true;
	
}


void func_906(bool var_45_bool)
{
	var_45_bool = true;
}


void func_908(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1293(bool var_201_bool)
{
	int var_203_int;
	func_1239(var_203_int, "b11q01VictimChoosed");
	if(var_203_int != 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_783(void)
{
	@StopGroup0();
	func_726();
	func_1170("Neutral");
	func_717();
}


void func_913(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1170(string var_261_string)
{
	bool var_265_bool; float var_266_float; float var_267_float;
	@lshHasAnimation(var_265_bool, var_261_string);
	if(var_265_bool != 0) {
		@lshGetAnimTimes(var_261_string, var_266_float, var_267_float);
		@lshPlayAnimation(var_266_float, var_267_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_261_string);
	}
	
}


void func_661(object var_0_object)
{
	bool var_7_bool;
	func_940(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_837();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1305(bool var_210_bool)
{
	int var_212_int;
	func_1239(var_212_int, "oob11KlaraD1");
	if(var_212_int == 0) {
		var_210_bool = true;
		return 0;
	}
	var_210_bool = false;
}


void func_921(bool var_15_bool, cvector var_16_cvector)
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


void func_1186(string var_224_string, bool var_225_bool)
{
	bool var_231_bool; float var_232_float; float var_233_float;
	@lshHasAnimation(var_231_bool, var_224_string);
	if(var_231_bool != 0) {
		@lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		@lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_224_string);
	}
	
}


void func_931(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_921(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_675(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_931(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1317(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x534";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_940(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_945(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1229(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1285(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1008;
		@LookAsyncCamera("head");
	}
Label_1008:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_690(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1201(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1285(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_695(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_913(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1216(void)
{
	bool var_10_bool;
	func_1285(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1090(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1201(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_837(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_940(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1260(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_940(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1253(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_892;
			goto Label_903;
			}
				Label_892:
					bool var_45_bool;
					func_906(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_898;
			}
		}
	Label_903:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_898:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1223(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_204(object var_2_object, string var_220_string)
{
	bool var_221_bool;
	func_1285(var_221_bool);
	if(!var_221_bool) //@nz
		return 0;
	if(var_220_string == var_2_object)
		return 0;
	string var_224_string; bool var_225_bool;
	var_220_string = var_224_string;
	if(var_220_string == "")
		var_225_bool = false;
	else
		var_225_bool = true;
	func_1186(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	
}


void func_717(void)
{
	float var_297_float;
	@rand(var_297_float, 8, 16);
	@SetTimer(10, var_297_float);
}


void func_1229(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool = false;
		bool var_201_bool;
		func_1293(var_1_object);
		if(!var_201_bool) { //@nz
			bool var_210_bool;
			func_1305(var_1_object);
			if(var_210_bool != 0)
				var_200_bool = true;
		}
		if(var_200_bool != 0) {
			object var_216_object; object var_217_object;
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_1287();
			func_204(var_194_object, "Neutral");
			var_0_object->SetMessage(522009); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523279, 24484, 24483); //@t
			var_0_object->AddReply(522010, 24503, 23180); //@t
			var_0_object->AddReply(523284, 24490, 24489); //@t
			var_0_object->AddReply(523286, 24492, 24491); //@t
			var_0_object->AddReply(523305, 24514, 24513); //@t
			var_0_object->AddReply(523278, 24486, 24482); //@t
			var_0_object->AddReply(523304, -1, 24512); //@t
		} else {
					func_204(var_194_object, "Fear");
					var_0_object->SetMessage(522096); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522097, -1, 23266); //@t
					var_0_object->AddReply(523318, 24533, 24532); //@t
		}
	}
	for(;;) {
		bool var_259_bool;
		func_1285(var_259_bool);
		if(var_259_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1170(var_2_object);
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


void func_726(void)
{
	@KillTimer(10);
}


void func_1239(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


void func_1244(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_612(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1253(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1127(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1244(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1201(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1260(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1253(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1014(void)
{
	bool var_288_bool;
	@CameraSwitchToNormal(true);
	bool var_290_bool;
	func_1285(var_290_bool);
	if(var_290_bool != 0) {
	} else {
		@HasAnimationTrack(var_288_bool, "head");
		if(var_288_bool == 0) goto Label_1031;
		@UnlookAsync("head");
	}
Label_1031:
	
}


void func_1277(int var_86_int)
{
	var_86_int = 515540;
}


void func_1279(int var_85_int)
{
	var_85_int = 502865;
}


