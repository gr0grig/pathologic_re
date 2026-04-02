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
			func_1531();
			if(var_15_cvector == 27235) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1729();
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525952, 27237, 27236); //@t
				var_0_object->AddReply(542446, 27239, 44835); //@t
				var_0_object->AddReply(542447, 27241, 44837); //@t
				return 0;
			}
			if(var_15_cvector == 27237) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525954, 27239, 27238); //@t
				var_0_object->AddReply(542448, 44839, 44838); //@t
				return 0;
			}
			if(var_15_cvector == 44839) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(542449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542450, 44841, 44840); //@t
				return 0;
			}
			if(var_15_cvector == 44841) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(542451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542452, 27239, 44842); //@t
				var_0_object->AddReply(542453, 27241, 44844); //@t
				return 0;
			}
			if(var_15_cvector == 27239) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525956, 27241, 27240); //@t
				var_0_object->AddReply(529036, 27241, 30476); //@t
				return 0;
			}
			if(var_15_cvector == 27241) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525958, 27243, 27242); //@t
				var_0_object->AddReply(542454, 44847, 44846); //@t
				return 0;
			}
			if(var_15_cvector == 44847) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(542455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542456, 27245, 44848); //@t
				return 0;
			}
			if(var_15_cvector == 27243) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525959); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525960, 27245, 27244); //@t
				return 0;
			}
			if(var_15_cvector == 27245) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525962, 27247, 27246); //@t
				var_0_object->AddReply(542457, -1, 44850); //@t
				return 0;
			}
			if(var_15_cvector == 27247) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525964, 27249, 27248); //@t
				var_0_object->AddReply(542458, 44852, 44851); //@t
				return 0;
			}
			if(var_15_cvector == 44852) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(542459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542460, -1, 44853); //@t
				var_0_object->AddReply(542461, -1, 44854); //@t
				return 0;
			}
			if(var_15_cvector == 27249) {
				func_142(var_16_bool, "Neutral");
				var_0_object->SetMessage(525965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525966, -1, 27250); //@t
				var_0_object->AddReply(542462, -1, 44855); //@t
				return 0;
			}
			var_3_string = true;
			bool var_180_bool;
			func_1703(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


task task_2
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_566(var_14_cvector, var_15_bool);
		int var_19_int; object var_20_object;
		var_15_bool = var_20_object;
		TaskCall(0);
		func_0(var_21_object, var_19_int, var_20_object);
		TaskReturn();
		object var_183_object;
		var_15_bool = var_183_object;
		TaskCall(4);
		func_773(var_183_object, false);
		TaskReturn();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_566(var_14_cvector, var_15_bool);
		object var_19_object;
		var_15_bool = var_19_object;
		func_1875();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1683(var_15_bool, "quest_k5_03", "abinos_unload");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_15_bool == 10) {
			bool var_18_bool;
			func_528(var_13_object, var_14_cvector, var_15_bool, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_object) { //@nz
					func_1520(var_4_bool);
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
		func_1579(var_17_object);
		var_16_object->RemoveStationaryActor(var_17_object);
		@GetVariable("pt_k5q03_albinos_path", var_1_object);
		if(var_1_object != -1) {
			bool var_23_bool;
			func_712(var_23_bool, "pt_k5q03_albinos_path", var_1_object, true);
		}
		TaskCall(2);
		func_454();
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
		func_765(var_15_bool);
		object var_16_object;
		var_15_bool = var_16_object;
		func_1875();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1683(var_15_bool, "quest_k5_03", "abinos_unload");
		@Hold();
	}

}


task task_4
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool;
		func_1683(var_15_bool, "quest_k5_03", "albinos_retreated");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 100) {
			func_1810();
		} else {
			int var_106_int;
			func_909(var_13_cvector, var_14_bool, var_106_int, var_106_int);
		}
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
		func_961(var_15_object);
		object var_17_object;
		var_15_object = var_17_object;
		func_1875();
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
	func_1315(var_19_object, var_20_int, var_21_float);
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
	func_1383(var_23_float, var_24_cvector, var_25_cvector);
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
	func_1159(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		bool var_20_bool; object var_21_object;
		var_15_object = var_21_object;
		func_1621(var_20_bool, var_21_object, -0.1);
	}
	object var_58_object;
	var_15_object = var_58_object;
	func_1836(var_58_object);
}


