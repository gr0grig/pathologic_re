// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, int var_13_int, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(1 != 0) {
			func_1384();
			if(var_15_cvector == 27235) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1575();
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525952, 27237, 27236); //@t
				return 0;
			}
			if(var_15_cvector == 27237) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525954, 27239, 27238); //@t
				return 0;
			}
			if(var_15_cvector == 27239) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525956, 27241, 27240); //@t
				var_0_object->AddReply(529036, 27241, 30476); //@t
				return 0;
			}
			if(var_15_cvector == 27241) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525958, 27243, 27242); //@t
				return 0;
			}
			if(var_15_cvector == 27243) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525959); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525960, 27245, 27244); //@t
				return 0;
			}
			if(var_15_cvector == 27245) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525962, 27247, 27246); //@t
				return 0;
			}
			if(var_15_cvector == 27247) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525964, 27249, 27248); //@t
				return 0;
			}
			if(var_15_cvector == 27249) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(525965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525966, -1, 27250); //@t
				return 0;
			}
			var_3_string = true;
			bool var_120_bool;
			func_1549(var_120_bool);
			if(var_120_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


task task_2
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_439(var_14_cvector, var_15_bool);
		int var_19_int; object var_20_object;
		var_15_bool = var_20_object;
		TaskCall(0);
		func_0(var_21_object, var_19_int, var_20_object);
		TaskReturn();
		object var_165_object;
		var_15_bool = var_165_object;
		TaskCall(4);
		func_646(var_165_object, false);
		TaskReturn();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_439(var_14_cvector, var_15_bool);
		object var_19_object;
		var_15_bool = var_19_object;
		func_1721();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1529(var_15_bool, "quest_k5_03", "abinos_unload");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_15_bool == 10) {
			bool var_18_bool;
			func_401(var_13_object, var_14_cvector, var_15_bool, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_object) { //@nz
					func_1373(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_16_object;
		@GetScene(var_16_object);
		object var_17_object;
		func_1432(var_17_object);
		var_16_object->RemoveStationaryActor(var_17_object);
		@GetVariable("pt_k5q03_albinos_path", var_1_object);
		if(var_1_object != -1) {
			bool var_23_bool;
			func_585(var_23_bool, "pt_k5q03_albinos_path", var_1_object, true);
		}
		TaskCall(2);
		func_327();
		TaskReturn();
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_638(var_15_bool);
		object var_16_object;
		var_15_bool = var_16_object;
		func_1721();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1529(var_15_bool, "quest_k5_03", "abinos_unload");
		@Hold();
	}

}


task task_4
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1529(var_15_bool, "quest_k5_03", "albinos_retreated");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 100) {
			func_1656();
		} else {
			int var_102_int;
			func_782(var_13_cvector, var_14_bool, var_102_int, var_102_int);
		}
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
		func_834(var_15_object);
		object var_17_object;
		var_15_object = var_17_object;
		func_1721();
	}

}


