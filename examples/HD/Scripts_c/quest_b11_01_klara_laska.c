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
			func_1413();
			if(var_8_bool == 24461) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1490();
			}
			if(var_8_bool == 24478) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1490();
			}
			if(var_8_bool == 24467) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_1490();
			}
			if(var_8_bool == 24468) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1490();
			}
			if(var_8_bool == 23272) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_1496();
			}
			if(var_8_bool == 36215) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_1502();
			}
			if(var_7_cvector == 23268) {
				bool var_43_bool = true;
				bool var_44_bool = false;
				bool var_45_bool;
				func_1508(var_1_object);
				if(var_45_bool != 0) {
					bool var_53_bool;
					func_1532(var_1_object);
					if(var_53_bool != 0)
						var_44_bool = true;
				}
				if(var_44_bool != 1) {
					bool var_59_bool = false;
					bool var_60_bool;
					func_1520(var_1_object);
					if(var_60_bool != 0) {
						bool var_66_bool;
						func_1532(var_1_object);
						if(var_66_bool != 0)
							var_59_bool = true;
					}
					if(var_59_bool != 1)
						var_43_bool = false;
				}
				if(var_43_bool != 0) {
					object var_68_object; object var_69_object;
					var_68_object = var_1_object;
					var_69_object = var_0_object;
					func_1484();
					func_258(var_8_bool, "Saveyouall");
					var_0_object->SetMessage(522101); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522102, 24452, 23269); //@t
					var_0_object->AddReply(522103, 24448, 23270); //@t
					return 0;
				}
				func_258(var_8_bool, "Smile");
				var_0_object->SetMessage(522104); //@t
				var_0_object->ClearReplies(); //@t
				bool var_98_bool = false;
				bool var_99_bool = false;
				bool var_100_bool;
				func_1508(var_1_object);
				if(var_100_bool != 0) {
					bool var_102_bool;
					func_1520(var_1_object);
					if(var_102_bool != 0)
						var_99_bool = true;
				}
				if(var_99_bool != 0) {
					bool var_104_bool;
					func_1544(var_1_object);
					if(!var_104_bool) //@nz
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_object->AddReply(523263, 24464, 24463); //@t
				bool var_114_bool = false;
				bool var_115_bool;
				func_1544(var_1_object);
				if(var_115_bool != 0) {
					bool var_117_bool;
					func_1556(var_1_object);
					if(var_117_bool != 0)
						var_114_bool = true;
				}
				if(var_114_bool != 0)
					var_0_object->AddReply(522105, 24443, 23272); //@t
				bool var_126_bool = false;
				bool var_127_bool;
				func_1568(var_1_object);
				if(var_127_bool != 0) {
					bool var_133_bool;
					func_1580(var_1_object);
					if(var_133_bool != 0)
						var_126_bool = true;
				}
				if(var_126_bool != 0)
					var_0_object->AddReply(534577, 36216, 36215); //@t
				var_0_object->AddReply(523242, -1, 24442); //@t
				return 0;
			}
			if(var_7_cvector == 36216) {
				func_258(var_8_bool, "Neutral");
				var_0_object->SetMessage(534578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534579, 36219, 36217); //@t
				var_0_object->AddReply(534580, -1, 36218); //@t
				return 0;
			}
			if(var_7_cvector == 36219) {
				func_258(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(534581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534582, -1, 36220); //@t
				var_0_object->AddReply(534583, -1, 36221); //@t
				return 0;
			}
			if(var_7_cvector == 24443) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523244, -1, 24444); //@t
				var_0_object->AddReply(523245, 24446, 24445); //@t
				return 0;
			}
			if(var_7_cvector == 24446) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523247, -1, 24447); //@t
				return 0;
			}
			if(var_7_cvector == 24464) {
				func_258(var_8_bool, "Neutral");
				var_0_object->SetMessage(523264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523265, 24466, 24465); //@t
				return 0;
			}
			if(var_7_cvector == 24466) {
				func_258(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(523266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523267, -1, 24467); //@t
				var_0_object->AddReply(523268, -1, 24468); //@t
				return 0;
			}
			if(var_7_cvector == 24448) {
				func_258(var_8_bool, "Smile");
				var_0_object->SetMessage(523248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523250, 24452, 24450); //@t
				var_0_object->AddReply(523249, 24452, 24449); //@t
				return 0;
			}
			if(var_7_cvector == 24452) {
				func_258(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(523252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523253, 24451, 24453); //@t
				return 0;
			}
			if(var_7_cvector == 24451) {
				func_258(var_8_bool, "Neutral");
				var_0_object->SetMessage(523251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523254, 24456, 24454); //@t
				var_0_object->AddReply(523255, 24469, 24455); //@t
				return 0;
			}
			if(var_7_cvector == 24469) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523270, 24456, 24470); //@t
				return 0;
			}
			if(var_7_cvector == 24456) {
				func_258(var_8_bool, "Neutral");
				var_0_object->SetMessage(523256); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523257, 24458, 24457); //@t
				var_0_object->AddReply(523271, 24473, 24472); //@t
				return 0;
			}
			if(var_7_cvector == 24473) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523273, 24475, 24474); //@t
				var_0_object->AddReply(523275, 24475, 24476); //@t
				return 0;
			}
			if(var_7_cvector == 24475) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523276, -1, 24478); //@t
				var_0_object->AddReply(523277, -1, 24479); //@t
				return 0;
			}
			if(var_7_cvector == 24458) {
				func_258(var_8_bool, "Neutral");
				var_0_object->SetMessage(523258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523259, 24460, 24459); //@t
				return 0;
			}
			if(var_7_cvector == 24460) {
				func_258(var_8_bool, "Sly");
				var_0_object->SetMessage(523260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523261, -1, 24461); //@t
				var_0_object->AddReply(523262, -1, 24462); //@t
				return 0;
			}
			var_3_string = true;
			bool var_280_bool;
			func_1482(var_280_bool);
			if(var_280_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x119";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_858(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1420(var_13_object);
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
			func_1420(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_965();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_980();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_923();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1137(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_892(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_872(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1420(var_53_object);
					var_53_object = var_52_object;
					func_1287(var_51_bool, var_52_object);
				}
			} else {
				func_887(var_7_int);
				func_914();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_914();
		else
			func_1367("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1105();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1128(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_809(var_25_object);
			func_1367("Neutral");
			func_923();
			func_914();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1142(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1476(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1474(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1478(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1480(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1592(var_89_int);
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
	func_1420(var_100_object);
	var_100_object = var_99_object;
	func_1229(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_320_bool = !var_36_bool; //@nz
		if(var_320_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_321_object;
	var_27_object = var_321_object;
	func_1211();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_258(object var_2_object, string var_229_string)
{
	bool var_230_bool;
	func_1482(var_230_bool);
	if(!var_230_bool) //@nz
		return 0;
	if(var_229_string == var_2_object)
		return 0;
	string var_233_string; bool var_234_bool;
	var_229_string = var_233_string;
	if(var_229_string == "")
		var_234_bool = false;
	else
		var_234_bool = true;
	func_1383(var_233_string, var_234_bool);
	var_2_object = var_229_string;
	
}


void func_1413(void)
{
	bool var_10_bool;
	func_1482(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1287(bool var_109_bool, object var_110_object)
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
		func_1398(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


// @pe
void func_1544(bool var_279_bool)
{
	int var_281_int;
	func_1436(var_281_int, "b11q01KlaraWillHelp");
	if(var_281_int != 0) {
		var_279_bool = true;
		return 0;
	}
	var_279_bool = false;
}


void func_1034(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1137(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1457(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_1137(var_41_bool);
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
			func_1450(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1089;
			goto Label_1100;
			}
				Label_1089:
					bool var_45_bool;
					func_1103(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1095;
			}
		}
	Label_1100:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1095:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1420(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_914(void)
{
	float var_332_float;
	@rand(var_332_float, 8, 16);
	@SetTimer(10, var_332_float);
}


void func_1426(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1556(bool var_292_bool)
{
	int var_294_int;
	func_1436(var_294_int, "oob11Klara2");
	if(var_294_int == 0) {
		var_292_bool = true;
		return 0;
	}
	var_292_bool = false;
}


void func_923(void)
{
	@KillTimer(10);
}


void func_1436(int var_204_int, string var_205_string)
{
	int var_207_int;
	@GetVariable(var_205_string, var_207_int);
	var_207_int = var_204_int;
}


// @pe
void func_1532(bool var_210_bool)
{
	int var_212_int;
	func_1436(var_212_int, "oob11Klara1");
	if(var_212_int == 0) {
		var_210_bool = true;
		return 0;
	}
	var_210_bool = false;
}


// @pe
void func_1568(bool var_302_bool)
{
	int var_304_int;
	func_1436(var_304_int, "b9KlaraLetter");
	if(var_304_int != 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


void func_1441(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_809(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1450(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


// @pe
void func_1580(bool var_308_bool)
{
	int var_310_int;
	func_1436(var_310_int, "oob11Klara3");
	if(var_310_int == 0) {
		var_308_bool = true;
		return 0;
	}
	var_308_bool = false;
}


void func_1324(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1441(var_153_int);
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
		func_1398(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1457(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1450(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1592(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x647";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_1211(void)
{
	bool var_323_bool;
	@CameraSwitchToNormal(true);
	bool var_325_bool;
	func_1482(var_325_bool);
	if(var_325_bool != 0) {
	} else {
		@HasAnimationTrack(var_323_bool, "head");
		if(var_323_bool == 0) goto Label_1228;
		@UnlookAsync("head");
	}
Label_1228:
	
}


void func_1474(int var_86_int)
{
	var_86_int = 515540;
}


void func_1476(int var_85_int)
{
	var_85_int = 502865;
}


// @pe
void func_965(void)
{
	func_1105();
	func_923();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1478(string var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
}


void func_1480(string var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
}


void func_1482(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1484(void)
{
	@SetVariable("oob11Klara1", 1);
}


void func_1229(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1287(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1324(var_140_bool, var_141_object);
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
		func_1324(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1287(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1285;
	
Label_1285:
	var_98_bool = true;
	
}


void func_1103(bool var_45_bool)
{
	var_45_bool = true;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool = true;
		bool var_201_bool = false;
		bool var_202_bool;
		func_1508(var_1_object);
		if(var_202_bool != 0) {
			bool var_210_bool;
			func_1532(var_1_object);
			if(var_210_bool != 0)
				var_201_bool = true;
		}
		if(var_201_bool != 1) {
			bool var_216_bool = false;
			bool var_217_bool;
			func_1520(var_1_object);
			if(var_217_bool != 0) {
				bool var_223_bool;
				func_1532(var_1_object);
				if(var_223_bool != 0)
					var_216_bool = true;
			}
			if(var_216_bool != 1)
				var_200_bool = false;
		}
		if(var_200_bool != 0) {
			object var_225_object; object var_226_object;
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_1484();
			func_258(var_194_object, "Saveyouall");
			var_0_object->SetMessage(522101); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522102, 24452, 23269); //@t
			var_0_object->AddReply(522103, 24448, 23270); //@t
		} else {
					func_258(var_194_object, "Smile");
					var_0_object->SetMessage(522104); //@t
					var_0_object->ClearReplies(); //@t
					bool var_273_bool = false;
					bool var_274_bool = false;
					bool var_275_bool;
					func_1508(var_1_object);
					if(var_275_bool != 0) {
						bool var_277_bool;
						func_1520(var_1_object);
						if(var_277_bool != 0)
							var_274_bool = true;
					}
					if(var_274_bool != 0) {
						bool var_279_bool;
						func_1544(var_1_object);
						if(!var_279_bool) //@nz
							var_273_bool = true;
					}
					if(var_273_bool != 0)
						var_0_object->AddReply(523263, 24464, 24463); //@t
					bool var_289_bool = false;
					bool var_290_bool;
					func_1544(var_1_object);
					if(var_290_bool != 0) {
						bool var_292_bool;
						func_1556(var_1_object);
						if(var_292_bool != 0)
							var_289_bool = true;
					}
					if(var_289_bool != 0)
						var_0_object->AddReply(522105, 24443, 23272); //@t
					bool var_301_bool = false;
					bool var_302_bool;
					func_1568(var_1_object);
					if(var_302_bool != 0) {
						bool var_308_bool;
						func_1580(var_1_object);
						if(var_308_bool != 0)
							var_301_bool = true;
					}
					if(var_301_bool != 0)
						var_0_object->AddReply(534577, 36216, 36215); //@t
					var_0_object->AddReply(523242, -1, 24442); //@t
		}
	}
	for(;;) {
		bool var_253_bool;
		func_1482(var_253_bool);
		if(var_253_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1367(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_257;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_257:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1490(void)
{
	@SetVariable("b11q01KlaraWillHelp", 1);
}


void func_1105(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_980(void)
{
	@StopGroup0();
	func_923();
	func_1367("Neutral");
	func_914();
}


void func_1110(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1367(string var_255_string)
{
	bool var_259_bool; float var_260_float; float var_261_float;
	@lshHasAnimation(var_259_bool, var_255_string);
	if(var_259_bool != 0) {
		@lshGetAnimTimes(var_255_string, var_260_float, var_261_float);
		@lshPlayAnimation(var_260_float, var_261_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_255_string);
	}
	
}


// @pe
void func_1496(void)
{
	@SetVariable("oob11Klara2", 1);
}


void func_858(object var_0_object)
{
	bool var_7_bool;
	func_1137(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1034();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1502(void)
{
	@SetVariable("oob11Klara3", 1);
}


void func_1118(bool var_15_bool, cvector var_16_cvector)
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


// @pe
void func_1508(bool var_202_bool)
{
	int var_204_int;
	func_1436(var_204_int, "b11q01");
	if(var_204_int == 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


void func_1383(string var_233_string, bool var_234_bool)
{
	bool var_240_bool; float var_241_float; float var_242_float;
	@lshHasAnimation(var_240_bool, var_233_string);
	if(var_240_bool != 0) {
		@lshGetAnimTimes(var_233_string, var_241_float, var_242_float);
		@lshPlayAnimation(var_241_float, var_242_float, var_234_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_233_string);
	}
	
}


void func_1128(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1118(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_872(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1128(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1520(bool var_217_bool)
{
	int var_219_int;
	func_1436(var_219_int, "b11q01");
	if(var_219_int == 1)
		var_217_bool = true;
	var_217_bool = false;
}


void func_1137(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1142(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1426(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1482(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1205;
		@LookAsyncCamera("head");
	}
Label_1205:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_887(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1398(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1482(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_892(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1110(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