void func_0(object var_0_object, int var_19_int, object var_20_object)
{
	var_0_object = var_20_object;
	bool var_30_bool; object var_31_object;
	var_20_object = var_31_object;
	func_1402(var_30_bool, var_31_object, 70.0);
	if(!var_30_bool) { //@nz
		var_19_int = -2;
		return 8;
	}
	object var_26_object;
	@CreateDialog(var_26_object);
	int var_78_int;
	func_1697(var_78_int);
	var_26_object->SetNPCName(var_78_int);
	int var_79_int;
	func_1695(var_79_int);
	var_26_object->SetNPCDescription(var_79_int);
	string var_80_string;
	func_1699(var_80_string);
	var_26_object->SetPhoto(var_80_string);
	string var_81_string;
	func_1701(var_81_string);
	var_26_object->SetPhoto2(var_81_string);
	int var_82_int;
	func_1793(var_82_int);
	var_26_object->SetPlayerName(var_82_int);
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	if(var_27_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	@DoDialog(var_26_object);
	object var_91_object; object var_92_object;
	var_20_object = var_91_object;
	var_26_object = var_92_object;
	TaskCall(1);
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object);
	TaskReturn();
	bool var_29_bool;
	var_26_object->IsDialogEnd(var_29_bool);
	
	for(;;) {
		var_174_bool = !var_29_bool; //@nz
		if(var_174_bool == 0) goto Label_63;
		@sync();
		var_26_object->IsDialogEnd(var_29_bool);
	}
	
Label_63:
	object var_175_object;
	var_20_object = var_175_object;
	func_1471();
	@StopDialog(var_26_object);
	var_26_object->GetReturnValue(-1);
	int var_28_int = var_19_int;
}
EMIT "Stack[-4] = 0";


void func_1793(int var_82_int)
{
	int var_84_int;
	@GetVariable("branch", var_84_int);
	if(var_84_int == 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x710";
	}
	if(var_84_int == 1) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
}


