// @GLOBALS: 0:int:,1:object:

task task_0
{
	void OnTimer(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		cvector var_23_cvector; cvector var_24_cvector; float var_25_float;
		if(var_19_bool == 10) {
			int var_28_int;
			func_1412(var_28_int);
			var_36_int = GlobalVars[0];
			if(var_28_int != var_36_int)
				func_222(var_25_float);
		}
		if(var_19_bool == 123) {
			@GetPosition(var_23_cvector);
			var_24_cvector = var_23_cvector - var_2_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_41_bool = true;
			var_43_bool = var_25_float > 10000.0;
			if(var_43_bool != 1) {
				var_44_bool = var_4_int != var_3_int;
				if(var_44_bool != 1)
					var_41_bool = false;
			}
			if(var_41_bool != 0) {
				var_2_cvector = var_23_cvector;
				var_4_int = var_3_int;
			}
			if((var_5_int + 1) > 7) {
				var_5_int = 0;
				@Trace("On Actor Stuck");
				func_222(var_25_float);
			}
		}
		int var_49_int;
		var_19_bool = var_49_int;
		func_200(var_24_cvector, var_25_float, var_49_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_222(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_1725();
	}

}


task task_1
{
	void OnTimer(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, int var_12_int, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		cvector var_23_cvector; cvector var_24_cvector; float var_25_float;
		if(var_19_bool == 123) {
			@GetPosition(var_23_cvector);
			var_24_cvector = var_23_cvector - var_2_cvector;
			var_25_float = var_24_cvector | var_24_cvector;
			bool var_28_bool = true;
			var_30_bool = var_25_float > 10000.0;
			if(var_30_bool != 1) {
				var_31_bool = var_4_int != var_3_int;
				if(var_31_bool != 1)
					var_28_bool = false;
			}
			if(var_28_bool != 0) {
				var_2_cvector = var_23_cvector;
				var_4_int = var_3_int;
			}
			if((var_5_int + 1) > 7) {
				var_5_int = 0;
				@Trace("On Actor Stuck 1");
				func_464(var_25_float);
			}
		}
		int var_37_int;
		var_19_bool = var_37_int;
		func_442(var_24_cvector, var_25_float, var_37_int);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		@Trace("OnActorStuck");
		cvector var_24_cvector;
		func_464(var_24_cvector);
		cvector var_22_cvector;
		@GetPosition(var_22_cvector);
		bool var_23_bool;
		@GetRandomPFPointInCircle(var_24_cvector, var_22_cvector, 0.3, var_23_bool);
		if(var_23_bool != 0) {
			@Trace("Random point found");
			@SetPosition(var_24_cvector);
		} else {
			@Trace("Random point not found");
		}
	
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, object var_12_object, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, object var_12_object, bool var_13_bool, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_464(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_1725();
	}

}


task task_2
{
	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_570(var_18_string, var_19_bool);
		object var_20_object;
		var_19_bool = var_20_object;
		func_1725();
	}

}


task task_3
{
}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, int var_19_int, int var_20_int)
	{
		if(1 != 0) {
			func_1623();
			if(var_20_int == 10646) {
				object var_25_object = var_1_object;
				func_1739(var_0_bool);
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_bool;
				func_1727();
			}
			if(var_20_int == 10650) {
				object var_63_object = var_1_object;
				func_1739(var_0_bool);
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_bool;
				func_1727();
			}
			if(var_20_int == 10648) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_bool;
				func_1733();
				object var_73_object = var_1_object;
				func_1770(var_0_bool);
			}
			if(var_20_int == 10649) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_bool;
				func_1733();
				object var_80_object = var_1_object;
				func_1775(var_0_bool);
			}
			if(var_20_int == 10669) {
				object var_85_object = var_1_object;
				func_1759(var_0_bool);
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_bool;
				func_1727();
			}
			if(var_19_int == 10641) {
				bool var_95_bool;
				func_1780(var_1_object);
				if(var_95_bool != 0) {
					func_832(var_20_int, "Neutral");
					var_0_bool->SetMessage(509667); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509668, 10643, 10642); //@t
					var_0_bool->AddReply(509677, 10653, 10652); //@t
					return 0;
				}
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509682, 10660, 10659); //@t
				var_0_bool->AddReply(509699, -1, 10678); //@t
				return 0;
			}
			if(var_19_int == 10660) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509684, 10662, 10661); //@t
				var_0_bool->AddReply(509694, 10672, 10671); //@t
				var_0_bool->AddReply(509698, 10662, 10676); //@t
				return 0;
			}
			if(var_19_int == 10672) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509695); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509696, 10665, 10673); //@t
				var_0_bool->AddReply(509697, -1, 10675); //@t
				return 0;
			}
			if(var_19_int == 10662) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509687, 10665, 10664); //@t
				var_0_bool->AddReply(509686, -1, 10663); //@t
				return 0;
			}
			if(var_19_int == 10665) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509689, -1, 10666); //@t
				var_0_bool->AddReply(509690, 10668, 10667); //@t
				return 0;
			}
			if(var_19_int == 10668) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509691); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509692, -1, 10669); //@t
				var_0_bool->AddReply(509693, -1, 10670); //@t
				var_0_bool->AddReply(538762, -1, 40678); //@t
				return 0;
			}
			if(var_19_int == 10653) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509679, 10643, 10654); //@t
				var_0_bool->AddReply(509680, 10643, 10656); //@t
				return 0;
			}
			if(var_19_int == 10643) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509670, 10645, 10644); //@t
				return 0;
			}
			if(var_19_int == 10645) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509671); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509672, 43766, 10646); //@t
				var_0_bool->AddReply(509676, 10647, 10650); //@t
				return 0;
			}
			if(var_19_int == 10647) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(509673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541600, 43766, 43765); //@t
				var_0_bool->AddReply(541602, 43766, 43767); //@t
				return 0;
			}
			if(var_19_int == 43766) {
				func_832(var_20_int, "Neutral");
				var_0_bool->SetMessage(541601); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(509674, -1, 10648); //@t
				var_0_bool->AddReply(509675, -1, 10649); //@t
				return 0;
			}
			var_3_int = true;
			bool var_238_bool;
			func_1817(var_238_bool);
			if(var_238_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x357";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		var_19_int = GlobalVars[0];
		int var_20_int;
		func_1412(var_20_int);
		var_20_int = var_19_int;
		GlobalVars[0] = var_19_int;
	
		for(;;) {
			@Sleep(3);
			func_1299();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, object var_19_object)
	{
		func_1380();
		int var_22_int; object var_23_object;
		var_19_object = var_23_object;
		int var_21_int;
		func_1221(var_21_int, var_22_int, var_23_object);
		var_22_int = var_21_int;
		if(var_21_int == 0) {
			bool var_172_bool;
			func_1689(var_172_bool, "quest_d4_01", "key1_done");
			object var_178_object;
			var_19_object = var_178_object;
			TaskCall(0);
			func_0(var_181_cvector, var_182_int, var_183_int, var_184_int, var_178_object);
			TaskReturn();
			object var_289_object;
			var_19_object = var_289_object;
			TaskCall(1);
			func_249(var_292_cvector, var_293_int, var_294_int, var_295_int, var_289_object);
			TaskReturn();
			object var_353_object;
			var_19_object = var_353_object;
			TaskCall(7);
			func_1393(var_353_object);
			TaskReturn();
			TaskCall(2);
			func_491();
			TaskReturn();
		} else if(var_21_int == 1) {
			bool var_448_bool;
			func_1689(var_448_bool, "quest_d4_01", "key1_done");
			TaskCall(2);
			func_491();
			TaskReturn();
		}
	
	}

}