task task_5
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1188(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1256(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1032(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		bool var_20_bool; object var_21_object;
		var_15_object = var_21_object;
		func_1474(var_20_bool, var_21_object, -0.1);
	}
	object var_58_object;
	var_15_object = var_58_object;
	func_1682(var_58_object);
}


void func_0(object var_0_object, int var_19_int, object var_20_object)
{
	var_0_object = var_20_object;
	bool var_30_bool; object var_31_object;
	var_20_object = var_31_object;
	func_1275(var_30_bool, var_31_object, 70.0);
	if(!var_30_bool) { //@nz
		var_19_int = -2;
		return 8;
	}
	object var_26_object;
	@CreateDialog(var_26_object);
	int var_77_int;
	func_1543(var_77_int);
	var_26_object->SetNPCName(var_77_int);
	int var_78_int;
	func_1541(var_78_int);
	var_26_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_1545(var_79_string);
	var_26_object->SetPhoto(var_79_string);
	string var_80_string;
	func_1547(var_80_string);
	var_26_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_1639(var_81_int);
	var_26_object->SetPlayerName(var_81_int);
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	if(var_27_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	@DoDialog(var_26_object);
	object var_90_object; object var_91_object;
	var_20_object = var_90_object;
	var_26_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_29_bool;
	var_26_object->IsDialogEnd(var_29_bool);
	
	for(;;) {
		var_157_bool = !var_29_bool; //@nz
		if(var_157_bool == 0) goto Label_63;
		@sync();
		var_26_object->IsDialogEnd(var_29_bool);
	}
	
Label_63:
	object var_158_object;
	var_20_object = var_158_object;
	func_1343();
	@StopDialog(var_26_object);
	var_26_object->GetReturnValue(-1);
	int var_28_int = var_19_int;
}
EMIT "Stack[-4] = 0";


void func_1024(float var_24_float, object var_25_object)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	var_25_object->GetPosition(var_30_cvector);
	var_24_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


// @pe
void func_132(object var_2_object, string var_128_string)
{
	bool var_129_bool;
	func_1549(var_129_bool);
	if(!var_129_bool) //@nz
		return 0;
	if(var_128_string == var_2_object)
		return 0;
	string var_132_string; bool var_133_bool;
	var_128_string = var_132_string;
	if(var_128_string == "")
		var_133_bool = false;
	else
		var_133_bool = true;
	func_1367(var_132_string, var_133_bool);
	var_2_object = var_128_string;
	
}


void func_1541(int var_78_int)
{
	var_78_int = 515595;
}


// @pe
void func_646(object var_165_object, bool var_166_bool)
{
	if(var_166_bool != 0)
		@SetTimer(100, 1.0);
	object var_173_object;
	func_709(var_169_bool, var_173_object, var_166_bool, var_173_object);
}


void func_1543(int var_77_int)
{
	var_77_int = 512611;
}


// @pe
void func_644(void)
{
}


void func_1545(string var_79_string)
{
	var_79_string = "ui/NPC_Black.png";
}


void func_1032(bool var_16_bool, object var_17_object)
{
	bool var_19_bool;
	@IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
}


void func_1547(string var_80_string)
{
	var_80_string = "ui/NPC_Black_b.png";
}


void func_1549(bool var_72_bool)
{
	var_72_bool = false;
}


void func_782(object var_0_object, object var_1_object, object var_2_object, int var_102_int)
{
	cvector var_107_cvector; float var_108_float; cvector var_109_cvector; float var_110_float;
	if(var_102_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_107_cvector);
		@FindDirLength(var_108_float, var_107_cvector, 7000.0);
		cvector var_116_cvector;
		func_679(var_110_float, var_116_cvector, 1.7453294);
		var_116_cvector = var_109_cvector;
		var_110_float = var_109_cvector | var_109_cvector;
		bool var_146_bool = false;
		if(var_110_float >= 2500.0) {
			bool var_149_bool;
			var_153_bool = var_110_float >= ((var_108_float * var_108_float) * 2.25);
			if(var_153_bool != 1) {
				bool var_154_bool;
				func_850(true, var_154_bool);
				if(var_154_bool != 1)
					var_149_bool = false;
			}
			if(var_149_bool != 0)
				var_146_bool = true;
		}
		if(var_146_bool == 0) goto Label_833;
		@Stop();
		cvector var_174_cvector;
		func_1012(var_174_cvector);
		var_1_object = var_174_cvector + var_109_cvector;
	}
Label_833:
	
}


void func_1551(string var_93_string, int var_94_int)
{
	string var_96_string = "idle";
	if(var_94_int != 0)
		var_96_string += var_94_int;
	var_96_string = var_93_string;
}


void func_1037(bool var_39_bool, object var_40_object, string var_41_string)
{
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", 2);
	if(!var_46_bool) { //@nz
		var_39_bool = false;
		return 2;
	}
	bool var_43_bool;
	var_40_object->HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
}


void func_401(object var_0_object, object var_1_object, bool var_4_bool, bool var_18_bool)
{
	if(var_4_bool == null)
		var_18_bool = false;
	float var_22_float;
	func_1024(var_22_float, var_4_bool);
	float var_20_float = sqrt(var_22_float);
	if(var_2_object != 0)
		var_20_float -= var_1_object;
	var_18_bool = var_20_float < var_0_object;
}


// @pe
void func_1682(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	TaskCall(5);
	func_866(var_59_object);
	TaskReturn();
}


void func_532(bool var_112_bool)
{
	var_112_bool = true;
}


void func_534(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1558(int var_87_int)
{
	int var_90_int; bool var_91_bool;
	var_90_int = 0;
	
	for(;;) {
		string var_93_string; int var_94_int;
		var_90_int = var_94_int;
		func_1551(var_93_string, var_94_int);
		@HasAnimation(var_91_bool, "all", var_93_string);
		if(!var_91_bool) //@nz
			break;
		var_90_int += 1;
	}
	var_90_int = var_87_int;
}


void func_1432(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1049(bool var_31_bool, object var_32_object, string var_33_string, float var_34_float, float var_35_float, float var_36_float)
{
	object var_40_object;
	var_32_object = var_40_object;
	string var_41_string;
	var_33_string = var_41_string;
	bool var_39_bool;
	func_1037(var_39_bool, var_40_object, var_41_string);
	if(!var_39_bool) //@nz
		var_31_bool = false;
	float var_38_float;
	var_32_object->GetProperty(var_33_string, var_38_float);
	float var_49_float; float var_51_float; float var_52_float;
	var_35_float = var_51_float;
	var_36_float = var_52_float;
	func_1455(var_49_float, (var_38_float + var_34_float), var_51_float, var_52_float);
	var_32_object->SetProperty(var_33_string, var_49_float);
	var_31_bool = true;
}


void func_1438(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1188(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1017(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1438(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1250:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1144(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1250;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1256(var_66_float, var_67_cvector, var_68_cvector);
}


// @pe
void func_1575(void)
{
	func_1585();
	bool var_122_bool;
	func_1529(var_122_bool, "quest_k5_03", "completed");
}


void func_679(object var_0_object, cvector var_116_cvector, float var_117_float)
{
	cvector var_124_cvector;
	@GetPosition(var_124_cvector);
	cvector var_125_cvector;
	var_0_object->GetPosition(var_125_cvector); //@t
	cvector var_126_cvector;
	@GetDirection(var_126_cvector);
	cvector var_130_cvector;
	cvector var_132_cvector;
	func_1438(var_132_cvector, (var_124_cvector - var_125_cvector));
	func_1438(var_130_cvector, (var_132_cvector + (var_126_cvector * 0.75)));
	cvector var_127_cvector;
	var_130_cvector = var_127_cvector;
	cvector var_128_cvector;
	float var_129_float;
	@FindLongestDir(var_128_cvector, var_129_float, var_127_cvector, var_117_float, 32, 7000.0);
	if((var_129_float - 100) < 0)
		var_129_float = 0;
	var_116_cvector = var_128_cvector * var_129_float;
}


// @pe
void func_1448(float var_75_float, float var_76_float, float var_77_float)
{
	if(var_76_float < var_77_float)
		var_76_float = var_75_float;
	else
		var_77_float = var_75_float;
	
}


// @pe
void func_1455(float var_49_float, float var_50_float, float var_51_float, float var_52_float)
{
	if(var_50_float < var_51_float) {
		var_51_float = var_49_float;
		return 0;
	}
	if(var_50_float > var_52_float) {
		var_52_float = var_49_float;
		return 0;
	}
	var_50_float = var_49_float;
}


void func_1071(float var_34_float, object var_35_object, float var_36_float, int var_37_int)
{
	int var_44_int; int var_46_int;
	object var_51_object;
	var_35_object = var_51_object;
	bool var_50_bool;
	func_1037(var_50_bool, var_51_object, "health");
	if(!var_50_bool) //@nz
		var_34_float = 0.0;
	bool var_60_bool; object var_61_object;
	func_1037(var_60_bool, var_61_object, "armor");
	if(!var_60_bool) //@nz
		var_44_int = 0;
	else
		var_61_object->GetProperty("armor", var_44_int);
	string var_65_string; int var_66_int;
	var_37_int = var_66_int;
	func_998(var_65_string, var_66_int);
	string var_45_string = "armor_" + var_65_string;
	bool var_71_bool; object var_72_object; string var_73_string;
	var_35_object = var_72_object;
	func_1037(var_71_bool, var_72_object, var_73_string);
	if(!var_71_bool) //@nz
		var_46_int = 0;
	else
		var_35_object->GetProperty(var_73_string, var_46_int);

	float var_75_float;
	func_1448(var_75_float, ((var_44_int + var_46_int) / 100.0), (float)1);
	float var_47_float;
	var_75_float = var_47_float;
	float var_48_float;
	var_35_object->GetProperty("health", var_48_float);
	float var_49_float = var_36_float * (1 - var_47_float);
	float var_85_float;
	func_1455(var_85_float, (var_48_float - var_49_float), (float)0, (float)1);
	var_35_object->SetProperty("health", var_85_float);
	bool var_91_bool; object var_92_object;
	var_35_object = var_92_object;
	func_1032(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		float var_95_float = -var_49_float;
		func_1509(var_95_float);
	}
	var_49_float = var_34_float;
	
}


void func_1585(void)
{
	object var_100_object;
	@CreateDiaryEntry(var_100_object, 407, 2, 526025);
	bool var_104_bool; object var_105_object;
	var_100_object = var_105_object;
	func_1611(var_104_bool, var_105_object, 405);
}
EMIT "Stack[-1] = 0";


// @pe
void func_439(object var_2_object, string var_3_string)
{
	func_534();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1466(float var_165_float, cvector var_166_cvector, cvector var_167_cvector)
{
	var_172_float = sqrt((var_166_cvector | var_166_cvector) * (var_167_cvector | var_167_cvector));
	var_165_float = (var_166_cvector | var_167_cvector) / var_172_float;
}


void func_1598(object var_113_object)
{
	object var_115_object;
	@GetDiaryRoot(var_115_object);
	if(!var_115_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_113_object = false;
	}
	var_115_object = var_113_object;
}
EMIT "Stack[-1] = 0";


void func_1343(void)
{
	bool var_160_bool;
	@CameraSwitchToNormal();
	bool var_161_bool;
	func_1549(var_161_bool);
	if(var_161_bool != 0) {
	} else {
		@HasAnimationTrack(var_160_bool, "head");
		if(var_160_bool == 0) goto Label_1359;
		@UnlookAsync("head");
	}
Label_1359:
	
}


void func_834(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1474(bool var_20_bool, object var_21_object, float var_22_float)
{
	if(!var_21_object) { //@nz
		var_20_bool = false;
		return 0;
	}
	if(var_22_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_22_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_27_float;
		var_22_float = var_27_float;
		func_1519(var_27_float);
		bool var_31_bool; object var_32_object; float var_34_float;
		var_21_object = var_32_object;
		var_22_float = var_34_float;
		func_1049(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
		var_20_bool = true;
		return 0;

	}
	
	var_20_bool = false;
}


void func_453(void)
{
	int var_80_int; int var_81_int; bool var_82_bool; float var_83_float; bool var_84_bool;
	@WaitForAnimEnd();
	bool var_85_bool;
	func_1270(var_85_bool);
	if(!var_85_bool) //@nz
		return 14;
	int var_87_int;
	func_1558(var_87_int);
	int var_78_int;
	var_87_int = var_78_int;
	int var_79_int = 0;
	
	for(;;) {
		bool var_100_bool = false;
		if(var_79_int < 5) {
			bool var_103_bool;
			func_1270(var_103_bool);
			if(var_103_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			@irand(var_80_int, 3);
			if(var_80_int == 0) {
				if(var_78_int == 0) goto Label_500;
				@irand(var_81_int, var_78_int);
				string var_109_string; int var_110_int;
				var_81_int = var_110_int;
				func_1551(var_109_string, var_110_int);
				@PlayAnimation("all", var_109_string);
				@WaitForAnimEnd(var_82_bool);
				if(!var_82_bool) { //@nz
				} else {
			} else {
			if(var_80_int == 1) {
				@rand(var_83_float, 4);
				@Sleep((var_83_float + 1), var_84_bool);
				if(!var_84_bool) { //@nz
					goto Label_529;
				}
			} else if(var_79_int != 0) {
				goto Label_529;
			}
			}
					bool var_112_bool;
					func_532(var_112_bool);
					var_113_bool = !var_112_bool; //@nz
					if(var_113_bool == 0) goto Label_524;
			}
		}
	Label_529:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_524:
		@ResetAAS();
		var_79_int += 1;
	}
	
}


void func_709(object var_0_object, object var_1_object, object var_2_object, object var_173_object)
{
	float var_180_float; cvector var_182_cvector; float var_183_float;
	cvector var_184_cvector;
	func_679(var_183_float, var_184_cvector, 1.7453294);
	cvector var_179_cvector;
	var_184_cvector = var_179_cvector;
	if((var_179_cvector | var_179_cvector) < 2500.0) {
		cvector var_211_cvector;
		func_679(var_183_float, var_211_cvector, 2.6179938);
		var_211_cvector = var_179_cvector;
		var_180_float = var_179_cvector | var_179_cvector;
		if(var_180_float < 2500.0) {
			var_216_float = sqrt(var_180_float);
			@Trace("Can't retreat, distance: " + var_216_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_219_float = GetByIndex(var_179_cvector, 0);
	var_220_float = GetByIndex(var_179_cvector, 2);
	@Rotate(var_219_float, var_220_float);
	cvector var_221_cvector;
	func_1012(var_221_cvector);
	@SetTimer(120, 0.5);
	
Label_751:
	bool var_181_bool;
	@MovePoint((var_221_cvector + var_179_cvector), 1, var_181_bool);
	if(var_181_bool != 0) {
		if(var_173_object == null) {
			goto Label_781;
		EMIT "GOTO 0x30b";

		Label_781:
			for(;;) {
				return 10;
		}
			cvector var_229_cvector;
			func_679(var_183_float, var_229_cvector, 2.6179938);
			var_229_cvector = var_182_cvector;
			if((var_182_cvector | var_182_cvector) >= 2500.0) {
				cvector var_233_cvector;
				func_1012(var_233_cvector);
				var_1_object = var_233_cvector + var_182_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_751; //@nz

	}
}


void func_327(void)
{
	
	for(;;) {
		func_374(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, (float)300, (float)100);
		@Sleep(3);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_966(string var_82_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_83_string;
	var_82_string = var_83_string;
	func_1391(var_83_string);
	@PlayAnimation("all", var_82_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_82_string);
	@RemoveEnvelope();
}


void func_585(bool var_23_bool, string var_24_string, int var_25_int, bool var_26_bool)
{
	object var_34_object; cvector var_35_cvector; bool var_36_bool; bool var_37_bool; cvector var_38_cvector; cvector var_39_cvector; bool var_40_bool;
	@GetScene(var_34_object);
	
	for(;;) {
		var_34_object->GetLocator((var_24_string + (var_25_int + 1)), var_37_bool, var_38_cvector, var_39_cvector);
		if(!var_37_bool) { //@nz
			break;
		Label_623:
			for(;;) {
				var_47_float = GetByIndex(var_35_cvector, 0);
				var_48_float = GetByIndex(var_35_cvector, 2);
				@Rotate(var_47_float, var_48_float, var_40_bool);
				if(var_40_bool != 0)
					break;
				if(var_0_object != 0) {
					var_23_bool = false;
					return 14;
				}
			}
			var_23_bool = true;
			return 14;
		}
		var_39_cvector = var_35_cvector;
		@MovePoint(var_38_cvector, var_26_bool, var_36_bool);
		if(var_36_bool != 0) {
			int var_52_int; cvector var_53_cvector; cvector var_54_cvector;
			var_25_int = var_52_int;
			var_38_cvector = var_53_cvector;
			var_39_cvector = var_54_cvector;
			func_644();
			var_25_int += 1;
		} else if(var_0_object != 0) {
		var_23_bool = false;
		return 14;
		}
	}
	@WaitForAnimEnd(var_36_bool);
	var_45_bool = !var_36_bool; //@nz
	if(var_45_bool == 0) goto Label_623;
	if(var_0_object == 0) goto Label_623;
	var_23_bool = false;
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_3_string = false;
	if(1 != 0) {
		object var_97_object; object var_98_object;
		var_97_object = var_90_object;
		var_98_object = var_0_object;
		func_1575();
		func_132(var_91_object, "Neutral");
		var_0_object->SetMessage(525951); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525952, 27237, 27236); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_144_bool;
	func_1549(var_144_bool);
	if(var_144_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1360(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_1611(bool var_104_bool, object var_105_object, int var_106_int)
{
	object var_113_object;
	func_1598(var_113_object);
	object var_110_object;
	var_113_object = var_110_object;
	object var_111_object;
	var_110_object->Find(var_106_int, var_111_object);
	if(!var_111_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_106_int);
		var_104_bool = false;
	}
	var_111_object->AddChild(var_105_object);
	@SendWorldWndMessage(7);
	int var_112_int;
	var_105_object->GetCategory(var_112_int);
	@SetDiarySection(var_112_int);
	var_104_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1360(string var_146_string)
{
	float var_149_float; float var_150_float;
	@lshGetAnimTimes(var_146_string, var_149_float, var_150_float);
	@lshPlayAnimation(var_149_float, var_150_float, false);
}


void func_850(object var_0_object, bool var_154_bool)
{
	cvector var_157_cvector;
	@GetDirection(var_157_cvector);
	cvector var_159_cvector;
	func_1017(var_159_cvector, var_0_object);
	cvector var_158_cvector;
	var_159_cvector = var_158_cvector;
	float var_165_float; cvector var_166_cvector; cvector var_167_cvector;
	var_157_cvector = var_166_cvector;
	var_158_cvector = var_167_cvector;
	func_1466(var_165_float, var_166_cvector, var_167_cvector);
	var_154_bool = var_165_float >= -0.34202012;
}


void func_1367(string var_132_string, bool var_133_bool)
{
	float var_138_float; float var_139_float;
	@lshGetAnimTimes(var_132_string, var_138_float, var_139_float);
	@lshPlayAnimation(var_138_float, var_139_float, var_133_bool);
}


void func_1373(object var_32_object)
{
	float var_35_float;
	var_32_object->GetEyesHeight(var_35_float);
	cvector var_36_cvector = [0.0, 0.0, 0.0];
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	@LookAsync(var_32_object, "head", var_36_cvector);
}


// @pe
void func_866(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_875(var_60_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1509(float var_95_float)
{
	object var_97_object;
	@CreateFloatVector(var_97_object);
	var_97_object->add(var_95_float);
	@SendWorldWndMessage(15, var_97_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_998(string var_65_string, int var_66_int)
{
	if(var_66_int == 2) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x3f2";
	}
	if(var_66_int == 1) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
}


void func_1639(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x676";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


void func_1384(void)
{
	bool var_18_bool;
	func_1549(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_1256(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1144(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_875(object var_60_object)
{
	cvector var_71_cvector; cvector var_72_cvector; cvector var_73_cvector; cvector var_74_cvector; string var_75_string; object var_76_object; bool var_77_bool; bool var_78_bool; float var_79_float; cvector var_80_cvector;
	if(var_60_object == null) {
		func_966("fdie");
	} else {
		var_60_object->GetPosition(var_71_cvector);
		@GetPosition(var_72_cvector);
		@GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_114_float = GetByIndex(var_74_cvector, 0);
		var_115_float = GetByIndex(var_73_cvector, 0);
		var_117_float = GetByIndex(var_74_cvector, 2);
		var_118_float = GetByIndex(var_73_cvector, 2);
		if(((var_114_float * var_115_float) + (var_117_float * var_118_float)) >= 0)
			var_75_string = "fdie";
		else
			var_75_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_60_object = var_76_object;
		var_125_bool = IsFuncExist(var_60_object, "GetScriptProperty", 2);
		if(var_125_bool != 0) {
			var_60_object->HasScriptProperty(var_77_bool, "Owner");
			if(var_77_bool != 0) {
				var_60_object->GetScriptProperty(var_76_object, "Owner");
				if(var_76_object == null)
					var_60_object = var_76_object;
			}
		}
		var_132_bool = IsFuncExist(var_76_object, "@GetEyesHeight", 1);
		if(var_132_bool != 0) {
			var_76_object->GetEyesHeight(var_79_float);
			var_80_cvector = [0.0, 0.0, 0.0];
			var_133_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_133_float;
			SetByIndex(var_80_cvector, 1) = var_133_float;
			@LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = true;
		} else {
			var_78_bool = false;

		}
		string var_135_string;
		var_75_string = var_135_string;
		func_1391(var_135_string);
		@PlayAnimation("all", var_75_string);
		@WaitForAnimEnd();
		if(var_78_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_75_string);
		@RemoveEnvelope();
		var_76_object = null;
	}
	
}


void func_1391(string var_83_string)
{
	bool var_92_bool; int var_93_int; bool var_94_bool; int var_95_int; bool var_96_bool; float var_97_float; cvector var_98_cvector; cvector var_99_cvector;
	@IsExisting3DSound(var_92_bool, var_83_string);
	if(!var_92_bool) { //@nz
		var_93_int = 0;

		for(;;) {
			@IsExisting3DSound(var_94_bool, (var_83_string + (var_93_int + 1)));
			if(!var_94_bool) { //@nz
				break;
			Label_1411:
				@irand(var_95_int, var_93_int);
				var_83_string += (var_95_int + 1);
	}
			@Is3DSoundLoaded(var_96_bool, var_83_string);
			if(var_96_bool != 0) {
				@GetEyesHeight(var_97_float);
				@GetDirection(var_98_cvector);
				var_99_cvector = var_98_cvector * 50;
				var_110_float = GetByIndex(var_99_cvector, 1);
				SetByIndex(var_99_cvector, 1) = (var_110_float + var_97_float);
				@PlayGlobalSound(var_83_string, var_99_cvector);
			}
		}
		var_93_int += 1;
	}
	var_105_bool = !var_93_int; //@nz
	if(var_105_bool == 0) goto Label_1411;
}


void func_1519(float var_27_float)
{
	object var_29_object;
	@CreateFloatVector(var_29_object);
	var_29_object->add(var_27_float);
	@SendWorldWndMessage(16, var_29_object);
}
EMIT "Stack[-1] = 0";


void func_1012(cvector var_174_cvector)
{
	cvector var_176_cvector;
	@GetPosition(var_176_cvector);
	var_176_cvector = var_174_cvector;
}


// @pe
void func_374(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_62_float, float var_63_float)
{
	bool var_64_bool;
	func_1270(var_64_bool);
	if(!var_64_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_62_float;
	var_1_object = var_63_float;
	@SetTimer(10, 1.0);
	func_453();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1270(bool var_64_bool)
{
	bool var_66_bool;
	@IsLoaded(var_66_bool);
	var_66_bool = var_64_bool;
}


void func_1656(void)
{
	object var_20_object; float var_21_float;
	@FindActor(var_20_object, "player");
	if(var_20_object != 0) {
		float var_24_float; object var_25_object;
		var_20_object = var_25_object;
		func_1024(var_24_float, var_25_object);
		if(var_24_float <= 640000.0) {
			float var_34_float; object var_35_object;
			func_1071(var_34_float, var_35_object, 0.05, 0);
			var_34_float = var_21_float;
			@ReportHit(var_35_object, 6, var_21_float, 0.05);
		}
	}
}
EMIT "Stack[-2] = 0";


void func_1529(bool var_15_bool, string var_16_string, string var_17_string)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(var_19_object == null)
		var_15_bool = false;
	@Trigger(var_19_object, var_17_string);
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1275(bool var_30_bool, object var_31_object, float var_32_float)
{
	cvector var_43_cvector; bool var_50_bool;
	var_31_object->GetPosition(var_43_cvector);
	float var_42_float;
	var_31_object->GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_42_float);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	@GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_42_float);
	cvector var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_55_float = sqrt(var_45_cvector | var_45_cvector);
	var_45_cvector /= var_55_float;
	cvector var_46_cvector = -var_45_cvector;
	cvector var_57_cvector;
	func_1438(var_57_cvector, (var_46_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_47_cvector = ((var_45_cvector * var_32_float) + (var_57_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0)
		var_30_bool = false;
	@StopWorld();
	@CameraTransit((var_44_cvector + var_47_cvector), var_46_cvector);
	var_70_float = GetByIndex(var_47_cvector, 0);
	var_71_float = GetByIndex(var_47_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_1549(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_50_bool, "head");
		if(var_50_bool == 0) goto Label_1337;
		@LookAsyncCamera("head");
	}
Label_1337:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_30_bool = true;
	
}


void func_1144(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_1017(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_638(object var_0_object)
{
	@Stop();
	@StopAnimation();
	var_0_object = true;
}


