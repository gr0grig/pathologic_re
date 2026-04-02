// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool)
	{
		func_1865();
		bool var_16_bool;
		func_1375(var_16_bool);
		if(!var_16_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_1440("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_16_object;
		var_15_bool = var_16_object;
		func_1869(var_16_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_17_object;
		var_15_bool = var_17_object;
		bool var_16_bool;
		func_1363(var_16_bool, var_17_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		if(1 != 0) {
			func_1458();
			if(var_16_bool == 11509) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1539();
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_1537();
				object var_43_object = var_1_object;
				func_1559(var_0_object);
			}
			if(var_16_bool == 11510) {
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_1539();
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_1537();
				object var_75_object = var_1_object;
				func_1559(var_0_object);
			}
			if(var_16_bool == 11505) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				func_1537();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_1539();
				object var_83_object = var_1_object;
				func_1559(var_0_object);
			}
			if(var_16_bool == 11498) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_1537();
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_1539();
				object var_91_object = var_1_object;
				func_1559(var_0_object);
			}
			if(var_15_string == 11488) {
				bool var_95_bool = false;
				bool var_96_bool;
				func_1627(var_1_object);
				if(var_96_bool != 0) {
					bool var_104_bool;
					func_1622(var_1_object);
					if(var_104_bool != 0)
						var_95_bool = true;
				}
				if(var_95_bool != 0) {
					func_179(var_16_bool, "Neutral");
					var_0_object->SetMessage(10420); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(10421, 11490, 11489); //@t
					return 0;
				}
			}
			if(var_15_string == 11490) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10422); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10423, 11492, 11491); //@t
				return 0;
			}
			if(var_15_string == 11492) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10424); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10425, 11494, 11493); //@t
				return 0;
			}
			if(var_15_string == 11494) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10427, 11496, 11495); //@t
				return 0;
			}
			if(var_15_string == 11496) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10429, 11499, 11497); //@t
				var_0_object->AddReply(10430, -1, 11498); //@t
				return 0;
			}
			if(var_15_string == 11499) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10432, 11502, 11500); //@t
				var_0_object->AddReply(10433, 11502, 11501); //@t
				return 0;
			}
			if(var_15_string == 11502) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10434); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10435, 11504, 11503); //@t
				var_0_object->AddReply(10437, -1, 11505); //@t
				return 0;
			}
			if(var_15_string == 11504) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10436); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10438, 11508, 11507); //@t
				return 0;
			}
			if(var_15_string == 11508) {
				func_179(var_16_bool, "Neutral");
				var_0_object->SetMessage(10439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10440, -1, 11509); //@t
				var_0_object->AddReply(10441, -1, 11510); //@t
				return 0;
			}
			var_3_string = true;
			bool var_193_bool;
			func_1529(var_193_bool);
			if(var_193_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc4";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		if(1 != 0) {
			func_1458();
			if(var_15_string == 13489) {
				bool var_21_bool;
				func_1639(var_1_object);
				if(var_21_bool != 0) {
					object var_29_object; object var_30_object;
					var_29_object = var_1_object;
					var_30_object = var_0_object;
					func_1575();
					func_628(var_16_bool, "Neutral");
					var_0_object->SetMessage(12330); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12331, 13491, 13490); //@t
					var_0_object->AddReply(12336, -1, 13495); //@t
					return 0;
				}
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(13781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13782, -1, 15018); //@t
				return 0;
			}
			if(var_15_string == 13491) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12333, 13493, 13492); //@t
				var_0_object->AddReply(12337, 13497, 13496); //@t
				return 0;
			}
			if(var_15_string == 13497) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12339, 13499, 13498); //@t
				return 0;
			}
			if(var_15_string == 13499) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12341, -1, 13500); //@t
				var_0_object->AddReply(12342, 13502, 13501); //@t
				return 0;
			}
			if(var_15_string == 13502) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12344, -1, 13503); //@t
				return 0;
			}
			if(var_15_string == 13493) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12335, 13504, 13494); //@t
				return 0;
			}
			if(var_15_string == 13504) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12346, 13506, 13505); //@t
				return 0;
			}
			if(var_15_string == 13506) {
				func_628(var_16_bool, "Neutral");
				var_0_object->SetMessage(12347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12348, -1, 13507); //@t
				return 0;
			}
			var_3_string = true;
			bool var_115_bool;
			func_1529(var_115_bool);
			if(var_115_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x285";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int)
	{
		if(1 != 0) {
			func_1458();
			if(var_16_int == 15289) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1587();
			}
			if(var_16_int == 15310) {
				object var_52_object = var_1_object;
				func_1602(var_0_object);
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_1615();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_1531();
				object var_85_object = var_1_object;
				func_1596(var_0_object);
			}
			if(var_15_int == 15276) {
				bool var_93_bool = false;
				bool var_94_bool;
				func_1651(var_1_object);
				if(var_94_bool != 0) {
					bool var_102_bool;
					func_1663(var_1_object);
					if(var_102_bool != 0)
						var_93_bool = true;
				}
				if(var_93_bool != 0) {
					object var_108_object; object var_109_object;
					var_108_object = var_1_object;
					var_109_object = var_0_object;
					func_1581();
					func_1017(var_16_int, "Neutral");
					var_0_object->SetMessage(14041); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14042, 15278, 15277); //@t
					return 0;
				}
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14063); //@t
				var_0_object->ClearReplies(); //@t
				bool var_133_bool;
				func_1675(var_133_bool, var_1_object);
				if(var_133_bool != 0)
					var_0_object->AddReply(14068, 15309, 15305); //@t
				bool var_145_bool;
				func_1685(var_145_bool, var_1_object);
				if(var_145_bool != 0)
					var_0_object->AddReply(14069, 15307, 15306); //@t
				var_0_object->AddReply(14064, -1, 15300); //@t
				return 0;
			}
			if(var_15_int == 15307) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14071, -1, 15308); //@t
				return 0;
			}
			if(var_15_int == 15309) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14073, -1, 15310); //@t
				return 0;
			}
			if(var_15_int == 15278) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14044, 15280, 15279); //@t
				return 0;
			}
			if(var_15_int == 15280) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14046, 15282, 15281); //@t
				return 0;
			}
			if(var_15_int == 15282) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14048, 15284, 15283); //@t
				var_0_object->AddReply(14060, 15297, 15296); //@t
				return 0;
			}
			if(var_15_int == 15297) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14062, 15286, 15298); //@t
				return 0;
			}
			if(var_15_int == 15284) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14050, 15286, 15285); //@t
				var_0_object->AddReply(14055, 15291, 15290); //@t
				return 0;
			}
			if(var_15_int == 15291) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14057, 15293, 15292); //@t
				return 0;
			}
			if(var_15_int == 15293) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14059, 15286, 15294); //@t
				return 0;
			}
			if(var_15_int == 15286) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14052, 15288, 15287); //@t
				return 0;
			}
			if(var_15_int == 15288) {
				func_1017(var_16_int, "Neutral");
				var_0_object->SetMessage(14053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14054, -1, 15289); //@t
				return 0;
			}
			var_3_string = true;
			bool var_246_bool;
			func_1529(var_246_bool);
			if(var_246_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x40a";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_1537(void)
{
}


void func_1539(void)
{
	@SetVariable("d3q02", 4);
	object var_27_object;
	func_1766(var_27_object);
	object var_24_object;
	var_27_object = var_24_object;
	float var_38_float;
	func_1496(var_38_float);
	var_24_object->AddMark("d3q02HanGotoViktor", "pt_map_viktor", 0, 11386, var_38_float);
}
EMIT "Stack[-1] = 0";


void func_1527(string var_83_string)
{
	var_83_string = "ui/NPC_Han.png";
}


// @pe
void func_1675(bool var_133_bool, object var_134_object)
{
	object var_136_object;
	var_134_object = var_136_object;
	bool var_135_bool;
	func_1695(var_135_bool, var_136_object);
	if(var_135_bool != 0) {
		var_133_bool = true;
		return 0;
	}
	var_133_bool = false;
}


// @pe
void func_910(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_224_object, object var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_231_bool = false;
		bool var_232_bool;
		func_1651(var_1_object);
		if(var_232_bool != 0) {
			bool var_238_bool;
			func_1663(var_1_object);
			if(var_238_bool != 0)
				var_231_bool = true;
		}
		if(var_231_bool != 0) {
			object var_244_object; object var_245_object;
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_1581();
			func_1017(var_225_object, "Neutral");
			var_0_object->SetMessage(14041); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14042, 15278, 15277); //@t
		} else {
					func_1017(var_225_object, "Neutral");
					var_0_object->SetMessage(14063); //@t
					var_0_object->ClearReplies(); //@t
					bool var_267_bool;
					func_1675(var_267_bool, var_1_object);
					if(var_267_bool != 0)
						var_0_object->AddReply(14068, 15309, 15305); //@t
					bool var_279_bool;
					func_1685(var_279_bool, var_1_object);
					if(var_279_bool != 0)
						var_0_object->AddReply(14069, 15307, 15306); //@t
					var_0_object->AddReply(14064, -1, 15300); //@t
		}
	}
	for(;;) {
		bool var_257_bool;
		func_1529(var_257_bool);
		if(var_257_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1440(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1016;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1016:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x392";


// @pe
void func_1685(bool var_145_bool, object var_146_object)
{
	object var_148_object;
	var_146_object = var_148_object;
	bool var_147_bool;
	func_1706(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_145_bool = true;
		return 0;
	}
	var_145_bool = false;
}


// @pe
void func_1559(object var_44_object)
{
	object var_48_object;
	func_1766(var_48_object);
	object var_45_object;
	var_48_object = var_45_object;
	func_1783(var_45_object, "pt_map_viktor", (float)2);
	object var_68_object;
	func_1766(var_68_object);
	var_44_object->ShowMap(var_68_object);
}


void func_1816(int var_84_int)
{
	int var_86_int;
	@GetVariable("player", var_86_int);
	if(var_86_int == 0) {
		var_84_int = 200001;
		return 2;
	EMIT "GOTO 0x727";
	}
	if(var_86_int == 1) {
		var_84_int = 200002;
		return 2;
	}
	var_84_int = 200003;
}


// @pe
void func_1436(void)
{
	@CameraSwitchToNormal();
}


void func_1695(bool var_135_bool, object var_136_object)
{
	int var_138_int;
	var_136_object->GetItemCountOfType(var_138_int, "Rifle");
	if(var_138_int >= 5)
		var_135_bool = true;
	var_135_bool = false;
}


void func_1440(string var_20_string)
{
	@Trace("playing " + var_20_string);
	float var_23_float;
	float var_24_float;
	@lshGetAnimTimes(var_20_string, var_23_float, var_24_float);
	@lshPlayAnimation(var_23_float, var_24_float);
	@Trace("start: " + var_23_float);
	@Trace("end: " + var_24_float);
}


// @pe
void func_545(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_160_object, object var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_167_bool;
		func_1639(var_1_object);
		if(var_167_bool != 0) {
			object var_173_object; object var_174_object;
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_1575();
			func_628(var_161_object, "Neutral");
			var_0_object->SetMessage(12330); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12331, 13491, 13490); //@t
			var_0_object->AddReply(12336, -1, 13495); //@t
		} else {
					func_628(var_161_object, "Neutral");
					var_0_object->SetMessage(13781); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13782, -1, 15018); //@t
		}
	}
	for(;;) {
		bool var_189_bool;
		func_1529(var_189_bool);
		if(var_189_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1440(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_627;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_627:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x225";


// @pe
void func_1575(void)
{
	@SetVariable("ood8Han1", 1);
}


void func_1833(void)
{
	@Trace("Adding diary entry");
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 185, 1, 15448);
	bool var_64_bool; object var_65_object;
	var_59_object = var_65_object;
	func_1737(var_64_bool, var_65_object, 182);
}
EMIT "Stack[-1] = 0";


void func_1706(bool var_147_bool, object var_148_object)
{
	int var_150_int;
	var_148_object->GetItemCountOfType(var_150_int, "Rifle");
	bool var_152_bool = false;
	if(var_150_int > 0) {
		if(var_150_int < 5)
			var_152_bool = true;
	}
	if(var_152_bool != 0)
		var_147_bool = true;
	var_147_bool = false;
}


// @pe
void func_1581(void)
{
	@SetVariable("ood9Xan1", 1);
}


void func_49(object var_0_object, int var_30_int, object var_31_object)
{
	var_0_object = var_31_object;
	bool var_41_bool; object var_42_object;
	var_31_object = var_42_object;
	func_1380(var_41_bool, var_42_object);
	if(!var_41_bool) { //@nz
		var_30_int = -2;
		return 8;
	}
	object var_37_object;
	@CreateDialog(var_37_object);
	int var_82_int;
	func_1525(var_82_int);
	var_37_object->SetNPCName(var_82_int);
	string var_83_string;
	func_1527(var_83_string);
	var_37_object->SetPhoto(var_83_string);
	int var_84_int;
	func_1816(var_84_int);
	var_37_object->SetPlayerName(var_84_int);
	bool var_38_bool;
	@IsOverrideActive(var_38_bool);
	if(var_38_bool != 0) {
		var_30_int = -2;
		return 8;
	}
	@DoDialog(var_37_object);
	object var_93_object; object var_94_object;
	var_31_object = var_93_object;
	var_37_object = var_94_object;
	TaskCall(3);
	func_112(var_95_object, var_96_object, var_97_string, var_98_bool, var_93_object, var_94_object);
	TaskReturn();
	bool var_40_bool;
	var_37_object->IsDialogEnd(var_40_bool);
	
	for(;;) {
		var_138_bool = !var_40_bool; //@nz
		if(var_138_bool == 0) goto Label_101;
		@sync();
		var_37_object->IsDialogEnd(var_40_bool);
	}
	
Label_101:
	object var_139_object;
	var_31_object = var_139_object;
	func_1436();
	@StopDialog(var_37_object);
	var_37_object->GetReturnValue(-1);
	int var_39_int = var_30_int;
}
EMIT "Stack[-4] = 0";


void func_1458(void)
{
	bool var_18_bool;
	func_1529(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_179(object var_2_object, string var_106_string)
{
	bool var_107_bool;
	func_1529(var_107_bool);
	if(!var_107_bool) //@nz
		return 0;
	if(var_106_string == var_2_object)
		return 0;
	string var_110_string;
	func_1440(var_110_string);
	var_2_object = var_110_string;
}


// @pe
void func_1587(void)
{
	@SetVariable("d9q01", 2);
	func_1849();
}


void func_1465(cvector var_66_cvector, cvector var_67_cvector)
{
	float var_70_float = sqrt(var_67_cvector | var_67_cvector);
	if(var_70_float < 0.000001)
		var_66_cvector = [0.0, 0.0, 0.0];
	var_66_cvector = var_67_cvector / var_70_float;
}


void func_1849(void)
{
	@Trace("Adding diary entry");
	object var_26_object;
	@CreateDiaryEntry(var_26_object, 184, 1, 15447);
	bool var_31_bool; object var_32_object;
	var_26_object = var_32_object;
	func_1737(var_31_bool, var_32_object, 182);
}
EMIT "Stack[-1] = 0";


void func_1596(object var_85_object)
{
	int var_88_int;
	var_85_object->RemoveItemByType(var_88_int, "Rifle", 5);
}


void func_1724(object var_40_object)
{
	object var_42_object;
	@GetDiaryRoot(var_42_object);
	if(!var_42_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_40_object = false;
	}
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_1602(object var_52_object)
{
	@SetVariable("d9q01", 1000);
	func_1833();
	int var_55_int;
	var_52_object->RemoveItemByType(var_55_int, "Rifle", 5);
}


void func_1475(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_1480(string var_71_string, bool var_72_bool)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(!var_74_object) //@nz
		@Trace(("Door " + var_71_string) + " not found");
	var_74_object->SetProperty("locked", var_72_bool);
}
EMIT "Stack[-1] = 0";


void func_1865(void)
{
	var_15_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


void func_1737(bool var_31_bool, object var_32_object, int var_33_int)
{
	object var_40_object;
	func_1724(var_40_object);
	object var_37_object;
	var_40_object = var_37_object;
	object var_38_object;
	var_37_object->Find(var_33_int, var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_33_int);
		var_31_bool = false;
	}
	var_38_object->AddChild(var_32_object);
	@SetVariable("player_diary", 1);
	int var_39_int;
	var_32_object->GetCategory(var_39_int);
	@SetDiarySection(var_39_int);
	var_31_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1869(object var_16_object)
{
	var_17_bool = GlobalVars[1];
	if(!var_17_bool) { //@nz
		var_19_bool = GlobalVars[1];
		GlobalVars[1] = true;
		return 0;
	}
	bool var_20_bool;
	func_1510(var_20_bool, 1);
	if(var_20_bool != 0)
		return 0;
	bool var_28_bool;
	func_1510(var_28_bool, 3);
	if(var_28_bool != 0) {
		int var_30_int; object var_31_object;
		var_16_object = var_31_object;
		TaskCall(2);
		func_49(var_32_object, var_30_int, var_31_object);
		TaskReturn();
		return 0;
	}
	bool var_140_bool;
	func_1510(var_140_bool, 8);
	if(var_140_bool != 0) {
		int var_142_int; object var_143_object;
		var_16_object = var_143_object;
		TaskCall(4);
		func_482(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	bool var_204_bool;
	func_1510(var_204_bool, 9);
	if(var_204_bool != 0) {
		int var_206_int; object var_207_object;
		var_16_object = var_207_object;
		TaskCall(6);
		func_847(var_208_object, var_206_int, var_207_object);
		TaskReturn();
		return 0;
	}
	bool var_299_bool;
	func_1516(var_299_bool);
}


// @pe
void func_1615(void)
{
	func_1480("mnogogrannik@door1", false);
}


void func_847(object var_0_object, int var_206_int, object var_207_object)
{
	var_0_object = var_207_object;
	bool var_217_bool; object var_218_object;
	var_207_object = var_218_object;
	func_1380(var_217_bool, var_218_object);
	if(!var_217_bool) { //@nz
		var_206_int = -2;
		return 8;
	}
	object var_213_object;
	@CreateDialog(var_213_object);
	int var_220_int;
	func_1525(var_220_int);
	var_213_object->SetNPCName(var_220_int);
	string var_221_string;
	func_1527(var_221_string);
	var_213_object->SetPhoto(var_221_string);
	int var_222_int;
	func_1816(var_222_int);
	var_213_object->SetPlayerName(var_222_int);
	bool var_214_bool;
	@IsOverrideActive(var_214_bool);
	if(var_214_bool != 0) {
		var_206_int = -2;
		return 8;
	}
	@DoDialog(var_213_object);
	object var_224_object; object var_225_object;
	var_207_object = var_224_object;
	var_213_object = var_225_object;
	TaskCall(7);
	func_910(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	bool var_216_bool;
	var_213_object->IsDialogEnd(var_216_bool);
	
	for(;;) {
		var_297_bool = !var_216_bool; //@nz
		if(var_297_bool == 0) goto Label_899;
		@sync();
		var_213_object->IsDialogEnd(var_216_bool);
	}
	
Label_899:
	object var_298_object;
	var_207_object = var_298_object;
	func_1436();
	@StopDialog(var_213_object);
	var_213_object->GetReturnValue(-1);
	int var_215_int = var_206_int;
}
EMIT "Stack[-4] = 0";


void func_1363(bool var_16_bool, object var_17_object)
{
	cvector var_22_cvector;
	var_17_object->GetPosition(var_22_cvector);
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector = var_22_cvector - var_23_cvector;
	var_26_float = GetByIndex(var_24_cvector, 0);
	var_27_float = GetByIndex(var_24_cvector, 2);
	bool var_25_bool;
	@Rotate(var_26_float, var_27_float, var_25_bool);
	var_25_bool = var_16_bool;
}


// @pe
void func_1622(bool var_104_bool)
{
	var_104_bool = true;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


void func_1496(float var_38_float)
{
	float var_40_float;
	@GetGameTime(var_40_float);
	var_40_float = var_38_float;
}


// @pe
void func_1627(bool var_96_bool)
{
	int var_98_int;
	func_1475(var_98_int, "d3q02");
	if(var_98_int == 3)
		var_96_bool = true;
	var_96_bool = false;
}


void func_1501(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_1375(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_482(object var_0_object, int var_142_int, object var_143_object)
{
	var_0_object = var_143_object;
	bool var_153_bool; object var_154_object;
	var_143_object = var_154_object;
	func_1380(var_153_bool, var_154_object);
	if(!var_153_bool) { //@nz
		var_142_int = -2;
		return 8;
	}
	object var_149_object;
	@CreateDialog(var_149_object);
	int var_156_int;
	func_1525(var_156_int);
	var_149_object->SetNPCName(var_156_int);
	string var_157_string;
	func_1527(var_157_string);
	var_149_object->SetPhoto(var_157_string);
	int var_158_int;
	func_1816(var_158_int);
	var_149_object->SetPlayerName(var_158_int);
	bool var_150_bool;
	@IsOverrideActive(var_150_bool);
	if(var_150_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	@DoDialog(var_149_object);
	object var_160_object; object var_161_object;
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_545(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	bool var_152_bool;
	var_149_object->IsDialogEnd(var_152_bool);
	
	for(;;) {
		var_202_bool = !var_152_bool; //@nz
		if(var_202_bool == 0) goto Label_534;
		@sync();
		var_149_object->IsDialogEnd(var_152_bool);
	}
	
Label_534:
	object var_203_object;
	var_143_object = var_203_object;
	func_1436();
	@StopDialog(var_149_object);
	var_149_object->GetReturnValue(-1);
	int var_151_int = var_142_int;
}
EMIT "Stack[-4] = 0";


void func_1380(bool var_41_bool, object var_42_object)
{
	cvector var_52_cvector;
	var_42_object->GetPosition(var_52_cvector);
	float var_51_float;
	var_42_object->GetEyesHeight(var_51_float);
	var_59_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_59_float + var_51_float);
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	@GetEyesHeight(var_51_float);
	var_60_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (var_60_float + var_51_float);
	cvector var_54_cvector = var_52_cvector - var_53_cvector;
	var_61_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (float)0;
	var_63_float = sqrt(var_54_cvector | var_54_cvector);
	var_54_cvector /= var_63_float;
	cvector var_55_cvector = -var_54_cvector;
	cvector var_66_cvector;
	func_1465(var_66_cvector, (var_55_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_56_cvector = ((var_54_cvector * 70) + (var_66_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_58_bool;
	@IsOverrideActive(var_58_bool);
	if(var_58_bool != 0)
		var_41_bool = false;
	@StopWorld();
	@CameraTransit((var_53_cvector + var_56_cvector), var_55_cvector);
	var_79_float = GetByIndex(var_56_cvector, 0);
	var_80_float = GetByIndex(var_56_cvector, 2);
	@Rotate(var_79_float, var_80_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_41_bool = true;
}


void func_1766(object var_27_object)
{
	object var_30_object; object var_31_object;
	@GetMainOutdoorScene(var_30_object);
	if(var_30_object == null) {
		@Trace("Can't find main outdoor scene");
		var_31_object = null;
		var_31_object = var_27_object;
	}
	var_30_object->GetMap(var_31_object);
	var_31_object = var_27_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1639(bool var_21_bool)
{
	int var_23_int;
	func_1475(var_23_int, "ood8Han1");
	if(var_23_int == 0) {
		var_21_bool = true;
		return 0;
	}
	var_21_bool = false;
}


// @pe
void func_1510(bool var_20_bool, int var_21_int)
{
	int var_22_int;
	func_1501(var_22_int);
	var_20_bool = var_22_int == var_21_int;
}


void func_1516(bool var_299_bool)
{
	func_1440("No");
	bool var_301_bool;
	@lshWaitForAnimEnd(var_301_bool);
	var_301_bool = var_299_bool;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_93_object, object var_94_object)
{
	var_0_object = var_94_object;
	var_1_object = var_93_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_100_bool = false;
		bool var_101_bool;
		func_1627(var_1_object);
		if(var_101_bool != 0) {
			bool var_109_bool;
			func_1622(var_1_object);
			if(var_109_bool != 0)
				var_100_bool = true;
		}
		if(var_100_bool != 0) {
			func_179(var_94_object, "Neutral");
			var_0_object->SetMessage(10420); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(10421, 11490, 11489); //@t
		} else {
				return 0;
		}
	}
	bool var_130_bool;
	func_1529(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_1440(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_178;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_178:
		return 0;

	}
	
}
EMIT "GOTO 0x74";


// @pe
void func_1651(bool var_94_bool)
{
	int var_96_int;
	func_1475(var_96_int, "d9q01");
	if(var_96_int == 1)
		var_94_bool = true;
	var_94_bool = false;
}


// @pe
void func_628(object var_2_object, string var_33_string)
{
	bool var_34_bool;
	func_1529(var_34_bool);
	if(!var_34_bool) //@nz
		return 0;
	if(var_33_string == var_2_object)
		return 0;
	string var_37_string;
	func_1440(var_37_string);
	var_2_object = var_37_string;
}


void func_1525(int var_82_int)
{
	var_82_int = 2861;
}


void func_1783(object var_45_object, string var_46_string, float var_47_float)
{
	object var_55_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_53_cvector;
	cvector var_54_cvector;
	bool var_56_bool;
	var_55_object->GetLocator(var_46_string, var_56_bool, var_53_cvector, var_54_cvector);
	if(!var_56_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_46_string) + " doesnt exist");
	var_55_object->GetMap(var_45_object);
	if(var_45_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_66_float = GetByIndex(var_53_cvector, 0);
	var_67_float = GetByIndex(var_53_cvector, 2);
	var_45_object->SetMapParams(var_66_float, var_67_float, var_47_float);
}
EMIT "Stack[-2] = 0";


void func_1529(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_1531(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1017(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_1529(var_113_bool);
	if(!var_113_bool) //@nz
		return 0;
	if(var_112_string == var_2_object)
		return 0;
	string var_116_string;
	func_1440(var_116_string);
	var_2_object = var_116_string;
}


// @pe
void func_1663(bool var_102_bool)
{
	int var_104_int;
	func_1475(var_104_int, "ood9Xan1");
	if(var_104_int == 0) {
		var_102_bool = true;
		return 0;
	}
	var_102_bool = false;
}


