task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, int var_17_int, int var_18_int, bool var_19_bool, bool var_20_bool, object var_21_object)
	{
		if(1 != 0) {
			func_1332();
			if(var_20_bool == 35470) {
				func_132(var_21_object, "Neutral");
				var_0_object->SetMessage(533911); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533912, -1, 35471); //@t
				var_0_object->AddReply(533913, -1, 35472); //@t
				return 0;
			}
			var_3_string = true;
			bool var_45_bool;
			func_2082(var_45_bool);
			if(var_45_bool != 0)
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
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, int var_17_int, int var_18_int, bool var_19_bool, bool var_20_bool, object var_21_object)
	{
		if(1 != 0) {
			func_1332();
			if(var_21_object == 15324) {
				object var_26_object = var_1_object;
				func_1474(var_0_object);
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_1480();
				object var_61_object; object var_62_object;
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_1450();
			}
			if(var_21_object == 15327) {
				object var_67_object = var_1_object;
				func_1468(var_0_object);
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_1480();
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_1450();
			}
			if(var_21_object == 33530) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_1401();
				object var_102_object = var_1_object;
				func_1444(var_0_object);
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1450();
			}
			if(var_21_object == 33533) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_1401();
				object var_114_object = var_1_object;
				func_1438(var_0_object);
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_1450();
			}
			if(var_20_bool == 15312) {
				bool var_124_bool;
				func_1561(var_124_bool, var_1_object);
				if(var_124_bool != 0) {
					object var_138_object; object var_139_object;
					var_138_object = var_1_object;
					var_139_object = var_0_object;
					func_1456();
					func_413(var_21_object, "Neutral");
					var_0_object->SetMessage(514075); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514076, 15314, 15313); //@t
					var_0_object->AddReply(534587, -1, 36225); //@t
					return 0;
				}
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(514079); //@t
				var_0_object->ClearReplies(); //@t
				bool var_169_bool;
				func_1539(var_169_bool, var_1_object);
				if(var_169_bool != 0)
					var_0_object->AddReply(514080, 15318, 15317); //@t
				bool var_181_bool;
				func_1550(var_181_bool, var_1_object);
				if(var_181_bool != 0)
					var_0_object->AddReply(514110, 15326, 15325); //@t
				bool var_189_bool = false;
				bool var_190_bool;
				func_1517(var_190_bool, var_1_object);
				if(var_190_bool != 0) {
					bool var_195_bool;
					func_1571(var_195_bool, var_1_object);
					if(!var_195_bool) //@nz
						var_189_bool = true;
				}
				if(var_189_bool != 0)
					var_0_object->AddReply(532117, 33529, 33528); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_1528(var_211_bool, var_1_object);
				if(var_211_bool != 0) {
					bool var_216_bool;
					func_1571(var_216_bool, var_1_object);
					if(!var_216_bool) //@nz
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(532120, 33532, 33531); //@t
				var_0_object->AddReply(514082, -1, 15319); //@t
				return 0;
			}
			if(var_20_bool == 33532) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(532121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532122, -1, 33533); //@t
				return 0;
			}
			if(var_20_bool == 33529) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(532118); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532119, -1, 33530); //@t
				return 0;
			}
			if(var_20_bool == 15326) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(514111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514112, -1, 15327); //@t
				var_0_object->AddReply(529951, -1, 31335); //@t
				return 0;
			}
			if(var_20_bool == 15318) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(514081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514109, -1, 15324); //@t
				return 0;
			}
			if(var_20_bool == 15314) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(514077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514078, -1, 15315); //@t
				var_0_object->AddReply(534588, 36227, 36226); //@t
				return 0;
			}
			if(var_20_bool == 36227) {
				func_413(var_21_object, "Neutral");
				var_0_object->SetMessage(534589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534590, -1, 36228); //@t
				return 0;
			}
			var_3_string = true;
			bool var_273_bool;
			func_2082(var_273_bool);
			if(var_273_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b4";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, int var_17_int, int var_18_int, bool var_19_bool, bool var_20_bool, object var_21_object)
	{
		if(1 != 0) {
			func_1332();
			if(var_20_bool == 22691) {
				func_884(var_21_object, "Neutral");
				var_0_object->SetMessage(521530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521531, 36229, 22692); //@t
				var_0_object->AddReply(534594, 36233, 36232); //@t
				return 0;
			}
			if(var_20_bool == 36233) {
				func_884(var_21_object, "Neutral");
				var_0_object->SetMessage(534595); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534596, -1, 36234); //@t
				var_0_object->AddReply(534597, -1, 36235); //@t
				return 0;
			}
			if(var_20_bool == 36229) {
				func_884(var_21_object, "Neutral");
				var_0_object->SetMessage(534591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534592, -1, 36230); //@t
				var_0_object->AddReply(534593, -1, 36231); //@t
				return 0;
			}
			var_3_string = true;
			bool var_65_bool;
			func_2082(var_65_bool);
			if(var_65_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x38b";
	
	}

}


maintask task_6
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, bool var_17_bool, bool var_18_bool, object var_19_object)
	{
	
		for(;;) {
			@Sleep(3);
			func_1064(var_15_int, var_16_int, var_17_bool, var_18_bool, var_19_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, bool var_17_bool, bool var_18_bool, object var_19_object, object var_20_object)
	{
		string var_22_string;
		@GetProperty("npc", var_22_string);
		@Trace(var_22_string);
		int var_24_int; string var_25_string;
		var_22_string = var_25_string;
		func_1624(var_24_int, var_25_string);
		@Trace(var_24_int);
		bool var_192_bool; int var_193_int;
		int var_194_int; string var_195_string;
		var_22_string = var_195_string;
		func_1624(var_194_int, var_195_string);
		var_194_int = var_193_int;
		func_2064(var_192_bool, var_193_int);
		if(var_192_bool != 0) {
			int var_203_int; object var_204_object;
			var_20_object = var_204_object;
			TaskCall(4);
			func_752(var_205_object, var_203_int, var_204_object);
			TaskReturn();
		} else {
				bool var_321_bool; int var_322_int;
				int var_323_int; string var_324_string;
				var_22_string = var_324_string;
				func_1624(var_323_int, var_324_string);
				var_323_int = var_322_int;
				func_2044(var_321_bool, var_322_int);
				if(var_321_bool == 0) goto Label_1048;
				int var_332_int; object var_333_object;
				var_20_object = var_333_object;
				TaskCall(0);
				func_0(var_334_object, var_332_int, var_333_object);
				TaskReturn();
		}
	Label_1063:
		for(;;) {
			return 2;

		}
	
	Label_1048:
		bool var_385_bool; int var_386_int;
		int var_387_int; string var_388_string;
		var_22_string = var_388_string;
		func_1624(var_387_int, var_388_string);
		var_387_int = var_386_int;
		func_2054(var_385_bool, var_386_int);
		if(var_385_bool == 0) goto Label_1063;
		int var_396_int; object var_397_object;
		var_20_object = var_397_object;
		TaskCall(2);
		func_196(var_398_object, var_396_int, var_397_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, bool var_17_bool, bool var_18_bool, object var_19_object, int var_20_int)
	{
		if(var_20_int == 10) {
			bool var_23_bool;
			func_1091(var_18_bool, var_19_object, var_20_int, var_23_bool);
			if(var_23_bool != 0) {
				if(!var_2_object) { //@nz
					func_1321(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_332_int, object var_333_object)
{
	var_0_object = var_333_object;
	bool var_343_bool; object var_344_object;
	var_333_object = var_344_object;
	func_1223(var_343_bool, var_344_object, 130.0);
	if(!var_343_bool) { //@nz
		var_332_int = -2;
		return 8;
	}
	object var_339_object;
	@CreateDialog(var_339_object);
	int var_347_int;
	func_2076(var_347_int);
	var_339_object->SetNPCName(var_347_int);
	int var_348_int;
	func_2074(var_348_int);
	var_339_object->SetNPCDescription(var_348_int);
	string var_349_string;
	func_2078(var_349_string);
	var_339_object->SetPhoto(var_349_string);
	string var_350_string;
	func_2080(var_350_string);
	var_339_object->SetPhoto2(var_350_string);
	int var_351_int;
	func_1601(var_351_int);
	var_339_object->SetPlayerName(var_351_int);
	bool var_340_bool;
	@IsOverrideActive(var_340_bool);
	if(var_340_bool != 0) {
		var_332_int = -2;
		return 8;
	}
	@DoDialog(var_339_object);
	object var_353_object; object var_354_object;
	var_333_object = var_353_object;
	var_339_object = var_354_object;
	TaskCall(1);
	func_74(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	bool var_342_bool;
	var_339_object->IsDialogEnd(var_342_bool);
	
	for(;;) {
		var_383_bool = !var_342_bool; //@nz
		if(var_383_bool == 0) goto Label_63;
		@sync();
		var_339_object->IsDialogEnd(var_342_bool);
	}
	
Label_63:
	object var_384_object;
	var_333_object = var_384_object;
	func_1291();
	@StopDialog(var_339_object);
	var_339_object->GetReturnValue(-1);
	int var_341_int = var_332_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1539(bool var_473_bool, object var_474_object)
{
	object var_476_object;
	var_474_object = var_476_object;
	bool var_475_bool;
	func_1349(var_475_bool, var_476_object, "burah_serum");
	if(var_475_bool != 0) {
		var_473_bool = true;
		return 0;
	}
	var_473_bool = false;
}


// @pe
void func_132(object var_2_object, string var_360_string)
{
	bool var_361_bool;
	func_2082(var_361_bool);
	if(!var_361_bool) //@nz
		return 0;
	if(var_360_string == var_2_object)
		return 0;
	string var_364_string; bool var_365_bool;
	var_360_string = var_364_string;
	if(var_360_string == "")
		var_365_bool = false;
	else
		var_365_bool = true;
	func_1315(var_364_string, var_365_bool);
	var_2_object = var_360_string;
	
}


void func_2054(bool var_385_bool, int var_386_int)
{
	int var_390_int;
	@GetVariable(("vol_" + var_386_int), var_390_int);
	var_385_bool = (var_390_int & 4) != 0;
}


void func_1291(void)
{
	bool var_316_bool;
	@CameraSwitchToNormal();
	bool var_317_bool;
	func_2082(var_317_bool);
	if(var_317_bool != 0) {
	} else {
		@HasAnimationTrack(var_316_bool, "head");
		if(var_316_bool == 0) goto Label_1307;
		@UnlookAsync("head");
	}
Label_1307:
	
}


// @pe
void func_270(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_417_object, object var_418_object)
{
	var_0_object = var_418_object;
	var_1_object = var_417_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_424_bool;
		func_1561(var_424_bool, var_1_object);
		if(var_424_bool != 0) {
			object var_438_object; object var_439_object;
			var_438_object = var_1_object;
			var_439_object = var_0_object;
			func_1456();
			func_413(var_418_object, "Neutral");
			var_0_object->SetMessage(514075); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514076, 15314, 15313); //@t
			var_0_object->AddReply(534587, -1, 36225); //@t
		} else {
					func_413(var_418_object, "Neutral");
					var_0_object->SetMessage(514079); //@t
					var_0_object->ClearReplies(); //@t
					bool var_473_bool;
					func_1539(var_473_bool, var_1_object);
					if(var_473_bool != 0)
						var_0_object->AddReply(514080, 15318, 15317); //@t
					bool var_485_bool;
					func_1550(var_485_bool, var_1_object);
					if(var_485_bool != 0)
						var_0_object->AddReply(514110, 15326, 15325); //@t
					bool var_493_bool = false;
					bool var_494_bool;
					func_1517(var_494_bool, var_1_object);
					if(var_494_bool != 0) {
						bool var_499_bool;
						func_1571(var_499_bool, var_1_object);
						if(!var_499_bool) //@nz
							var_493_bool = true;
					}
					if(var_493_bool != 0)
						var_0_object->AddReply(532117, 33529, 33528); //@t
					bool var_514_bool = false;
					bool var_515_bool;
					func_1528(var_515_bool, var_1_object);
					if(var_515_bool != 0) {
						bool var_520_bool;
						func_1571(var_520_bool, var_1_object);
						if(!var_520_bool) //@nz
							var_514_bool = true;
					}
					if(var_514_bool != 0)
						var_0_object->AddReply(532120, 33532, 33531); //@t
					var_0_object->AddReply(514082, -1, 15319); //@t
		}
	}
	for(;;) {
		bool var_463_bool;
		func_2082(var_463_bool);
		if(var_463_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1308(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_412;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_412:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x112";


// @pe
void func_1550(bool var_485_bool, object var_486_object)
{
	object var_488_object;
	var_486_object = var_488_object;
	bool var_487_bool;
	func_1349(var_487_bool, var_488_object, "powder");
	if(var_487_bool != 0) {
		var_485_bool = true;
		return 0;
	}
	var_485_bool = false;
}


void func_2064(bool var_192_bool, int var_193_int)
{
	int var_197_int;
	@GetVariable(("vol_" + var_193_int), var_197_int);
	var_192_bool = (var_197_int & 16) != 0;
}


// @pe
void func_1561(bool var_424_bool, object var_425_object)
{
	object var_427_object;
	var_425_object = var_427_object;
	func_1581(var_427_object);
	bool var_426_bool;
	if(var_426_bool != 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_2074(int var_262_int)
{
	var_262_int = 515571;
}


void func_2076(int var_261_int)
{
	var_261_int = 504029;
}


void func_1308(string var_302_string)
{
	float var_305_float; float var_306_float;
	@lshGetAnimTimes(var_302_string, var_305_float, var_306_float);
	@lshPlayAnimation(var_305_float, var_306_float, false);
}


void func_1438(object var_114_object)
{
	int var_117_int;
	var_114_object->RemoveItemByType(var_117_int, "feromicin", 1);
}


// @pe
void func_413(object var_2_object, string var_448_string)
{
	bool var_449_bool;
	func_2082(var_449_bool);
	if(!var_449_bool) //@nz
		return 0;
	if(var_448_string == var_2_object)
		return 0;
	string var_452_string; bool var_453_bool;
	var_448_string = var_452_string;
	if(var_448_string == "")
		var_453_bool = false;
	else
		var_453_bool = true;
	func_1315(var_452_string, var_453_bool);
	var_2_object = var_448_string;
	
}


void func_2080(string var_264_string)
{
	var_264_string = "ui/NPC_bmask_b.png";
}


void func_2078(string var_263_string)
{
	var_263_string = "ui/NPC_bmask.png";
}


void func_2082(bool var_256_bool)
{
	var_256_bool = false;
}


void func_1315(string var_285_string, bool var_286_bool)
{
	float var_291_float; float var_292_float;
	@lshGetAnimTimes(var_285_string, var_291_float, var_292_float);
	@lshPlayAnimation(var_291_float, var_292_float, var_286_bool);
}


// @pe
void func_1571(bool var_499_bool, object var_500_object)
{
	object var_502_object;
	var_500_object = var_502_object;
	func_1594(var_502_object);
	bool var_501_bool;
	if(var_501_bool != 0) {
		var_499_bool = true;
		return 0;
	}
	var_499_bool = false;
}


void func_1444(object var_102_object)
{
	int var_105_int;
	var_102_object->RemoveItemByType(var_105_int, "monomicin", 1);
}


// @pe
void func_1064(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_1218(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_1129();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1321(object var_37_object)
{
	float var_40_float;
	var_37_object->GetEyesHeight(var_40_float);
	cvector var_41_cvector = [0.0, 0.0, 0.0];
	var_42_float = GetByIndex(var_41_cvector, 1);
	var_40_float = var_42_float;
	SetByIndex(var_41_cvector, 1) = var_42_float;
	@LookAsync(var_37_object, "head", var_41_cvector);
}


// @pe
void func_1450(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1581(bool var_426_bool)
{
	string var_430_string;
	@GetProperty("npc", var_430_string);
	int var_431_int;
	@GetVariable((("oo" + var_430_string) + "1"), var_431_int);
	var_426_bool = var_431_int == 0;
}


void func_1456(void)
{
	string var_441_string;
	@GetProperty("npc", var_441_string);
	@SetVariable((("oo" + var_441_string) + "1"), 1);
}


void func_1332(void)
{
	bool var_23_bool;
	func_2082(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


void func_1208(bool var_71_bool)
{
	var_71_bool = true;
}


// @pe
void func_826(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_274_object, object var_275_object)
{
	var_0_object = var_275_object;
	var_1_object = var_274_object;
	var_3_string = false;
	if(1 != 0) {
		func_884(var_275_object, "Neutral");
		var_0_object->SetMessage(521530); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(521531, 36229, 22692); //@t
		var_0_object->AddReply(534594, 36233, 36232); //@t
		goto Label_854;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x33e";
	}
Label_854:
	bool var_300_bool;
	func_2082(var_300_bool);
	if(var_300_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1308(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_883;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_883:
		return 0;

	}
	
}


void func_1210(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_1468(object var_67_object)
{
	int var_70_int;
	var_67_object->RemoveItemByType(var_70_int, "powder", 1);
}


void func_1339(cvector var_241_cvector, cvector var_242_cvector)
{
	float var_245_float = sqrt(var_242_cvector | var_242_cvector);
	if(var_245_float < 0.000001)
		var_241_cvector = [0.0, 0.0, 0.0];
	var_241_cvector = var_242_cvector / var_245_float;
}


// @pe
void func_1594(bool var_501_bool)
{
	int var_503_int;
	func_1368(var_503_int);
	var_501_bool = var_503_int == 12;
}


void func_1601(int var_265_int)
{
	int var_267_int;
	@GetVariable("branch", var_267_int);
	if(var_267_int == 0) {
		var_265_int = 1;
		return 2;
	EMIT "GOTO 0x650";
	}
	if(var_267_int == 1) {
		var_265_int = 2;
		return 2;
	}
	var_265_int = 3;
}


void func_1474(object var_26_object)
{
	int var_29_int;
	var_26_object->RemoveItemByType(var_29_int, "burah_serum", 1);
}


void func_1218(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_196(object var_0_object, int var_396_int, object var_397_object)
{
	var_0_object = var_397_object;
	bool var_407_bool; object var_408_object;
	var_397_object = var_408_object;
	func_1223(var_407_bool, var_408_object, 130.0);
	if(!var_407_bool) { //@nz
		var_396_int = -2;
		return 8;
	}
	object var_403_object;
	@CreateDialog(var_403_object);
	int var_411_int;
	func_2076(var_411_int);
	var_403_object->SetNPCName(var_411_int);
	int var_412_int;
	func_2074(var_412_int);
	var_403_object->SetNPCDescription(var_412_int);
	string var_413_string;
	func_2078(var_413_string);
	var_403_object->SetPhoto(var_413_string);
	string var_414_string;
	func_2080(var_414_string);
	var_403_object->SetPhoto2(var_414_string);
	int var_415_int;
	func_1601(var_415_int);
	var_403_object->SetPlayerName(var_415_int);
	bool var_404_bool;
	@IsOverrideActive(var_404_bool);
	if(var_404_bool != 0) {
		var_396_int = -2;
		return 8;
	}
	@DoDialog(var_403_object);
	object var_417_object; object var_418_object;
	var_397_object = var_417_object;
	var_403_object = var_418_object;
	TaskCall(3);
	func_270(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object);
	TaskReturn();
	bool var_406_bool;
	var_403_object->IsDialogEnd(var_406_bool);
	
	for(;;) {
		var_529_bool = !var_406_bool; //@nz
		if(var_529_bool == 0) goto Label_259;
		@sync();
		var_403_object->IsDialogEnd(var_406_bool);
	}
	
Label_259:
	object var_530_object;
	var_397_object = var_530_object;
	func_1291();
	@StopDialog(var_403_object);
	var_403_object->GetReturnValue(-1);
	int var_405_int = var_396_int;
}
EMIT "Stack[-4] = 0";


void func_1091(object var_0_object, object var_1_object, bool var_4_bool, bool var_23_bool)
{
	if(var_4_bool == null)
		var_23_bool = false;
	float var_27_float;
	func_1210(var_27_float, var_4_bool);
	float var_25_float = sqrt(var_27_float);
	if(var_2_object != 0)
		var_25_float -= var_1_object;
	var_23_bool = var_25_float < var_0_object;
}


void func_1349(bool var_475_bool, object var_476_object, string var_477_string)
{
	int var_480_int;
	@GetInvItemByName(var_480_int, var_477_string);
	bool var_481_bool;
	var_476_object->HasItem(var_480_int, var_481_bool);
	var_481_bool = var_475_bool;
}


void func_1223(bool var_214_bool, object var_215_object, float var_216_float)
{
	cvector var_227_cvector; bool var_234_bool;
	var_215_object->GetPosition(var_227_cvector);
	float var_226_float;
	var_215_object->GetEyesHeight(var_226_float);
	var_235_float = GetByIndex(var_227_cvector, 1);
	SetByIndex(var_227_cvector, 1) = (var_235_float + var_226_float);
	cvector var_228_cvector;
	@GetPosition(var_228_cvector);
	@GetEyesHeight(var_226_float);
	var_236_float = GetByIndex(var_228_cvector, 1);
	SetByIndex(var_228_cvector, 1) = (var_236_float + var_226_float);
	cvector var_229_cvector = var_227_cvector - var_228_cvector;
	var_237_float = GetByIndex(var_229_cvector, 1);
	SetByIndex(var_229_cvector, 1) = (float)0;
	var_239_float = sqrt(var_229_cvector | var_229_cvector);
	var_229_cvector /= var_239_float;
	cvector var_230_cvector = -var_229_cvector;
	cvector var_241_cvector;
	func_1339(var_241_cvector, (var_230_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_231_cvector = ((var_229_cvector * var_216_float) + (var_241_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_233_bool;
	@IsOverrideActive(var_233_bool);
	if(var_233_bool != 0)
		var_214_bool = false;
	@StopWorld();
	@CameraTransit((var_228_cvector + var_231_cvector), var_230_cvector);
	var_254_float = GetByIndex(var_231_cvector, 0);
	var_255_float = GetByIndex(var_231_cvector, 2);
	@Rotate(var_254_float, var_255_float);
	bool var_256_bool;
	func_2082(var_256_bool);
	if(var_256_bool != 0) {
	} else {
		@HasAnimationTrack(var_234_bool, "head");
		if(var_234_bool == 0) goto Label_1285;
		@LookAsyncCamera("head");
	}
Label_1285:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_214_bool = true;
	
}


void func_1480(void)
{
	string var_35_string;
	@GetProperty("npc", var_35_string);
	int var_37_int;
	func_1618(var_37_int);
	if(var_37_int == 0) {
		bool var_43_bool; string var_46_string;
		var_35_string = var_46_string;
		func_1356(var_43_bool, "volonteers_danko", "rescue", var_46_string);
	} else {
			int var_50_int;
			func_1618(var_50_int);
			if(!(var_50_int == 1)) goto Label_1510;
			bool var_53_bool; string var_56_string;
			var_35_string = var_56_string;
			func_1356(var_53_bool, "volonteers_burah", "rescue", var_56_string);
	}
	
Label_1510:
	bool var_57_bool; string var_60_string;
	var_35_string = var_60_string;
	func_1356(var_57_bool, "volonteers_klara", "rescue", var_60_string);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_353_object, object var_354_object)
{
	var_0_object = var_354_object;
	var_1_object = var_353_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_354_object, "Neutral");
		var_0_object->SetMessage(533911); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(533912, -1, 35471); //@t
		var_0_object->AddReply(533913, -1, 35472); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_375_bool;
	func_2082(var_375_bool);
	if(var_375_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1308(var_2_object);
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


void func_1356(bool var_43_bool, string var_44_string, string var_45_string, string var_46_string)
{
	object var_48_object;
	@FindActor(var_48_object, var_44_string);
	if(var_48_object == null)
		var_43_bool = false;
	@Trigger(var_48_object, var_45_string, var_46_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1618(int var_37_int)
{
	int var_39_int;
	@GetVariable("branch", var_39_int);
	var_39_int = var_37_int;
}


// @pe
void func_1624(int var_24_int, string var_25_string)
{
	@_strlwr(var_25_string);
	if(var_25_string == "alexandr") {
		var_24_int = 1;
		return 0;
	}
	if(var_25_string == "andrei") {
		var_24_int = 2;
		return 0;
	}
	if(var_25_string == "anna") {
		var_24_int = 3;
		return 0;
	}
	if(var_25_string == "bigvlad") {
		var_24_int = 4;
		return 0;
	}
	if(var_25_string == "eva") {
		var_24_int = 5;
		return 0;
	}
	if(var_25_string == "georg") {
		var_24_int = 6;
		return 0;
	}
	if(var_25_string == "grif") {
		var_24_int = 7;
		return 0;
	}
	if(var_25_string == "han") {
		var_24_int = 8;
		return 0;
	}
	if(var_25_string == "julia") {
		var_24_int = 9;
		return 0;
	}
	if(var_25_string == "kapella") {
		var_24_int = 10;
		return 0;
	}
	if(var_25_string == "katerina") {
		var_24_int = 11;
		return 0;
	}
	if(var_25_string == "klara") {
		var_24_int = 12;
		return 0;
	}
	if(var_25_string == "lara") {
		var_24_int = 13;
		return 0;
	}
	if(var_25_string == "laska") {
		var_24_int = 14;
		return 0;
	}
	if(var_25_string == "maria") {
		var_24_int = 15;
		return 0;
	}
	if(var_25_string == "mark") {
		var_24_int = 16;
		return 0;
	}
	if(var_25_string == "mat") {
		var_24_int = 17;
		return 0;
	}
	if(var_25_string == "mishka") {
		var_24_int = 18;
		return 0;
	}
	if(var_25_string == "mladvlad") {
		var_24_int = 19;
		return 0;
	}
	if(var_25_string == "notkin") {
		var_24_int = 20;
		return 0;
	}
	if(var_25_string == "ospina") {
		var_24_int = 21;
		return 0;
	}
	if(var_25_string == "petr") {
		var_24_int = 22;
		return 0;
	}
	if(var_25_string == "rubin") {
		var_24_int = 23;
		return 0;
	}
	if(var_25_string == "spi4ka") {
		var_24_int = 24;
		return 0;
	}
	if(var_25_string == "starshina") {
		var_24_int = 25;
		return 0;
	}
	if(var_25_string == "viktor") {
		var_24_int = 26;
		return 0;
	}
	if(var_25_string == "wasted_woman") {
		var_24_int = 27;
		return 0;
	}
	if(var_25_string == "wasted_male") {
		var_24_int = 28;
		return 0;
	}
	if(var_25_string == "alkash") {
		var_24_int = 29;
		return 0;
	}
	if(var_25_string == "boy") {
		var_24_int = 30;
		return 0;
	}
	if(var_25_string == "girl") {
		var_24_int = 31;
		return 0;
	}
	if(var_25_string == "littleboy") {
		var_24_int = 32;
		return 0;
	}
	if(var_25_string == "littlegirl") {
		var_24_int = 33;
		return 0;
	}
	if(var_25_string == "butcher") {
		var_24_int = 34;
		return 0;
	}
	if(var_25_string == "dohodyaga") {
		var_24_int = 35;
		return 0;
	}
	if(var_25_string == "unosha") {
		var_24_int = 36;
		return 0;
	}
	if(var_25_string == "vaxxabit") {
		var_24_int = 37;
		return 0;
	}
	if(var_25_string == "vaxxabitka") {
		var_24_int = 38;
		return 0;
	}
	if(var_25_string == "woman") {
		var_24_int = 39;
		return 0;
	}
	if(var_25_string == "worker") {
		var_24_int = 40;
		return 0;
	}
	if(var_25_string == "whitemask") {
		var_24_int = 42;
		return 0;
	}
	if(var_25_string == "birdmask") {
		var_24_int = 43;
		return 0;
	}
	if(var_25_string == "birdmask") {
		var_24_int = 44;
		return 0;
	}
	if(var_25_string == "patrol") {
		var_24_int = 46;
		return 0;
	}
	if(var_25_string == "danko") {
		var_24_int = 47;
		return 0;
	}
	if(var_25_string == "alkash_d") {
		var_24_int = 48;
		return 0;
	}
	if(var_25_string == "boy_d") {
		var_24_int = 49;
		return 0;
	}
	if(var_25_string == "butcher_d") {
		var_24_int = 50;
		return 0;
	}
	if(var_25_string == "dohodyaga_d") {
		var_24_int = 51;
		return 0;
	}
	if(var_25_string == "girl_d") {
		var_24_int = 52;
		return 0;
	}
	if(var_25_string == "littleboy_d") {
		var_24_int = 53;
		return 0;
	}
	if(var_25_string == "littlegirl_d") {
		var_24_int = 54;
		return 0;
	}
	if(var_25_string == "unosha2") {
		var_24_int = 55;
		return 0;
	}
	if(var_25_string == "unosha_d") {
		var_24_int = 56;
		return 0;
	}
	if(var_25_string == "unosha2_d") {
		var_24_int = 57;
		return 0;
	}
	if(var_25_string == "vaxxabit_d") {
		var_24_int = 58;
		return 0;
	}
	if(var_25_string == "vaxxabitka_d") {
		var_24_int = 59;
		return 0;
	}
	if(var_25_string == "wasted_male_d") {
		var_24_int = 60;
		return 0;
	}
	if(var_25_string == "wasted_woman_d") {
		var_24_int = 61;
		return 0;
	}
	if(var_25_string == "woman_d") {
		var_24_int = 62;
		return 0;
	}
	if(var_25_string == "worker2") {
		var_24_int = 63;
		return 0;
	}
	if(var_25_string == "worker_d") {
		var_24_int = 64;
		return 0;
	}
	if(var_25_string == "worker2_d") {
		var_24_int = 65;
		return 0;
	}
	if(var_25_string == "burah") {
		var_24_int = 66;
		return 0;
	}
	if(var_25_string == "gorbun_daughter") {
		var_24_int = 67;
		return 0;
	}
	if(var_25_string == "gorbun") {
		var_24_int = 68;
		return 0;
	}
	if(var_25_string == "albinos") {
		var_24_int = 69;
		return 0;
	}
	if(var_25_string == "aglaja") {
		var_24_int = 70;
		return 0;
	}
	if(var_25_string == "nude") {
		var_24_int = 71;
		return 0;
	}
	if(var_25_string == "block") {
		var_24_int = 72;
		return 0;
	}
	if(var_25_string == "officer") {
		var_24_int = 73;
		return 0;
	}
	if(var_25_string == "doberman") {
		var_24_int = 74;
		return 0;
	}
	if(var_25_string == "grabitel") {
		var_24_int = 75;
		return 0;
	}
	if(var_25_string == "gatherer_wife") {
		var_24_int = 76;
		return 0;
	}
	if(var_25_string == "rat_prophet") {
		var_24_int = 77;
		return 0;
	}
	if(var_25_string == "morlok") {
		var_24_int = 78;
		return 0;
	}
	if(var_25_string == "soldier") {
		var_24_int = 79;
		return 0;
	}
	if(var_25_string == "britva") {
		var_24_int = 80;
		return 0;
	}
	if(var_25_string == "kabaktchik") {
		var_24_int = 81;
		return 0;
	}
	if(var_25_string == "sanitar") {
		var_24_int = 82;
		return 0;
	}
	if(var_25_string == "salesman") {
		var_24_int = 83;
		return 0;
	}
	if(var_25_string == "ayyan") {
		var_24_int = 84;
		return 0;
	}
	if(var_25_string == "petrbirdmask") {
		var_24_int = 85;
		return 0;
	}
	var_24_int = -1;
}


void func_1368(int var_503_int)
{
	float var_505_float;
	@GetGameTime(var_505_float);
	var_503_int = 1 + (var_505_float / 24);
}


void func_1377(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_1384(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_1377(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_1129(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_1218(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_1384(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_1218(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_1176;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_1377(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_1205;
				}
			} else if(var_38_int != 0) {
				goto Label_1205;
			}
			}
					bool var_71_bool;
					func_1208(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_1200;
			}
		}
	Label_1205:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1200:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_1517(bool var_494_bool, object var_495_object)
{
	object var_497_object;
	var_495_object = var_497_object;
	bool var_496_bool;
	func_1349(var_496_bool, var_497_object, "monomicin");
	if(var_496_bool != 0) {
		var_494_bool = true;
		return 0;
	}
	var_494_bool = false;
}


void func_752(object var_0_object, int var_203_int, object var_204_object)
{
	var_0_object = var_204_object;
	bool var_214_bool; object var_215_object;
	var_204_object = var_215_object;
	func_1223(var_214_bool, var_215_object, 130.0);
	if(!var_214_bool) { //@nz
		var_203_int = -2;
		return 8;
	}
	object var_210_object;
	@CreateDialog(var_210_object);
	int var_261_int;
	func_2076(var_261_int);
	var_210_object->SetNPCName(var_261_int);
	int var_262_int;
	func_2074(var_262_int);
	var_210_object->SetNPCDescription(var_262_int);
	string var_263_string;
	func_2078(var_263_string);
	var_210_object->SetPhoto(var_263_string);
	string var_264_string;
	func_2080(var_264_string);
	var_210_object->SetPhoto2(var_264_string);
	int var_265_int;
	func_1601(var_265_int);
	var_210_object->SetPlayerName(var_265_int);
	bool var_211_bool;
	@IsOverrideActive(var_211_bool);
	if(var_211_bool != 0) {
		var_203_int = -2;
		return 8;
	}
	@DoDialog(var_210_object);
	object var_274_object; object var_275_object;
	var_204_object = var_274_object;
	var_210_object = var_275_object;
	TaskCall(5);
	func_826(var_276_object, var_277_object, var_278_string, var_279_bool, var_274_object, var_275_object);
	TaskReturn();
	bool var_213_bool;
	var_210_object->IsDialogEnd(var_213_bool);
	
	for(;;) {
		var_313_bool = !var_213_bool; //@nz
		if(var_313_bool == 0) goto Label_815;
		@sync();
		var_210_object->IsDialogEnd(var_213_bool);
	}
	
Label_815:
	object var_314_object;
	var_204_object = var_314_object;
	func_1291();
	@StopDialog(var_210_object);
	var_210_object->GetReturnValue(-1);
	int var_212_int = var_203_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_884(object var_2_object, string var_281_string)
{
	bool var_282_bool;
	func_2082(var_282_bool);
	if(!var_282_bool) //@nz
		return 0;
	if(var_281_string == var_2_object)
		return 0;
	string var_285_string; bool var_286_bool;
	var_281_string = var_285_string;
	if(var_281_string == "")
		var_286_bool = false;
	else
		var_286_bool = true;
	func_1315(var_285_string, var_286_bool);
	var_2_object = var_281_string;
	
}


// @pe
void func_1528(bool var_515_bool, object var_516_object)
{
	object var_518_object;
	var_516_object = var_518_object;
	bool var_517_bool;
	func_1349(var_517_bool, var_518_object, "feromicin");
	if(var_517_bool != 0) {
		var_515_bool = true;
		return 0;
	}
	var_515_bool = false;
}


void func_1401(void)
{
	string var_82_string;
	@GetProperty("npc", var_82_string);
	int var_84_int;
	func_1618(var_84_int);
	if(var_84_int == 0) {
		bool var_87_bool; string var_90_string;
		var_82_string = var_90_string;
		func_1356(var_87_bool, "volonteers_danko", "rescue_oneday", var_90_string);
	} else {
			int var_91_int;
			func_1618(var_91_int);
			if(!(var_91_int == 1)) goto Label_1431;
			bool var_94_bool; string var_97_string;
			var_82_string = var_97_string;
			func_1356(var_94_bool, "volonteers_burah", "rescue_oneday", var_97_string);
	}
	
Label_1431:
	bool var_98_bool; string var_101_string;
	var_82_string = var_101_string;
	func_1356(var_98_bool, "volonteers_klara", "rescue_oneday", var_101_string);
}


void func_2044(bool var_321_bool, int var_322_int)
{
	int var_326_int;
	@GetVariable(("vol_" + var_322_int), var_326_int);
	var_321_bool = (var_326_int & 32) != 0;
}