task task_7
{
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, bool var_6_bool, object var_7_object, cvector var_8_cvector, int var_9_int, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool, object var_19_object)
{
}


void func_1792(int var_87_int)
{
	int var_89_int;
	@GetVariable("branch", var_89_int);
	if(var_89_int == 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x70f";
	}
	if(var_89_int == 1) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
}


// @pe
void func_0(cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_178_object)
{
	@GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	@SetTimer(123, 0.5);
	var_3_int = 0;
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_189_bool; object var_190_object;
		func_98(var_184_int, var_190_object, var_189_bool, var_190_object, (float)250, (float)3000, true, true);
		var_3_int += 1;
		int var_273_int;
		func_1412(var_273_int);
		var_281_int = GlobalVars[0];
		if(var_273_int != var_281_int) {
		} else {
				@Sleep(1);
				int var_286_int;
				func_1412(var_286_int);
				var_287_int = GlobalVars[0];
				if(!(var_286_int != var_287_int)) goto Label_41;
		}
		for(;;) {
			@KillTimer(10);
			@KillTimer(123);
			return 0;

		}

	Label_41:
	}
}


void func_1809(int var_84_int)
{
	var_84_int = 515569;
}


void func_1811(int var_83_int)
{
	var_83_int = 503354;
}


void func_1299(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1500(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_47_int;
	func_1708(var_47_int);
	int var_36_int;
	var_47_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_60_bool = false;
		if(var_37_int < 5) {
			bool var_63_bool;
			func_1500(var_63_bool);
			if(var_63_bool != 0)
				var_60_bool = true;
		}
		if(var_60_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_1346;
				@irand(var_39_int, var_36_int);
				string var_69_string; int var_70_int;
				var_39_int = var_70_int;
				func_1701(var_69_string, var_70_int);
				@PlayAnimation("all", var_69_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_1375;
				}
			} else if(var_37_int != 0) {
				goto Label_1375;
			}
			}
					bool var_72_bool;
					func_1378(var_72_bool);
					var_73_bool = !var_72_bool; //@nz
					if(var_73_bool == 0) goto Label_1370;
			}
		}
	Label_1375:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1370:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_1813(string var_85_string)
{
	var_85_string = "ui/NPC_wmask.png";
}