void func_1538(string var_83_string)
{
	bool var_92_bool; int var_93_int; bool var_94_bool; int var_95_int; bool var_96_bool; float var_97_float; cvector var_98_cvector; cvector var_99_cvector;
	@IsExisting3DSound(var_92_bool, var_83_string);
	if(!var_92_bool) { //@nz
		var_93_int = 0;

		for(;;) {
			@IsExisting3DSound(var_94_bool, (var_83_string + (var_93_int + 1)));
			if(!var_94_bool) { //@nz
				break;
			Label_1558:
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
	if(var_105_bool == 0) goto Label_1558;
}


// @pe
void func_771(void)
{
}


// @pe
void func_773(object var_183_object, bool var_184_bool)
{
	if(var_184_bool != 0)
		@SetTimer(100, 1.0);
	object var_191_object;
	func_836(var_187_bool, var_191_object, var_184_bool, var_191_object);
}


void func_1159(bool var_16_bool, object var_17_object)
{
	bool var_19_bool;
	@IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
}


void func_1673(float var_27_float)
{
	object var_29_object;
	@CreateFloatVector(var_29_object);
	var_29_object->add(var_27_float);
	@SendWorldWndMessage(16, var_29_object);
}
EMIT "Stack[-1] = 0";


void func_1164(bool var_39_bool, object var_40_object, string var_41_string)
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


void func_909(object var_0_object, object var_1_object, object var_2_object, int var_106_int)
{
	cvector var_111_cvector; float var_112_float; cvector var_113_cvector; float var_114_float;
	if(var_106_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_111_cvector);
		@FindDirLength(var_112_float, var_111_cvector, 7000.0);
		cvector var_120_cvector;
		func_806(var_114_float, var_120_cvector, 1.7453294);
		var_120_cvector = var_113_cvector;
		var_114_float = var_113_cvector | var_113_cvector;
		bool var_150_bool = false;
		if(var_114_float >= 2500.0) {
			bool var_153_bool;
			var_157_bool = var_114_float >= ((var_112_float * var_112_float) * 2.25);
			if(var_157_bool != 1) {
				bool var_158_bool;
				func_977(true, var_158_bool);
				if(var_158_bool != 1)
					var_153_bool = false;
			}
			if(var_153_bool != 0)
				var_150_bool = true;
		}
		if(var_150_bool == 0) goto Label_960;
		@Stop();
		cvector var_178_cvector;
		func_1139(var_178_cvector);
		var_1_object = var_178_cvector + var_113_cvector;
	}
Label_960:
	
}


// @pe
void func_142(object var_2_object, string var_129_string)
{
	bool var_130_bool;
	func_1703(var_130_bool);
	if(!var_130_bool) //@nz
		return 0;
	if(var_129_string == var_2_object)
		return 0;
	string var_133_string; bool var_134_bool;
	var_129_string = var_133_string;
	if(var_129_string == "")
		var_134_bool = false;
	else
		var_134_bool = true;
	func_1505(var_133_string, var_134_bool);
	var_2_object = var_129_string;
	
}


void func_528(object var_0_object, object var_1_object, bool var_4_bool, bool var_18_bool)
{
	if(var_4_bool == null)
		var_18_bool = false;
	float var_22_float;
	func_1151(var_22_float, var_4_bool);
	float var_20_float = sqrt(var_22_float);
	if(var_2_object != 0)
		var_20_float -= var_1_object;
	var_18_bool = var_20_float < var_0_object;
}


void func_1810(void)
{
	object var_20_object; float var_21_float;
	@FindActor(var_20_object, "player");
	if(var_20_object != 0) {
		float var_24_float; object var_25_object;
		var_20_object = var_25_object;
		func_1151(var_24_float, var_25_object);
		if(var_24_float <= 640000.0) {
			float var_34_float; object var_35_object;
			func_1198(var_34_float, var_35_object, 0.05, 0);
			var_34_float = var_21_float;
			@ReportHit(var_35_object, 6, var_21_float, 0.05);
		}
	}
}
EMIT "Stack[-2] = 0";


void func_1683(bool var_15_bool, string var_16_string, string var_17_string)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(var_19_object == null)
		var_15_bool = false;
	@Trigger(var_19_object, var_17_string);
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";


void func_659(bool var_112_bool)
{
	var_112_bool = true;
}


void func_661(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1176(bool var_31_bool, object var_32_object, string var_33_string, float var_34_float, float var_35_float, float var_36_float)
{
	object var_40_object;
	var_32_object = var_40_object;
	string var_41_string;
	var_33_string = var_41_string;
	bool var_39_bool;
	func_1164(var_39_bool, var_40_object, var_41_string);
	if(!var_39_bool) //@nz
		var_31_bool = false;
	float var_38_float;
	var_32_object->GetProperty(var_33_string, var_38_float);
	float var_49_float; float var_51_float; float var_52_float;
	var_35_float = var_51_float;
	var_36_float = var_52_float;
	func_1602(var_49_float, (var_38_float + var_34_float), var_51_float, var_52_float);
	var_32_object->SetProperty(var_33_string, var_49_float);
	var_31_bool = true;
}


void func_1695(int var_79_int)
{
	var_79_int = 515595;
}


void func_1697(int var_78_int)
{
	var_78_int = 512611;
}


void func_1699(string var_80_string)
{
	var_80_string = "ui/NPC_Albinos.png";
}


void func_1315(object var_19_object, int var_20_int, float var_21_float)
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
		func_1144(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1585(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1377:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1271(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1377;
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
	func_1383(var_66_float, var_67_cvector, var_68_cvector);
}


void func_1701(string var_81_string)
{
	var_81_string = "ui/NPC_Albinos_b.png";
}


void func_806(object var_0_object, cvector var_120_cvector, float var_121_float)
{
	cvector var_128_cvector;
	@GetPosition(var_128_cvector);
	cvector var_129_cvector;
	var_0_object->GetPosition(var_129_cvector); //@t
	cvector var_130_cvector;
	@GetDirection(var_130_cvector);
	cvector var_134_cvector;
	cvector var_136_cvector;
	func_1585(var_136_cvector, (var_128_cvector - var_129_cvector));
	func_1585(var_134_cvector, (var_136_cvector + (var_130_cvector * 0.75)));
	cvector var_131_cvector;
	var_134_cvector = var_131_cvector;
	cvector var_132_cvector;
	float var_133_float;
	@FindLongestDir(var_132_cvector, var_133_float, var_131_cvector, var_121_float, 32, 7000.0);
	if((var_133_float - 100) < 0)
		var_133_float = 0;
	var_120_cvector = var_132_cvector * var_133_float;
}


void func_1703(bool var_73_bool)
{
	var_73_bool = false;
}


void func_1705(string var_93_string, int var_94_int)
{
	string var_96_string = "idle";
	if(var_94_int != 0)
		var_96_string += var_94_int;
	var_96_string = var_93_string;
}


void func_1579(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1836(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	TaskCall(5);
	func_993(var_59_object);
	TaskReturn();
}


void func_1198(float var_34_float, object var_35_object, float var_36_float, int var_37_int)
{
	int var_44_int; int var_46_int;
	object var_51_object;
	var_35_object = var_51_object;
	bool var_50_bool;
	func_1164(var_50_bool, var_51_object, "health");
	if(!var_50_bool) //@nz
		var_34_float = 0.0;
	bool var_60_bool; object var_61_object;
	func_1164(var_60_bool, var_61_object, "armor");
	if(!var_60_bool) //@nz
		var_44_int = 0;
	else
		var_61_object->GetProperty("armor", var_44_int);
	string var_65_string; int var_66_int;
	var_37_int = var_66_int;
	func_1125(var_65_string, var_66_int);
	string var_45_string = "armor_" + var_65_string;
	bool var_71_bool; object var_72_object; string var_73_string;
	var_35_object = var_72_object;
	func_1164(var_71_bool, var_72_object, var_73_string);
	if(!var_71_bool) //@nz
		var_46_int = 0;
	else
		var_35_object->GetProperty(var_73_string, var_46_int);

	float var_75_float;
	func_1595(var_75_float, ((var_44_int + var_46_int) / 100.0), (float)1);
	float var_47_float;
	var_75_float = var_47_float;
	float var_48_float;
	var_35_object->GetProperty("health", var_48_float);
	float var_49_float = var_36_float * (1 - var_47_float);
	float var_85_float;
	func_1602(var_85_float, (var_48_float - var_49_float), (float)0, (float)1);
	var_35_object->SetProperty("health", var_85_float);
	bool var_91_bool; object var_92_object;
	var_35_object = var_92_object;
	func_1159(var_91_bool, var_92_object);
	if(var_91_bool != 0) {
		float var_95_float = -var_49_float;
		func_1656(var_95_float);
	}
	var_49_float = var_34_float;
	
}


void func_1712(int var_87_int)
{
	int var_90_int; bool var_91_bool;
	var_90_int = 0;
	
	for(;;) {
		string var_93_string; int var_94_int;
		var_90_int = var_94_int;
		func_1705(var_93_string, var_94_int);
		@HasAnimation(var_91_bool, "all", var_93_string);
		if(!var_91_bool) //@nz
			break;
		var_90_int += 1;
	}
	var_90_int = var_87_int;
}


void func_1585(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


// @pe
void func_566(object var_2_object, string var_3_string)
{
	func_661();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1595(float var_75_float, float var_76_float, float var_77_float)
{
	if(var_76_float < var_77_float)
		var_76_float = var_75_float;
	else
		var_77_float = var_75_float;
	
}


void func_1471(void)
{
	bool var_177_bool;
	@CameraSwitchToNormal(true);
	bool var_179_bool;
	func_1703(var_179_bool);
	if(var_179_bool != 0) {
	} else {
		@HasAnimationTrack(var_177_bool, "head");
		if(var_177_bool == 0) goto Label_1488;
		@UnlookAsync("head");
	}
Label_1488:
	
}


// @pe
void func_1729(void)
{
	func_1739();
	bool var_123_bool;
	func_1683(var_123_bool, "quest_k5_03", "completed");
}


void func_961(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1602(float var_49_float, float var_50_float, float var_51_float, float var_52_float)
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


void func_580(void)
{
	int var_80_int; int var_81_int; bool var_82_bool; float var_83_float; bool var_84_bool;
	@WaitForAnimEnd();
	bool var_85_bool;
	func_1397(var_85_bool);
	if(!var_85_bool) //@nz
		return 14;
	int var_87_int;
	func_1712(var_87_int);
	int var_78_int;
	var_87_int = var_78_int;
	int var_79_int = 0;
	
	for(;;) {
		bool var_100_bool = false;
		if(var_79_int < 5) {
			bool var_103_bool;
			func_1397(var_103_bool);
			if(var_103_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			@irand(var_80_int, 3);
			if(var_80_int == 0) {
				if(var_78_int == 0) goto Label_627;
				@irand(var_81_int, var_78_int);
				string var_109_string; int var_110_int;
				var_81_int = var_110_int;
				func_1705(var_109_string, var_110_int);
				@PlayAnimation("all", var_109_string);
				@WaitForAnimEnd(var_82_bool);
				if(!var_82_bool) { //@nz
				} else {
			} else {
			if(var_80_int == 1) {
				@rand(var_83_float, 4);
				@Sleep((var_83_float + 1), var_84_bool);
				if(!var_84_bool) { //@nz
					goto Label_656;
				}
			} else if(var_79_int != 0) {
				goto Label_656;
			}
			}
					bool var_112_bool;
					func_659(var_112_bool);
					var_113_bool = !var_112_bool; //@nz
					if(var_113_bool == 0) goto Label_651;
			}
		}
	Label_656:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_651:
		@ResetAAS();
		var_79_int += 1;
	}
	
}


void func_836(object var_0_object, object var_1_object, object var_2_object, object var_191_object)
{
	float var_198_float; cvector var_200_cvector; float var_201_float;
	cvector var_202_cvector;
	func_806(var_201_float, var_202_cvector, 1.7453294);
	cvector var_197_cvector;
	var_202_cvector = var_197_cvector;
	if((var_197_cvector | var_197_cvector) < 2500.0) {
		cvector var_229_cvector;
		func_806(var_201_float, var_229_cvector, 2.6179938);
		var_229_cvector = var_197_cvector;
		var_198_float = var_197_cvector | var_197_cvector;
		if(var_198_float < 2500.0) {
			var_234_float = sqrt(var_198_float);
			@Trace("Can't retreat, distance: " + var_234_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_237_float = GetByIndex(var_197_cvector, 0);
	var_238_float = GetByIndex(var_197_cvector, 2);
	@Rotate(var_237_float, var_238_float);
	cvector var_239_cvector;
	func_1139(var_239_cvector);
	@SetTimer(120, 0.5);
	
Label_878:
	bool var_199_bool;
	@MovePoint((var_239_cvector + var_197_cvector), 1, var_199_bool);
	if(var_199_bool != 0) {
		if(var_191_object == null) {
			goto Label_908;
		EMIT "GOTO 0x38a";

		Label_908:
			for(;;) {
				return 10;
		}
			cvector var_247_cvector;
			func_806(var_201_float, var_247_cvector, 2.6179938);
			var_247_cvector = var_200_cvector;
			if((var_200_cvector | var_200_cvector) >= 2500.0) {
				cvector var_251_cvector;
				func_1139(var_251_cvector);
				var_1_object = var_251_cvector + var_200_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_878; //@nz

	}
}


void func_454(void)
{
	
	for(;;) {
		func_501(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, (float)300, (float)100);
		@Sleep(3);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1093(string var_82_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_83_string;
	var_82_string = var_83_string;
	func_1538(var_83_string);
	@PlayAnimation("all", var_82_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_82_string);
	@RemoveEnvelope();
}


void func_712(bool var_23_bool, string var_24_string, int var_25_int, bool var_26_bool)
{
	object var_34_object; cvector var_35_cvector; bool var_36_bool; bool var_37_bool; cvector var_38_cvector; cvector var_39_cvector; bool var_40_bool;
	@GetScene(var_34_object);
	
	for(;;) {
		var_34_object->GetLocator((var_24_string + (var_25_int + 1)), var_37_bool, var_38_cvector, var_39_cvector);
		if(!var_37_bool) { //@nz
			break;
		Label_750:
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
			func_771();
			var_25_int += 1;
		} else if(var_0_object != 0) {
		var_23_bool = false;
		return 14;
		}
	}
	@WaitForAnimEnd(var_36_bool);
	var_45_bool = !var_36_bool; //@nz
	if(var_45_bool == 0) goto Label_750;
	if(var_0_object == 0) goto Label_750;
	var_23_bool = false;
	
}
EMIT "Stack[-7] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_91_object, object var_92_object)
{
	var_0_object = var_92_object;
	var_3_string = false;
	if(1 != 0) {
		object var_98_object; object var_99_object;
		var_98_object = var_91_object;
		var_99_object = var_0_object;
		func_1729();
		func_142(var_92_object, "Neutral");
		var_0_object->SetMessage(525951); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525952, 27237, 27236); //@t
		var_0_object->AddReply(542446, 27239, 44835); //@t
		var_0_object->AddReply(542447, 27241, 44837); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_156_bool;
	func_1703(var_156_bool);
	if(var_156_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1489(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_1739(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 407, 2, 526025);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_1765(var_105_bool, var_106_object, 405);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1613(float var_169_float, cvector var_170_cvector, cvector var_171_cvector)
{
	var_176_float = sqrt((var_170_cvector | var_170_cvector) * (var_171_cvector | var_171_cvector));
	var_169_float = (var_170_cvector | var_171_cvector) / var_176_float;
}


void func_1489(string var_158_string)
{
	bool var_162_bool; float var_163_float; float var_164_float;
	@lshHasAnimation(var_162_bool, var_158_string);
	if(var_162_bool != 0) {
		@lshGetAnimTimes(var_158_string, var_163_float, var_164_float);
		@lshPlayAnimation(var_163_float, var_164_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_158_string);
	}
	
}


void func_977(object var_0_object, bool var_158_bool)
{
	cvector var_161_cvector;
	@GetDirection(var_161_cvector);
	cvector var_163_cvector;
	func_1144(var_163_cvector, var_0_object);
	cvector var_162_cvector;
	var_163_cvector = var_162_cvector;
	float var_169_float; cvector var_170_cvector; cvector var_171_cvector;
	var_161_cvector = var_170_cvector;
	var_162_cvector = var_171_cvector;
	func_1613(var_169_float, var_170_cvector, var_171_cvector);
	var_158_bool = var_169_float >= -0.34202012;
}


// @pe
void func_1621(bool var_20_bool, object var_21_object, float var_22_float)
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
		func_1673(var_27_float);
		bool var_31_bool; object var_32_object; float var_34_float;
		var_21_object = var_32_object;
		var_22_float = var_34_float;
		func_1176(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
		var_20_bool = true;
		return 0;

	}
	
	var_20_bool = false;
}


void func_1752(object var_114_object)
{
	object var_116_object;
	@GetDiaryRoot(var_116_object);
	if(!var_116_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_114_object = false;
	}
	var_116_object = var_114_object;
}
EMIT "Stack[-1] = 0";


void func_1505(string var_133_string, bool var_134_bool)
{
	bool var_140_bool; float var_141_float; float var_142_float;
	@lshHasAnimation(var_140_bool, var_133_string);
	if(var_140_bool != 0) {
		@lshGetAnimTimes(var_133_string, var_141_float, var_142_float);
		@lshPlayAnimation(var_141_float, var_142_float, var_134_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_133_string);
	}
	
}


// @pe
void func_993(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_1002(var_60_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1125(string var_65_string, int var_66_int)
{
	if(var_66_int == 2) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x471";
	}
	if(var_66_int == 1) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
}


void func_1765(bool var_105_bool, object var_106_object, int var_107_int)
{
	object var_114_object;
	func_1752(var_114_object);
	object var_111_object;
	var_114_object = var_111_object;
	object var_112_object;
	var_111_object->Find(var_107_int, var_112_object);
	if(!var_112_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_107_int);
		var_105_bool = false;
	}
	var_112_object->AddChild(var_106_object);
	@SendWorldWndMessage(7);
	int var_113_int;
	var_106_object->GetCategory(var_113_int);
	@SetDiarySection(var_113_int);
	var_105_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1383(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1271(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1002(object var_60_object)
{
	cvector var_71_cvector; cvector var_72_cvector; cvector var_73_cvector; cvector var_74_cvector; string var_75_string; object var_76_object; bool var_77_bool; bool var_78_bool; float var_79_float; cvector var_80_cvector;
	if(var_60_object == null) {
		func_1093("fdie");
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
		func_1538(var_135_string);
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


void func_1520(object var_32_object)
{
	float var_35_float;
	var_32_object->GetEyesHeight(var_35_float);
	cvector var_36_cvector = [0.0, 0.0, 0.0];
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	@LookAsync(var_32_object, "head", var_36_cvector);
}


void func_1139(cvector var_178_cvector)
{
	cvector var_180_cvector;
	@GetPosition(var_180_cvector);
	var_180_cvector = var_178_cvector;
}


// @pe
void func_501(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_62_float, float var_63_float)
{
	bool var_64_bool;
	func_1397(var_64_bool);
	if(!var_64_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_62_float;
	var_1_object = var_63_float;
	@SetTimer(10, 1.0);
	func_580();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1397(bool var_64_bool)
{
	bool var_66_bool;
	@IsLoaded(var_66_bool);
	var_66_bool = var_64_bool;
}


void func_1271(object var_32_object)
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


void func_1656(float var_95_float)
{
	object var_97_object;
	@CreateFloatVector(var_97_object);
	var_97_object->add(var_95_float);
	if(var_95_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_97_object);
}
EMIT "Stack[-1] = 0";


void func_1402(bool var_30_bool, object var_31_object, float var_32_float)
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
	func_1585(var_57_cvector, (var_46_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_47_cvector = ((var_45_cvector * var_32_float) + (var_57_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0)
		var_30_bool = false;
	@StopWorld();
	@CameraTransit((var_44_cvector + var_47_cvector), var_46_cvector, true);
	var_71_float = GetByIndex(var_47_cvector, 0);
	var_72_float = GetByIndex(var_47_cvector, 2);
	@Rotate(var_71_float, var_72_float);
	bool var_73_bool;
	func_1703(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		@HasAnimationTrack(var_50_bool, "head");
		if(var_50_bool == 0) goto Label_1465;
		@LookAsyncCamera("head");
	}
Label_1465:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_30_bool = true;
	
}


void func_1531(void)
{
	bool var_18_bool;
	func_1703(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_1144(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_765(object var_0_object)
{
	@Stop();
	@StopAnimation();
	var_0_object = true;
}


void func_1151(float var_24_float, object var_25_object)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	var_25_object->GetPosition(var_30_cvector);
	var_24_float = (var_30_cvector - var_29_cvector) | (var_30_cvector - var_29_cvector);
}