void func_1815(string var_86_string)
{
	var_86_string = "ui/NPC_wmask_b.png";
}


void func_1817(bool var_78_bool)
{
	var_78_bool = false;
}


void func_1574(void)
{
	bool var_164_bool;
	@CameraSwitchToNormal(true);
	bool var_166_bool;
	func_1817(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_1591;
		@UnlookAsync("head");
	}
Label_1591:
	
}


void func_558(float var_378_float)
{
	float var_380_float;
	@GetCameraFarDistance(var_380_float);
	var_380_float = var_378_float;
}


void func_1592(string var_137_string)
{
	bool var_141_bool; float var_142_float; float var_143_float;
	@lshHasAnimation(var_141_bool, var_137_string);
	if(var_141_bool != 0) {
		@lshGetAnimTimes(var_137_string, var_142_float, var_143_float);
		@lshPlayAnimation(var_142_float, var_143_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_137_string);
	}
	
}


void func_570(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_832(cvector var_2_cvector, string var_111_string)
{
	bool var_112_bool;
	func_1817(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_cvector)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_1608(var_115_string, var_116_bool);
	var_2_cvector = var_111_string;
	
}


void func_1608(string var_115_string, bool var_116_bool)
{
	bool var_122_bool; float var_123_float; float var_124_float;
	@lshHasAnimation(var_122_bool, var_115_string);
	if(var_122_bool != 0) {
		@lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		@lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_115_string);
	}
	
}


void func_586(bool var_388_bool)
{
	var_388_bool = false;
}


void func_588(object var_382_object, cvector var_383_cvector)
{
	object var_385_object;
	@FindShiftedPathTo(var_385_object, var_383_cvector);
	var_385_object = var_382_object;
}
EMIT "Stack[-1] = 0";


void func_594(void)
{
	int var_399_int; int var_400_int; bool var_401_bool; float var_402_float; bool var_403_bool;
	@WaitForAnimEnd();
	bool var_404_bool;
	func_1500(var_404_bool);
	if(!var_404_bool) //@nz
		return 14;
	int var_408_int;
	func_1708(var_408_int);
	int var_397_int;
	var_408_int = var_397_int;
	int var_398_int = 0;
	
	for(;;) {
		bool var_421_bool = false;
		if(var_398_int < 5) {
			bool var_424_bool;
			func_1500(var_424_bool);
			if(var_424_bool != 0)
				var_421_bool = true;
		}
		if(var_421_bool != 0) {
			@irand(var_399_int, 3);
			if(var_399_int == 0) {
				if(var_397_int == 0) goto Label_641;
				@irand(var_400_int, var_397_int);
				string var_430_string; int var_431_int;
				var_400_int = var_431_int;
				func_1701(var_430_string, var_431_int);
				@PlayAnimation("all", var_430_string);
				@WaitForAnimEnd(var_401_bool);
				if(!var_401_bool) { //@nz
				} else {
			} else {
			if(var_399_int == 1) {
				@rand(var_402_float, 4);
				@Sleep((var_402_float + 1), var_403_bool);
				if(!var_403_bool) { //@nz
					goto Label_670;
				}
			} else if(var_398_int != 0) {
				goto Label_670;
			}
			}
					bool var_433_bool;
					func_673(var_433_bool);
					var_434_bool = !var_433_bool; //@nz
					if(var_434_bool == 0) goto Label_665;
			}
		}
	Label_670:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_665:
		@ResetAAS();
		var_398_int += 1;
	}
	
}


void func_340(bool var_0_bool, object var_1_object, bool var_298_bool, object var_299_object, float var_300_float, float var_301_float, bool var_302_bool, bool var_303_bool)
{
	bool var_312_bool; object var_314_object; cvector var_315_cvector; cvector var_316_cvector; float var_318_float; object var_319_object;
	var_0_bool = false;
	var_1_object = var_299_object;
	bool var_313_bool;
	var_303_bool = var_313_bool;
	
	for(;;) {
		bool var_320_bool; object var_321_object;
		var_299_object = var_321_object;
		func_480(var_320_bool, var_321_object);
		if(!var_320_bool) { //@nz
			var_298_bool = false;
			return 16;
		}
		var_299_object->GetPosition(var_315_cvector);
		@GetPosition(var_316_cvector);
		var_318_float = (var_315_cvector - var_316_cvector) | (var_315_cvector - var_316_cvector);
		bool var_325_bool = false;
		if(var_301_float > 0) {
			if(var_318_float > (var_301_float * var_301_float))
				var_325_bool = true;
		}
		if(var_325_bool != 0) {
			@Stop();
			var_298_bool = false;
			return 16;
		}
		if(var_318_float > (var_300_float * var_300_float)) {
			var_299_object->GetPFPosition(var_315_cvector);
			@FindPathTo(var_319_object, var_315_cvector);
			if(var_319_object != null) {
				var_319_object = var_314_object;
				var_319_object = null;
			}
			if(var_314_object != null) {
				if(var_313_bool == 0) goto Label_393;
				var_313_bool = false;
				@RotatePath(var_314_object, var_312_bool);
				if(!var_312_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_338_string;
						func_487(var_338_string);
						string var_339_string;
						func_489(var_339_string);
						@FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string);
						if(!var_312_bool) { //@nz
							if(var_0_bool == 0) goto Label_412;
							var_314_object = null;
						}
					EMIT "GOTO 0x19d";

					Label_412:
						} else {
					var_314_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_312_bool);
					if(!var_312_bool) { //@nz
						if(var_0_bool != 0) {
							var_314_object = null;
							goto Label_440;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_440;
		}
			var_319_object = null;
			goto Label_438;

		Label_438:
			var_314_object = null;

		}
	Label_440:
		for(;;) {
			var_298_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1623(void)
{
	bool var_22_bool;
	func_1817(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_1630(cvector var_62_cvector, cvector var_63_cvector)
{
	float var_66_float = sqrt(var_63_cvector | var_63_cvector);
	if(var_66_float < 0.000001)
		var_62_cvector = [0.0, 0.0, 0.0];
	var_62_cvector = var_63_cvector / var_66_float;
}


void func_98(bool var_0_bool, object var_1_object, bool var_189_bool, object var_190_object, float var_191_float, float var_192_float, bool var_193_bool, bool var_194_bool)
{
	bool var_203_bool; object var_205_object; cvector var_206_cvector; cvector var_207_cvector; float var_209_float; object var_210_object;
	var_0_bool = false;
	var_1_object = var_190_object;
	bool var_204_bool;
	var_194_bool = var_204_bool;
	
	for(;;) {
		bool var_211_bool; object var_212_object;
		var_190_object = var_212_object;
		func_238(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			var_189_bool = false;
			return 16;
		}
		var_190_object->GetPosition(var_206_cvector);
		@GetPosition(var_207_cvector);
		var_209_float = (var_206_cvector - var_207_cvector) | (var_206_cvector - var_207_cvector);
		bool var_248_bool = false;
		if(var_192_float > 0) {
			if(var_209_float > (var_192_float * var_192_float))
				var_248_bool = true;
		}
		if(var_248_bool != 0) {
			@Stop();
			var_189_bool = false;
			return 16;
		}
		if(var_209_float > (var_191_float * var_191_float)) {
			var_190_object->GetPFPosition(var_206_cvector);
			@FindPathTo(var_210_object, var_206_cvector);
			if(var_210_object != null) {
				var_210_object = var_205_object;
				var_210_object = null;
			}
			if(var_205_object != null) {
				if(var_204_bool == 0) goto Label_151;
				var_204_bool = false;
				@RotatePath(var_205_object, var_203_bool);
				if(!var_203_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_261_string;
						func_245(var_261_string);
						string var_262_string;
						func_247(var_262_string);
						@FollowPath(var_205_object, var_193_bool, var_203_bool, var_261_string, var_262_string);
						if(!var_203_bool) { //@nz
							if(var_0_bool == 0) goto Label_170;
							var_205_object = null;
						}
					EMIT "GOTO 0xab";

					Label_170:
						} else {
					var_205_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_203_bool);
					if(!var_203_bool) { //@nz
						if(var_0_bool != 0) {
							var_205_object = null;
							goto Label_198;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_198;
		}
			var_210_object = null;
			goto Label_196;

		Label_196:
			var_205_object = null;

		}
	Label_198:
		for(;;) {
			var_189_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1378(bool var_72_bool)
{
	var_72_bool = true;
}


void func_1380(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1640(int var_105_int, string var_106_string)
{
	int var_108_int;
	@GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
}


// @pe
void func_1385(object var_357_object)
{
	object var_359_object;
	var_357_object = var_359_object;
	TaskCall(4);
	int var_358_int;
	func_675(var_360_object, var_358_int, var_359_object);
	TaskReturn();
}


void func_1645(int var_46_int, int var_47_int)
{
	object var_49_object;
	@CreateIntVector(var_49_object);
	var_49_object->add(var_46_int);
	var_49_object->add(var_47_int);
	@SendWorldWndMessage(3, var_49_object);
}
EMIT "Stack[-1] = 0";


void func_1393(object var_353_object)
{
	bool var_355_bool;
	
	for(;;) {
		@IsOverrideActive(var_355_bool);
		if(!var_355_bool) //@nz
			break;
	}
	object var_357_object;
	var_353_object = var_357_object;
	func_1385(var_357_object);
	@Hold();
}


void func_1657(object var_35_object, object var_36_object, int var_37_int)
{
	int var_41_int;
	var_36_object->GetItemID(var_41_int);
	int var_42_int;
	@GetInvItemProperty(var_42_int, var_41_int, "Category");
	bool var_43_bool;
	var_35_object->AddItem(var_43_bool, var_36_object, var_42_int, var_37_int);
	if(!var_43_bool) { //@nz
		var_35_object->DropItems(var_36_object, var_37_int);
	} else {
		int var_46_int; int var_47_int;
		var_41_int = var_46_int;
		var_37_int = var_47_int;
		func_1645(var_46_int, var_47_int);
	}
	
}


void func_1407(cvector var_25_cvector)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	var_27_cvector = var_25_cvector;
}


void func_1412(int var_20_int)
{
	object var_23_object;
	@GetScene(var_23_object);
	cvector var_25_cvector;
	func_1407(var_25_cvector);
	int var_24_int;
	var_23_object->GetRegionByPt(var_24_int, var_25_cvector);
	var_24_int = var_20_int;
}
EMIT "Stack[-2] = 0";


void func_1676(object var_30_object, string var_31_string, int var_32_int)
{
	object var_34_object;
	@CreateInvItem(var_34_object);
	var_34_object->SetItemName(var_31_string);
	object var_35_object; object var_36_object; int var_37_int;
	var_30_object = var_35_object;
	var_34_object = var_36_object;
	var_32_int = var_37_int;
	func_1657(var_35_object, var_36_object, var_37_int);
}
EMIT "Stack[-1] = 0";


void func_1423(bool var_235_bool, object var_236_object, string var_237_string)
{
	var_242_bool = IsFuncExist(var_236_object, "HasProperty", 2);
	if(!var_242_bool) { //@nz
		var_235_bool = false;
		return 2;
	}
	bool var_239_bool;
	var_236_object->HasProperty(var_237_string, var_239_bool);
	var_239_bool = var_235_bool;
}


void func_1689(bool var_172_bool, string var_173_string, string var_174_string)
{
	object var_176_object;
	@FindActor(var_176_object, var_173_string);
	if(var_176_object == null)
		var_172_bool = false;
	@Trigger(var_176_object, var_174_string);
	var_172_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1435(bool var_228_bool, object var_229_object)
{
	bool var_231_bool;
	var_229_object->IsDead(var_231_bool);
	var_231_bool = var_228_bool;
}


void func_1440(bool var_217_bool, object var_218_object)
{
	if(var_218_object == null) {
		var_217_bool = false;
		return 4;
	}
	bool var_224_bool = false;
	var_227_bool = IsFuncExist(var_218_object, "IsDead", 1);
	if(var_227_bool != 0) {
		bool var_228_bool; object var_229_object;
		var_218_object = var_229_object;
		func_1435(var_228_bool, var_229_object);
		if(var_228_bool != 0)
			var_224_bool = true;
	}
	if(var_224_bool != 0) {
		var_217_bool = false;
		return 4;
	}
	object var_221_object;
	@GetScene(var_221_object);
	if(var_221_object == null) {
		var_217_bool = false;
		return 4;
	}
	object var_222_object;
	var_218_object->GetScene(var_222_object);
	if(var_221_object != var_222_object) {
		var_217_bool = false;
		return 4;
	}
	var_217_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_673(bool var_433_bool)
{
	var_433_bool = true;
}


void func_675(bool var_0_bool, int var_24_int, object var_25_object)
{
	var_0_bool = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_1505(var_35_bool, var_36_object, 70.0);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_83_int;
	func_1811(var_83_int);
	var_31_object->SetNPCName(var_83_int);
	int var_84_int;
	func_1809(var_84_int);
	var_31_object->SetNPCDescription(var_84_int);
	string var_85_string;
	func_1813(var_85_string);
	var_31_object->SetPhoto(var_85_string);
	string var_86_string;
	func_1815(var_86_string);
	var_31_object->SetPhoto2(var_86_string);
	int var_87_int;
	func_1792(var_87_int);
	var_31_object->SetPlayerName(var_87_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_96_object; object var_97_object;
	var_25_object = var_96_object;
	var_31_object = var_97_object;
	TaskCall(5);
	func_749(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_161_bool = !var_34_bool; //@nz
		if(var_161_bool == 0) goto Label_738;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_738:
	object var_162_object;
	var_25_object = var_162_object;
	func_1574();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_1701(string var_53_string, int var_54_int)
{
	string var_56_string = "idle";
	if(var_54_int != 0)
		var_56_string += var_54_int;
	var_56_string = var_53_string;
}


void func_1708(int var_47_int)
{
	int var_50_int; bool var_51_bool;
	var_50_int = 0;
	
	for(;;) {
		string var_53_string; int var_54_int;
		var_50_int = var_54_int;
		func_1701(var_53_string, var_54_int);
		@HasAnimation(var_51_bool, "all", var_53_string);
		if(!var_51_bool) //@nz
			break;
		var_50_int += 1;
	}
	var_50_int = var_47_int;
}


// @pe
void func_442(bool var_0_bool, object var_1_object, int var_37_int)
{
	if(var_37_int != 0)
		return 0;
	bool var_40_bool;
	func_480(var_40_bool, var_1_object);
	if(!var_40_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1727(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_1476(bool var_213_bool, object var_214_object)
{
	object var_218_object;
	var_214_object = var_218_object;
	bool var_217_bool;
	func_1440(var_217_bool, var_218_object);
	if(!var_217_bool) { //@nz
		var_213_bool = false;
		return 2;
	}
	bool var_235_bool; object var_236_object;
	func_1423(var_235_bool, var_236_object, "noaccess");
	if(!var_235_bool) { //@nz
		var_213_bool = true;
		return 2;
	}
	int var_216_int;
	var_236_object->GetProperty("noaccess", var_216_int);
	var_213_bool = var_216_int == 0;
}


// @pe
void func_1733(void)
{
	@SetVariable("ood4WhiteMask1", 1);
}


// @pe
void func_1221(int var_22_int, object var_23_object, object var_26_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	TaskCall(4);
	int var_24_int;
	func_675(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	var_26_object = var_22_int;
}


// @pe
void func_200(bool var_0_bool, object var_1_object, int var_49_int)
{
	if(var_49_int != 0)
		return 0;
	bool var_52_bool;
	func_238(var_52_bool, var_1_object);
	if(!var_52_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1739(object var_25_object)
{
	@SetVariable("d4q01KeyWhite", 1);
	@Trace("theaterkey is given");
	object var_30_object;
	var_25_object = var_30_object;
	func_1676(var_30_object, "d4q01_theater_key", 1);
	bool var_51_bool;
	func_1689(var_51_bool, "quest_d4_01", "init_theater");
}


void func_464(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1500(bool var_43_bool)
{
	bool var_45_bool;
	@IsLoaded(var_45_bool);
	var_45_bool = var_43_bool;
}


void func_222(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1759(object var_85_object)
{
	@Trace("tvirin is given");
	object var_88_object;
	var_85_object = var_88_object;
	func_1676(var_88_object, "tvirin", 1);
}


// @pe
void func_480(bool var_320_bool, object var_321_object)
{
	object var_323_object;
	var_321_object = var_323_object;
	bool var_322_bool;
	func_1476(var_322_bool, var_323_object);
	var_322_bool = var_320_bool;
}


void func_1505(bool var_35_bool, object var_36_object, float var_37_float)
{
	cvector var_48_cvector; bool var_55_bool;
	var_36_object->GetPosition(var_48_cvector);
	float var_47_float;
	var_36_object->GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (var_56_float + var_47_float);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	@GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	SetByIndex(var_49_cvector, 1) = (var_57_float + var_47_float);
	cvector var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_60_float = sqrt(var_50_cvector | var_50_cvector);
	var_50_cvector /= var_60_float;
	cvector var_51_cvector = -var_50_cvector;
	cvector var_62_cvector;
	func_1630(var_62_cvector, (var_51_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_52_cvector = ((var_50_cvector * var_37_float) + (var_62_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_49_cvector + var_52_cvector), var_51_cvector, true);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	@Rotate(var_76_float, var_77_float);
	bool var_78_bool;
	func_1817(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		@HasAnimationTrack(var_55_bool, "head");
		if(var_55_bool == 0) goto Label_1568;
		@LookAsyncCamera("head");
	}
Label_1568:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
	
}


void func_487(string var_338_string)
{
	var_338_string = "walk";
}


void func_489(string var_339_string)
{
	var_339_string = "run";
}


// @pe
void func_1770(object var_74_object)
{
	var_74_object->SetReturnValue(0);
}


// @pe
void func_491(void)
{
	
	for(;;) {
		func_499(var_361_bool, var_362_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_749(bool var_0_bool, object var_1_object, cvector var_2_cvector, int var_3_int, object var_96_object, object var_97_object)
{
	var_0_bool = var_97_object;
	var_3_int = false;
	if(1 != 0) {
		bool var_103_bool;
		func_1780(var_96_object);
		if(var_103_bool != 0) {
			func_832(var_97_object, "Neutral");
			var_0_bool->SetMessage(509667); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(509668, 10643, 10642); //@t
			var_0_bool->AddReply(509677, 10653, 10652); //@t
		} else {
					func_832(var_97_object, "Neutral");
					var_0_bool->SetMessage(509681); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(509682, 10660, 10659); //@t
					var_0_bool->AddReply(509699, -1, 10678); //@t
		}
	}
	for(;;) {
		bool var_135_bool;
		func_1817(var_135_bool);
		if(var_135_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_int != 0) {
				} else {
					func_1592(var_2_cvector);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_int != 0) {
					goto Label_831;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_831:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2f1";


// @pe
void func_238(bool var_211_bool, object var_212_object)
{
	object var_214_object;
	var_212_object = var_214_object;
	bool var_213_bool;
	func_1476(var_213_bool, var_214_object);
	var_213_bool = var_211_bool;
}


// @pe
void func_1775(object var_81_object)
{
	var_81_object->SetReturnValue(1);
}


void func_499(bool var_0_bool, object var_1_object)
{
	float var_369_float; cvector var_370_cvector; cvector var_371_cvector; bool var_372_bool; object var_373_object; bool var_374_bool;
	@rand(var_369_float, 0.5);
	@Sleep(var_369_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_511:
				@GetPosition(var_371_cvector);
				float var_378_float;
				func_558(var_378_float);
				@GetRandomPFPointInCircle(var_370_cvector, var_371_cvector, var_378_float, var_372_bool);
				if(var_372_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_511;
			}
				var_1_object = false;
		}
		}
		goto Label_527;

	Label_527:
		object var_382_object; cvector var_383_cvector;
		var_370_cvector = var_383_cvector;
		func_588(var_382_object, var_383_cvector);
		var_382_object = var_373_object;
		if(var_373_object != null) {
			@RotatePath(var_373_object, var_374_bool);
			if(var_374_bool != 0) {
				bool var_388_bool;
				func_586(var_388_bool);
				@FollowPath(var_373_object, var_388_bool, var_374_bool);
				var_373_object = null;
				if(var_374_bool != 0) {
					TaskCall(3);
					func_594();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_373_object = null;
	}
	
}


// @pe
void func_1780(bool var_103_bool)
{
	int var_105_int;
	func_1640(var_105_int, "ood4WhiteMask1");
	if(var_105_int == 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


void func_245(string var_261_string)
{
	var_261_string = "walk";
}


void func_247(string var_262_string)
{
	var_262_string = "run";
}


// @pe
void func_249(cvector var_2_cvector, int var_3_int, int var_4_int, int var_5_int, object var_289_object)
{
	@GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	@SetTimer(123, 0.5);
	var_3_int = 0;
	
	for(;;) {
		bool var_298_bool; object var_299_object;
		func_340(var_295_int, var_299_object, var_298_bool, var_299_object, (float)250, (float)3000, true, true);
		var_349_bool = !var_298_bool; //@nz
		if(var_349_bool == 0) goto Label_275;
		var_3_int += 1;
		@Sleep(1);
	}
	
Label_275:
	@KillTimer(123);
}


