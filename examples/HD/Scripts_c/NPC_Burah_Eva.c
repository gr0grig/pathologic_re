// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2242();
			if(var_27_cvector == 20612) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2450();
			}
			if(var_26_bool == 19387) {
				func_144(var_27_cvector, "Fear");
				var_0_object->SetMessage(518278); //@t
				var_0_object->ClearReplies(); //@t
				bool var_56_bool;
				func_2632(var_1_object);
				if(var_56_bool != 0)
					var_0_object->AddReply(519444, 20613, 20612); //@t
				var_0_object->AddReply(518279, -1, 19388); //@t
				return 0;
			}
			if(var_26_bool == 20613) {
				func_144(var_27_cvector, "Love");
				var_0_object->SetMessage(519445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519446, 20615, 20614); //@t
				var_0_object->AddReply(519450, 20620, 20618); //@t
				return 0;
			}
			if(var_26_bool == 20615) {
				func_144(var_27_cvector, "Love");
				var_0_object->SetMessage(519447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519451, 20620, 20619); //@t
				var_0_object->AddReply(519453, 20620, 20622); //@t
				return 0;
			}
			if(var_26_bool == 20620) {
				func_144(var_27_cvector, "Fear");
				var_0_object->SetMessage(519452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519448, -1, 20616); //@t
				var_0_object->AddReply(519449, -1, 20617); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_2442(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa7";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2242();
			if(var_27_cvector == 21396) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2444();
			}
			if(var_27_cvector == 21403) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_2488();
			}
			if(var_27_cvector == 21405) {
				object var_44_object = var_1_object;
				func_2527(var_0_object);
			}
			if(var_27_cvector == 26115) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_2494();
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_2534();
				object var_108_object = var_1_object;
				func_2481(var_0_object);
			}
			if(var_27_cvector == 21406) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_2494();
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_2534();
			}
			if(var_26_bool == 21395) {
				func_489(var_27_cvector, "Fear");
				var_0_object->SetMessage(520203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_139_bool;
				func_2620(var_1_object);
				if(var_139_bool != 0)
					var_0_object->AddReply(520204, 21397, 21396); //@t
				bool var_150_bool = true;
				bool var_151_bool = false;
				bool var_152_bool = false;
				bool var_153_bool;
				func_2576(var_1_object);
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_2610(var_159_bool, var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0) {
					bool var_174_bool;
					func_2588(var_1_object);
					if(var_174_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 1) {
					bool var_180_bool = false;
					bool var_181_bool = false;
					bool var_182_bool;
					func_2600(var_182_bool, var_1_object);
					if(var_182_bool != 0) {
						bool var_193_bool;
						func_2576(var_1_object);
						if(var_193_bool != 0)
							var_181_bool = true;
					}
					if(var_181_bool != 0) {
						bool var_195_bool;
						func_2588(var_1_object);
						if(var_195_bool != 0)
							var_180_bool = true;
					}
					if(var_180_bool != 1)
						var_150_bool = false;
				}
				if(var_150_bool != 0)
					var_0_object->AddReply(520211, 21404, 21403); //@t
				var_0_object->AddReply(520215, -1, 21407); //@t
				return 0;
			}
			if(var_26_bool == 21404) {
				func_489(var_27_cvector, "Fear");
				var_0_object->SetMessage(520212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520213, 26114, 21405); //@t
				var_0_object->AddReply(520214, -1, 21406); //@t
				return 0;
			}
			if(var_26_bool == 26114) {
				func_489(var_27_cvector, "Fear");
				var_0_object->SetMessage(524804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524805, -1, 26115); //@t
				return 0;
			}
			if(var_26_bool == 21397) {
				func_489(var_27_cvector, "Fear");
				var_0_object->SetMessage(520205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520206, 21399, 21398); //@t
				var_0_object->AddReply(520210, -1, 21402); //@t
				return 0;
			}
			if(var_26_bool == 21399) {
				func_489(var_27_cvector, "Fear");
				var_0_object->SetMessage(520207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520208, -1, 21400); //@t
				var_0_object->AddReply(520209, -1, 21401); //@t
				return 0;
			}
			var_3_string = true;
			bool var_240_bool;
			func_2442(var_240_bool);
			if(var_240_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x200";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2242();
			if(var_26_bool == 21927) {
				func_894(var_27_cvector, "Fear");
				var_0_object->SetMessage(520716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520717, 21929, 21928); //@t
				var_0_object->AddReply(520721, 21933, 21932); //@t
				return 0;
			}
			if(var_26_bool == 21933) {
				func_894(var_27_cvector, "Fear");
				var_0_object->SetMessage(520722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520723, -1, 21934); //@t
				var_0_object->AddReply(520724, -1, 21935); //@t
				return 0;
			}
			if(var_26_bool == 21929) {
				func_894(var_27_cvector, "Fear");
				var_0_object->SetMessage(520718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520719, -1, 21930); //@t
				var_0_object->AddReply(520720, -1, 21931); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_2442(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x395";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2242();
			if(var_27_cvector == 23411) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2462();
			}
			if(var_27_cvector == 23412) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_2462();
			}
			if(var_27_cvector == 22716) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2462();
			}
			if(var_27_cvector == 22776) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_2456();
			}
			if(var_27_cvector == 22778) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_2510();
				object var_88_object = var_1_object;
				func_2516(var_0_object);
			}
			if(var_26_bool == 22713) {
				func_1167(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521552); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool;
				func_2540(var_1_object);
				if(var_132_bool != 0)
					var_0_object->AddReply(521553, 22715, 22714); //@t
				bool var_143_bool = false;
				bool var_144_bool;
				func_2552(var_1_object);
				if(var_144_bool != 0) {
					bool var_150_bool;
					func_2564(var_1_object);
					if(var_150_bool != 0)
						var_143_bool = true;
				}
				if(var_143_bool != 0)
					var_0_object->AddReply(521609, 22777, 22776); //@t
				var_0_object->AddReply(521556, -1, 22717); //@t
				return 0;
			}
			if(var_26_bool == 22777) {
				func_1167(var_27_cvector, "Fear");
				var_0_object->SetMessage(521610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522261, 23414, 23413); //@t
				return 0;
			}
			if(var_26_bool == 23414) {
				func_1167(var_27_cvector, "Fear");
				var_0_object->SetMessage(522262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522263, 23418, 23415); //@t
				var_0_object->AddReply(522264, 23417, 23416); //@t
				return 0;
			}
			if(var_26_bool == 23417) {
				func_1167(var_27_cvector, "Love");
				var_0_object->SetMessage(522265); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522269, 23418, 23421); //@t
				var_0_object->AddReply(522271, -1, 23423); //@t
				return 0;
			}
			if(var_26_bool == 23418) {
				func_1167(var_27_cvector, "Love");
				var_0_object->SetMessage(522266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522267, 23420, 23419); //@t
				return 0;
			}
			if(var_26_bool == 23420) {
				func_1167(var_27_cvector, "Love");
				var_0_object->SetMessage(522268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521611, -1, 22778); //@t
				return 0;
			}
			if(var_26_bool == 22715) {
				func_1167(var_27_cvector, "Fear");
				var_0_object->SetMessage(521554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522257, 23410, 23409); //@t
				var_0_object->AddReply(521555, -1, 22716); //@t
				return 0;
			}
			if(var_26_bool == 23410) {
				func_1167(var_27_cvector, "Fear");
				var_0_object->SetMessage(522258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522259, -1, 23411); //@t
				var_0_object->AddReply(522260, -1, 23412); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_2442(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4a6";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2242();
			if(var_26_int == 42560) {
				func_1585(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_2442(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x648";
	
	}

}


maintask task_10
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1653(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1718();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1966(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1687(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1667(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2249(var_72_object);
					var_72_object = var_71_object;
					func_2116(var_70_bool, var_71_object);
				}
			} else {
				func_1682(var_26_int);
				func_1709();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1900();
		func_1718();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		func_1718();
		func_2196("Neutral");
		func_1709();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1709();
		else
			func_2196("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1900();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1957(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2774(var_44_object);
			func_2196("Neutral");
			func_1718();
			func_1709();
		}
	}

}


void func_0(object var_0_object, int var_395_int, object var_396_object)
{
	var_0_object = var_396_object;
	bool var_406_bool; object var_407_object;
	var_396_object = var_407_object;
	func_1971(var_406_bool, var_407_object, 70.0);
	if(!var_406_bool) { //@nz
		var_395_int = -2;
		return 8;
	}
	object var_402_object;
	@CreateDialog(var_402_object);
	int var_410_int;
	func_2436(var_410_int);
	var_402_object->SetNPCName(var_410_int);
	int var_411_int;
	func_2434(var_411_int);
	var_402_object->SetNPCDescription(var_411_int);
	string var_412_string;
	func_2438(var_412_string);
	var_402_object->SetPhoto(var_412_string);
	string var_413_string;
	func_2440(var_413_string);
	var_402_object->SetPhoto2(var_413_string);
	int var_414_int;
	func_2757(var_414_int);
	var_402_object->SetPlayerName(var_414_int);
	bool var_403_bool;
	@IsOverrideActive(var_403_bool);
	if(var_403_bool != 0) {
		var_395_int = -2;
		return 8;
	}
	@DoDialog(var_402_object);
	bool var_416_bool; object var_417_object;
	object var_418_object;
	func_2249(var_418_object);
	var_418_object = var_417_object;
	func_2058(var_416_bool, var_417_object);
	object var_419_object; object var_420_object;
	var_396_object = var_419_object;
	var_402_object = var_420_object;
	TaskCall(1);
	func_81(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object);
	TaskReturn();
	bool var_405_bool;
	var_402_object->IsDialogEnd(var_405_bool);
	
	for(;;) {
		var_455_bool = !var_405_bool; //@nz
		if(var_455_bool == 0) goto Label_70;
		@sync();
		var_402_object->IsDialogEnd(var_405_bool);
	}
	
Label_70:
	object var_456_object;
	var_396_object = var_456_object;
	func_2040();
	@StopDialog(var_402_object);
	var_402_object->GetReturnValue(-1);
	int var_404_int = var_395_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2564(bool var_515_bool)
{
	int var_517_int;
	func_2276(var_517_int, "b9q01DankoAmmo");
	if(var_517_int != 0) {
		var_515_bool = true;
		return 0;
	}
	var_515_bool = false;
}


void func_2312(object var_91_object, string var_92_string, int var_93_int)
{
	object var_95_object;
	@CreateInvItem(var_95_object);
	var_95_object->SetItemName(var_92_string);
	object var_96_object; object var_97_object; int var_98_int;
	var_91_object = var_96_object;
	var_95_object = var_97_object;
	var_93_int = var_98_int;
	func_2293(var_96_object, var_97_object, var_98_int);
}
EMIT "Stack[-1] = 0";


void func_2058(bool var_121_bool, object var_122_object)
{
	int var_128_int; int var_129_int;
	@GetVariable("voice_common", var_128_int);
	if(var_128_int != 0) {
		bool var_132_bool; object var_133_object;
		var_122_object = var_133_object;
		func_2116(var_132_bool, var_133_object);
		if(!var_132_bool) { //@nz
			bool var_163_bool; object var_164_object;
			var_122_object = var_164_object;
			func_2153(var_163_bool, var_164_object);
			if(!var_163_bool) { //@nz
				var_121_bool = false;
				return 4;
			}
		}
		@irand(var_129_int, 2);
		if(var_129_int != 0)
			@SetVariable("voice_common", ((var_128_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_208_bool; object var_209_object;
		var_122_object = var_209_object;
		func_2153(var_208_bool, var_209_object);
		if(!var_208_bool) { //@nz
			bool var_211_bool; object var_212_object;
			var_122_object = var_212_object;
			func_2116(var_211_bool, var_212_object);
			if(!var_211_bool) { //@nz
				var_121_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2114;
	
Label_2114:
	var_121_bool = true;
	
}


// @pe
void func_2576(bool var_333_bool)
{
	int var_335_int;
	func_2276(var_335_int, "oob1Eva2");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


// @pe
void func_2325(bool var_46_bool, object var_47_object, float var_48_float)
{
	if(!var_47_object) { //@nz
		var_46_bool = false;
		return 0;
	}
	if(var_48_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_48_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_53_float;
		var_48_float = var_53_float;
		func_2360(var_53_float);
		bool var_57_bool; object var_58_object; float var_60_float;
		var_47_object = var_58_object;
		var_48_float = var_60_float;
		func_1925(var_57_bool, var_58_object, "reputation", var_60_float, (float)0, (float)1);
		var_46_bool = true;
		return 0;

	}
	
	var_46_bool = false;
}


void func_2040(void)
{
	bool var_268_bool;
	@CameraSwitchToNormal(true);
	bool var_270_bool;
	func_2442(var_270_bool);
	if(var_270_bool != 0) {
	} else {
		@HasAnimationTrack(var_268_bool, "head");
		if(var_268_bool == 0) goto Label_2057;
		@UnlookAsync("head");
	}
Label_2057:
	
}


// @pe
void func_2588(bool var_354_bool)
{
	int var_356_int;
	func_2276(var_356_int, "b1q01GrifToldAboutDanko");
	if(var_356_int != 0) {
		var_354_bool = true;
		return 0;
	}
	var_354_bool = false;
}


void func_290(object var_0_object, int var_279_int, object var_280_object)
{
	var_0_object = var_280_object;
	bool var_290_bool; object var_291_object;
	var_280_object = var_291_object;
	func_1971(var_290_bool, var_291_object, 70.0);
	if(!var_290_bool) { //@nz
		var_279_int = -2;
		return 8;
	}
	object var_286_object;
	@CreateDialog(var_286_object);
	int var_294_int;
	func_2436(var_294_int);
	var_286_object->SetNPCName(var_294_int);
	int var_295_int;
	func_2434(var_295_int);
	var_286_object->SetNPCDescription(var_295_int);
	string var_296_string;
	func_2438(var_296_string);
	var_286_object->SetPhoto(var_296_string);
	string var_297_string;
	func_2440(var_297_string);
	var_286_object->SetPhoto2(var_297_string);
	int var_298_int;
	func_2757(var_298_int);
	var_286_object->SetPlayerName(var_298_int);
	bool var_287_bool;
	@IsOverrideActive(var_287_bool);
	if(var_287_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	@DoDialog(var_286_object);
	bool var_300_bool; object var_301_object;
	object var_302_object;
	func_2249(var_302_object);
	var_302_object = var_301_object;
	func_2058(var_300_bool, var_301_object);
	object var_303_object; object var_304_object;
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(3);
	func_371(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	bool var_289_bool;
	var_286_object->IsDialogEnd(var_289_bool);
	
	for(;;) {
		var_391_bool = !var_289_bool; //@nz
		if(var_391_bool == 0) goto Label_360;
		@sync();
		var_286_object->IsDialogEnd(var_289_bool);
	}
	
Label_360:
	object var_392_object;
	var_280_object = var_392_object;
	func_2040();
	@StopDialog(var_286_object);
	var_286_object->GetReturnValue(-1);
	int var_288_int = var_279_int;
}
EMIT "Stack[-4] = 0";


void func_1829(void)
{
	bool var_38_bool; int var_39_int; int var_40_int; bool var_41_bool;
	@WaitForAnimEnd();
	bool var_42_bool;
	func_1966(var_42_bool);
	if(!var_42_bool) //@nz
		return 12;
	int var_44_int;
	func_2417(var_44_int);
	int var_36_int;
	var_44_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_57_bool = false;
		if(var_37_int < 5) {
			bool var_60_bool;
			func_1966(var_60_bool);
			if(var_60_bool != 0)
				var_57_bool = true;
		}
		if(var_57_bool != 0) {
			if(!var_36_int) { //@nz
				@Sleep(3, var_38_bool);
				if(!var_38_bool) { //@nz
				} else {
			} else {
			@irand(var_39_int, var_36_int);
			@irand(var_40_int, 5);
			if(var_40_int != 0)
				var_39_int = 0;
			string var_71_string; int var_72_int;
			var_39_int = var_72_int;
			func_2410(var_71_string, var_72_int);
			@PlayAnimation("all", var_71_string);
			@WaitForAnimEnd(var_41_bool);
			var_73_bool = !var_41_bool; //@nz
			if(var_73_bool == 0) goto Label_1884;
			goto Label_1895;
			}
				Label_1884:
					bool var_64_bool;
					func_1898(var_64_bool);
					var_65_bool = !var_64_bool; //@nz
					if(var_65_bool == 0) goto Label_1890;
			}
		}
	Label_1895:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1890:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_2600(bool var_362_bool, object var_363_object)
{
	object var_365_object;
	var_363_object = var_365_object;
	func_2644(var_365_object);
	bool var_364_bool;
	if(var_364_bool != 0) {
		var_362_bool = true;
		return 0;
	}
	var_362_bool = false;
}


// @pe
void func_1585(object var_2_object, string var_568_string)
{
	bool var_569_bool;
	func_2442(var_569_bool);
	if(!var_569_bool) //@nz
		return 0;
	if(var_568_string == var_2_object)
		return 0;
	string var_572_string; bool var_573_bool;
	var_568_string = var_572_string;
	if(var_568_string == "")
		var_573_bool = false;
	else
		var_573_bool = true;
	func_2212(var_572_string, var_573_bool);
	var_2_object = var_568_string;
	
}


// @pe
void func_2610(bool var_339_bool, object var_340_object)
{
	object var_342_object;
	var_340_object = var_342_object;
	func_2665(var_342_object);
	bool var_341_bool;
	if(var_341_bool != 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_2360(float var_53_float)
{
	object var_55_object;
	@CreateFloatVector(var_55_object);
	var_55_object->add(var_53_float);
	@SendWorldWndMessage(16, var_55_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2620(bool var_319_bool)
{
	int var_321_int;
	func_2276(var_321_int, "oob1Eva1");
	if(var_321_int == 0) {
		var_319_bool = true;
		return 0;
	}
	var_319_bool = false;
}


// @pe
void func_1085(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_483_object, object var_484_object)
{
	var_0_object = var_484_object;
	var_1_object = var_483_object;
	var_3_string = false;
	if(1 != 0) {
		func_1167(var_484_object, "Neutral");
		var_0_object->SetMessage(521552); //@t
		var_0_object->ClearReplies(); //@t
		bool var_499_bool;
		func_2540(var_1_object);
		if(var_499_bool != 0)
			var_0_object->AddReply(521553, 22715, 22714); //@t
		bool var_508_bool = false;
		bool var_509_bool;
		func_2552(var_1_object);
		if(var_509_bool != 0) {
			bool var_515_bool;
			func_2564(var_1_object);
			if(var_515_bool != 0)
				var_508_bool = true;
		}
		if(var_508_bool != 0)
			var_0_object->AddReply(521609, 22777, 22776); //@t
		var_0_object->AddReply(521556, -1, 22717); //@t
		goto Label_1137;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x441";
	}
Label_1137:
	bool var_527_bool;
	func_2442(var_527_bool);
	if(var_527_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2196(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1166;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1166:
		return 0;

	}
	
}


void func_2370(bool var_59_bool, string var_60_string, string var_61_string)
{
	object var_63_object;
	@FindActor(var_63_object, var_60_string);
	if(var_63_object == null)
		var_59_bool = false;
	@Trigger(var_63_object, var_61_string);
	var_59_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2116(bool var_132_bool, object var_133_object)
{
	string var_139_string; bool var_141_bool; int var_142_int; string var_143_string;
	var_139_string = "c";
	int var_140_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_133_object->HasProperty((var_139_string + (var_140_int + 1)), var_141_bool);
			if(!var_141_bool) { //@nz
			} else {
				var_140_int += 1;
			}
		}
		if(!var_140_int) { //@nz
			var_132_bool = false;
			return 10;
		}
		var_142_int = 0;
		if(var_140_int > 1)
			@irand(var_142_int, var_140_int);
		var_133_object->GetProperty((var_139_string + (var_142_int + 1)), var_143_string);
		bool var_155_bool; string var_156_string;
		var_143_string = var_156_string;
		func_2227(var_155_bool, var_156_string);
		var_155_bool = var_132_bool;
		return 10;

	}
}


// @pe
void func_836(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_216_object, object var_217_object)
{
	var_0_object = var_217_object;
	var_1_object = var_216_object;
	var_3_string = false;
	if(1 != 0) {
		func_894(var_217_object, "Fear");
		var_0_object->SetMessage(520716); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520717, 21929, 21928); //@t
		var_0_object->AddReply(520721, 21933, 21932); //@t
		goto Label_864;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x348";
	}
Label_864:
	bool var_247_bool;
	func_2442(var_247_bool);
	if(var_247_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2196(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_893;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_893:
		return 0;

	}
	
}


// @pe
void func_2632(bool var_435_bool)
{
	int var_437_int;
	func_2276(var_437_int, "oob2Eva1");
	if(var_437_int == 0) {
		var_435_bool = true;
		return 0;
	}
	var_435_bool = false;
}


void func_2382(float var_101_float)
{
	float var_103_float;
	@GetGameTime(var_103_float);
	var_103_float = var_101_float;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_419_object, object var_420_object)
{
	var_0_object = var_420_object;
	var_3_string = false;
	if(1 != 0) {
		func_144(var_420_object, "Fear");
		var_0_object->SetMessage(518278); //@t
		var_0_object->ClearReplies(); //@t
		bool var_435_bool;
		func_2632(var_419_object);
		if(var_435_bool != 0)
			var_0_object->AddReply(519444, 20613, 20612); //@t
		var_0_object->AddReply(518279, -1, 19388); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_447_bool;
	func_2442(var_447_bool);
	if(var_447_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2196(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_143;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_143:
		return 0;

	}
	
}


void func_2387(int var_176_int)
{
	float var_178_float;
	@GetGameTime(var_178_float);
	var_176_int = 1 + (var_178_float / 24);
}


// @pe
void func_2644(bool var_364_bool)
{
	bool var_366_bool = false;
	int var_367_int;
	func_2396(var_367_int);
	if(var_367_int >= 12) {
		int var_370_int;
		func_2396(var_370_int);
		if(var_370_int < 18)
			var_366_bool = true;
	}
	if(var_366_bool != 0) {
		var_364_bool = true;
		return 0;
	}
	var_364_bool = false;
}


void func_2396(int var_344_int)
{
	float var_346_float;
	@GetGameTime(var_346_float);
	int var_347_int;
	var_346_float = var_347_int;
	var_344_int = var_347_int % 24;
}


// @pe
void func_2404(bool var_276_bool, int var_277_int)
{
	int var_278_int;
	func_2387(var_278_int);
	var_276_bool = var_278_int == var_277_int;
}


void func_2153(bool var_163_bool, object var_164_object)
{
	bool var_172_bool; int var_173_int; string var_174_string;
	int var_176_int;
	func_2387(var_176_int);
	string var_170_string = ("d" + var_176_int) + "m";
	int var_171_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_164_object->HasProperty((var_170_string + (var_171_int + 1)), var_172_bool);
			if(!var_172_bool) { //@nz
			} else {
				var_171_int += 1;
			}
		}
		if(!var_171_int) { //@nz
			var_163_bool = false;
			return 10;
		}
		var_173_int = 0;
		if(var_171_int > 1)
			@irand(var_173_int, var_171_int);
		var_164_object->GetProperty((var_170_string + (var_173_int + 1)), var_174_string);
		bool var_195_bool; string var_196_string;
		var_174_string = var_196_string;
		func_2227(var_195_bool, var_196_string);
		var_195_bool = var_163_bool;
		return 10;

	}
}


// @pe
void func_2665(bool var_341_bool)
{
	bool var_343_bool = false;
	int var_344_int;
	func_2396(var_344_int);
	if(var_344_int >= 0) {
		int var_351_int;
		func_2396(var_351_int);
		if(var_351_int < 12)
			var_343_bool = true;
	}
	if(var_343_bool != 0) {
		var_341_bool = true;
		return 0;
	}
	var_341_bool = false;
}


void func_2410(string var_50_string, int var_51_int)
{
	string var_53_string = "idle";
	if(var_51_int != 0)
		var_53_string += var_51_int;
	var_53_string = var_50_string;
}


void func_1898(bool var_64_bool)
{
	var_64_bool = true;
}


void func_1900(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1905(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2417(int var_44_int)
{
	int var_47_int; bool var_48_bool;
	var_47_int = 0;
	
	for(;;) {
		string var_50_string; int var_51_int;
		var_47_int = var_51_int;
		func_2410(var_50_string, var_51_int);
		@HasAnimation(var_48_bool, "all", var_50_string);
		if(!var_48_bool) //@nz
			break;
		var_47_int += 1;
	}
	var_47_int = var_44_int;
}


// @pe
void func_371(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_303_object, object var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if(1 != 0) {
		func_489(var_304_object, "Fear");
		var_0_object->SetMessage(520203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_319_bool;
		func_2620(var_1_object);
		if(var_319_bool != 0)
			var_0_object->AddReply(520204, 21397, 21396); //@t
		bool var_330_bool = true;
		bool var_331_bool = false;
		bool var_332_bool = false;
		bool var_333_bool;
		func_2576(var_1_object);
		if(var_333_bool != 0) {
			bool var_339_bool;
			func_2610(var_339_bool, var_1_object);
			if(var_339_bool != 0)
				var_332_bool = true;
		}
		if(var_332_bool != 0) {
			bool var_354_bool;
			func_2588(var_1_object);
			if(var_354_bool != 0)
				var_331_bool = true;
		}
		if(var_331_bool != 1) {
			bool var_360_bool = false;
			bool var_361_bool = false;
			bool var_362_bool;
			func_2600(var_362_bool, var_1_object);
			if(var_362_bool != 0) {
				bool var_373_bool;
				func_2576(var_1_object);
				if(var_373_bool != 0)
					var_361_bool = true;
			}
			if(var_361_bool != 0) {
				bool var_375_bool;
				func_2588(var_1_object);
				if(var_375_bool != 0)
					var_360_bool = true;
			}
			if(var_360_bool != 1)
				var_330_bool = false;
		}
		if(var_330_bool != 0)
			var_0_object->AddReply(520211, 21404, 21403); //@t
		var_0_object->AddReply(520215, -1, 21407); //@t
		goto Label_459;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x177";
	}
Label_459:
	bool var_383_bool;
	func_2442(var_383_bool);
	if(var_383_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2196(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_488;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_488:
		return 0;

	}
	
}


void func_1653(object var_0_object)
{
	bool var_26_bool;
	func_1966(var_26_bool);
	if(!var_26_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1829();
	}
}
EMIT "Return(); Pop(0)";


void func_1913(bool var_65_bool, object var_66_object, string var_67_string)
{
	var_72_bool = IsFuncExist(var_66_object, "HasProperty", 2);
	if(!var_72_bool) { //@nz
		var_65_bool = false;
		return 2;
	}
	bool var_69_bool;
	var_66_object->HasProperty(var_67_string, var_69_bool);
	var_69_bool = var_65_bool;
}


void func_2686(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 299, 1, 521614);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_2712(var_41_bool, var_42_object, 297);
}
EMIT "Stack[-1] = 0";


// @pe
void func_894(object var_2_object, string var_223_string)
{
	bool var_224_bool;
	func_2442(var_224_bool);
	if(!var_224_bool) //@nz
		return 0;
	if(var_223_string == var_2_object)
		return 0;
	string var_227_string; bool var_228_bool;
	var_223_string = var_227_string;
	if(var_223_string == "")
		var_228_bool = false;
	else
		var_228_bool = true;
	func_2212(var_227_string, var_228_bool);
	var_2_object = var_223_string;
	
}


void func_2434(int var_109_int)
{
	var_109_int = 515533;
}


void func_1667(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1957(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2436(int var_108_int)
{
	var_108_int = 502858;
}


void func_1925(bool var_57_bool, object var_58_object, string var_59_string, float var_60_float, float var_61_float, float var_62_float)
{
	object var_66_object;
	var_58_object = var_66_object;
	string var_67_string;
	var_59_string = var_67_string;
	bool var_65_bool;
	func_1913(var_65_bool, var_66_object, var_67_string);
	if(!var_65_bool) //@nz
		var_57_bool = false;
	float var_64_float;
	var_58_object->GetProperty(var_59_string, var_64_float);
	float var_75_float; float var_77_float; float var_78_float;
	var_61_float = var_77_float;
	var_62_float = var_78_float;
	func_2265(var_75_float, (var_64_float + var_60_float), var_77_float, var_78_float);
	var_58_object->SetProperty(var_59_string, var_75_float);
	var_57_bool = true;
}


void func_2438(string var_110_string)
{
	var_110_string = "ui/NPC_Eva.png";
}


void func_2440(string var_111_string)
{
	var_111_string = "ui/NPC_Eva_b.png";
}


void func_2442(bool var_103_bool)
{
	var_103_bool = true;
}


void func_2699(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2444(void)
{
	@SetVariable("oob1Eva1", 1);
}


// @pe
void func_1167(object var_2_object, string var_490_string)
{
	bool var_491_bool;
	func_2442(var_491_bool);
	if(!var_491_bool) //@nz
		return 0;
	if(var_490_string == var_2_object)
		return 0;
	string var_494_string; bool var_495_bool;
	var_490_string = var_494_string;
	if(var_490_string == "")
		var_495_bool = false;
	else
		var_495_bool = true;
	func_2212(var_494_string, var_495_bool);
	var_2_object = var_490_string;
	
}


// @pe
void func_144(object var_2_object, string var_426_string)
{
	bool var_427_bool;
	func_2442(var_427_bool);
	if(!var_427_bool) //@nz
		return 0;
	if(var_426_string == var_2_object)
		return 0;
	string var_430_string; bool var_431_bool;
	var_426_string = var_430_string;
	if(var_426_string == "")
		var_431_bool = false;
	else
		var_431_bool = true;
	func_2212(var_430_string, var_431_bool);
	var_2_object = var_426_string;
	
}


void func_1682(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


// @pe
void func_2450(void)
{
	@SetVariable("oob2Eva1", 1);
}


void func_2196(string var_249_string)
{
	bool var_253_bool; float var_254_float; float var_255_float;
	@lshHasAnimation(var_253_bool, var_249_string);
	if(var_253_bool != 0) {
		@lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		@lshPlayAnimation(var_254_float, var_255_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_249_string);
	}
	
}


void func_1687(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1905(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2712(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_2699(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SendWorldWndMessage(7);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_2456(void)
{
	@SetVariable("oob9Eva1", 1);
}


void func_1947(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_2462(void)
{
	@SetVariable("b9q01", 2);
	func_2686();
	bool var_59_bool;
	func_2370(var_59_bool, "quest_b9_01", "place_mdoberman");
	bool var_65_bool;
	func_2370(var_65_bool, "quest_b9_01", "init_factory");
}


void func_2212(string var_227_string, bool var_228_bool)
{
	bool var_234_bool; float var_235_float; float var_236_float;
	@lshHasAnimation(var_234_bool, var_227_string);
	if(var_234_bool != 0) {
		@lshGetAnimTimes(var_227_string, var_235_float, var_236_float);
		@lshPlayAnimation(var_235_float, var_236_float, var_228_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_227_string);
	}
	
}


void func_1957(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1947(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_1446(object var_0_object, int var_537_int, object var_538_object)
{
	var_0_object = var_538_object;
	bool var_548_bool; object var_549_object;
	var_538_object = var_549_object;
	func_1971(var_548_bool, var_549_object, 70.0);
	if(!var_548_bool) { //@nz
		var_537_int = -2;
		return 8;
	}
	object var_544_object;
	@CreateDialog(var_544_object);
	int var_552_int;
	func_2436(var_552_int);
	var_544_object->SetNPCName(var_552_int);
	int var_553_int;
	func_2434(var_553_int);
	var_544_object->SetNPCDescription(var_553_int);
	string var_554_string;
	func_2438(var_554_string);
	var_544_object->SetPhoto(var_554_string);
	string var_555_string;
	func_2440(var_555_string);
	var_544_object->SetPhoto2(var_555_string);
	int var_556_int;
	func_2757(var_556_int);
	var_544_object->SetPlayerName(var_556_int);
	bool var_545_bool;
	@IsOverrideActive(var_545_bool);
	if(var_545_bool != 0) {
		var_537_int = -2;
		return 8;
	}
	@DoDialog(var_544_object);
	bool var_558_bool; object var_559_object;
	object var_560_object;
	func_2249(var_560_object);
	var_560_object = var_559_object;
	func_2058(var_558_bool, var_559_object);
	object var_561_object; object var_562_object;
	var_538_object = var_561_object;
	var_544_object = var_562_object;
	TaskCall(9);
	func_1527(var_563_object, var_564_object, var_565_string, var_566_bool, var_561_object, var_562_object);
	TaskReturn();
	bool var_547_bool;
	var_544_object->IsDialogEnd(var_547_bool);
	
	for(;;) {
		var_591_bool = !var_547_bool; //@nz
		if(var_591_bool == 0) goto Label_1516;
		@sync();
		var_544_object->IsDialogEnd(var_547_bool);
	}
	
Label_1516:
	object var_592_object;
	var_538_object = var_592_object;
	func_2040();
	@StopDialog(var_544_object);
	var_544_object->GetReturnValue(-1);
	int var_546_int = var_537_int;
}
EMIT "Stack[-4] = 0";


void func_1709(void)
{
	float var_596_float;
	@rand(var_596_float, 8, 16);
	@SetTimer(10, var_596_float);
}


void func_1966(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


// @pe
void func_2481(object var_108_object)
{
	object var_111_object;
	var_108_object = var_111_object;
	bool var_110_bool;
	func_2325(var_110_bool, var_111_object, -0.05);
}


void func_2227(bool var_155_bool, string var_156_string)
{
	bool var_158_bool;
	bool var_159_bool;
	func_2442(var_159_bool);
	if(var_159_bool != 0) {
		@lshHasSpeech(var_158_bool, var_156_string);
		if(var_158_bool != 0) {
			@lshPlaySpeech(var_156_string);
			var_155_bool = true;
		}
	}
	var_155_bool = false;
}


void func_2740(object var_90_object)
{
	object var_93_object; object var_94_object;
	@GetMainOutdoorScene(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find main outdoor scene");
		var_94_object = null;
		var_94_object = var_90_object;
	}
	var_93_object->GetMap(var_94_object);
	var_94_object = var_90_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1971(bool var_60_bool, object var_61_object, float var_62_float)
{
	cvector var_73_cvector; bool var_80_bool;
	var_61_object->GetPosition(var_73_cvector);
	float var_72_float;
	var_61_object->GetEyesHeight(var_72_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (var_81_float + var_72_float);
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	@GetEyesHeight(var_72_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	SetByIndex(var_74_cvector, 1) = (var_82_float + var_72_float);
	cvector var_75_cvector = var_73_cvector - var_74_cvector;
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (float)0;
	var_85_float = sqrt(var_75_cvector | var_75_cvector);
	var_75_cvector /= var_85_float;
	cvector var_76_cvector = -var_75_cvector;
	cvector var_87_cvector;
	func_2255(var_87_cvector, (var_76_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_77_cvector = ((var_75_cvector * var_62_float) + (var_87_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_79_bool;
	@IsOverrideActive(var_79_bool);
	if(var_79_bool != 0)
		var_60_bool = false;
	@StopWorld();
	@CameraTransit((var_74_cvector + var_77_cvector), var_76_cvector, true);
	var_101_float = GetByIndex(var_77_cvector, 0);
	var_102_float = GetByIndex(var_77_cvector, 2);
	@Rotate(var_101_float, var_102_float);
	bool var_103_bool;
	func_2442(var_103_bool);
	if(var_103_bool != 0) {
	} else {
		@HasAnimationTrack(var_80_bool, "head");
		if(var_80_bool == 0) goto Label_2034;
		@LookAsyncCamera("head");
	}
Label_2034:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_60_bool = true;
	
}


void func_1718(void)
{
	@KillTimer(10);
}


// @pe
void func_2488(void)
{
	@SetVariable("oob1Eva2", 1);
}


void func_2494(void)
{
	object var_90_object;
	func_2740(var_90_object);
	object var_89_object;
	var_90_object = var_89_object;
	float var_101_float;
	func_2382(var_101_float);
	var_89_object->AddMark("b1q01BakWillBeAt18", "pt_map_eva", 3, 524806, var_101_float);
}
EMIT "Stack[-1] = 0";


void func_2242(void)
{
	bool var_29_bool;
	func_2442(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2757(int var_112_int)
{
	int var_114_int;
	@GetVariable("branch", var_114_int);
	if(var_114_int == 0) {
		var_112_int = 1;
		return 2;
	EMIT "GOTO 0xad4";
	}
	if(var_114_int == 1) {
		var_112_int = 2;
		return 2;
	}
	var_112_int = 3;
}


void func_2249(object var_123_object)
{
	object var_125_object;
	@self(var_125_object);
	var_125_object = var_123_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2510(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2255(cvector var_87_cvector, cvector var_88_cvector)
{
	float var_91_float = sqrt(var_88_cvector | var_88_cvector);
	if(var_91_float < 0.000001)
		var_87_cvector = [0.0, 0.0, 0.0];
	var_87_cvector = var_88_cvector / var_91_float;
}


// @pe
void func_2516(object var_88_object)
{
	@Trace("rifle ammo30 is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_2312(var_91_object, "rifle_ammo", 30);
}


void func_2774(object var_44_object)
{
	int var_46_int;
	@GetVariable("mt_eva", var_46_int);
	if(!var_46_int) { //@nz
		int var_49_int; object var_50_object;
		var_44_object = var_50_object;
		TaskCall(4);
		func_755(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		@SetVariable("mt_eva", 1);
	}
	bool var_276_bool;
	func_2404(var_276_bool, 1);
	if(var_276_bool != 0) {
		int var_279_int; object var_280_object;
		var_44_object = var_280_object;
		TaskCall(2);
		func_290(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 2;
	}
	bool var_393_bool;
	func_2404(var_393_bool, 2);
	if(var_393_bool != 0) {
		int var_395_int; object var_396_object;
		var_44_object = var_396_object;
		TaskCall(0);
		func_0(var_397_object, var_395_int, var_396_object);
		TaskReturn();
		return 2;
	}
	bool var_457_bool;
	func_2404(var_457_bool, 9);
	if(var_457_bool != 0) {
		int var_459_int; object var_460_object;
		var_44_object = var_460_object;
		TaskCall(6);
		func_1004(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 2;
	}
	int var_537_int; object var_538_object;
	var_44_object = var_538_object;
	TaskCall(8);
	func_1446(var_539_object, var_537_int, var_538_object);
	TaskReturn();
}


// @pe
void func_2265(float var_75_float, float var_76_float, float var_77_float, float var_78_float)
{
	if(var_76_float < var_77_float) {
		var_77_float = var_75_float;
		return 0;
	}
	if(var_76_float > var_78_float) {
		var_78_float = var_75_float;
		return 0;
	}
	var_76_float = var_75_float;
}


// @pe
void func_2527(object var_44_object)
{
	object var_47_object;
	var_44_object = var_47_object;
	bool var_46_bool;
	func_2325(var_46_bool, var_47_object, -0.02);
}


void func_2276(int var_321_int, string var_322_string)
{
	int var_324_int;
	@GetVariable(var_322_string, var_324_int);
	var_324_int = var_321_int;
}


// @pe
void func_2534(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_2281(int var_107_int, int var_108_int)
{
	object var_110_object;
	@CreateIntVector(var_110_object);
	var_110_object->add(var_107_int);
	var_110_object->add(var_108_int);
	@SendWorldWndMessage(3, var_110_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_489(object var_2_object, string var_310_string)
{
	bool var_311_bool;
	func_2442(var_311_bool);
	if(!var_311_bool) //@nz
		return 0;
	if(var_310_string == var_2_object)
		return 0;
	string var_314_string; bool var_315_bool;
	var_310_string = var_314_string;
	if(var_310_string == "")
		var_315_bool = false;
	else
		var_315_bool = true;
	func_2212(var_314_string, var_315_bool);
	var_2_object = var_310_string;
	
}


// @pe
void func_2540(bool var_499_bool)
{
	int var_501_int;
	func_2276(var_501_int, "b9q01");
	if(var_501_int == 1)
		var_499_bool = true;
	var_499_bool = false;
}


void func_1004(object var_0_object, int var_459_int, object var_460_object)
{
	var_0_object = var_460_object;
	bool var_470_bool; object var_471_object;
	var_460_object = var_471_object;
	func_1971(var_470_bool, var_471_object, 70.0);
	if(!var_470_bool) { //@nz
		var_459_int = -2;
		return 8;
	}
	object var_466_object;
	@CreateDialog(var_466_object);
	int var_474_int;
	func_2436(var_474_int);
	var_466_object->SetNPCName(var_474_int);
	int var_475_int;
	func_2434(var_475_int);
	var_466_object->SetNPCDescription(var_475_int);
	string var_476_string;
	func_2438(var_476_string);
	var_466_object->SetPhoto(var_476_string);
	string var_477_string;
	func_2440(var_477_string);
	var_466_object->SetPhoto2(var_477_string);
	int var_478_int;
	func_2757(var_478_int);
	var_466_object->SetPlayerName(var_478_int);
	bool var_467_bool;
	@IsOverrideActive(var_467_bool);
	if(var_467_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	@DoDialog(var_466_object);
	bool var_480_bool; object var_481_object;
	object var_482_object;
	func_2249(var_482_object);
	var_482_object = var_481_object;
	func_2058(var_480_bool, var_481_object);
	object var_483_object; object var_484_object;
	var_460_object = var_483_object;
	var_466_object = var_484_object;
	TaskCall(7);
	func_1085(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object);
	TaskReturn();
	bool var_469_bool;
	var_466_object->IsDialogEnd(var_469_bool);
	
	for(;;) {
		var_535_bool = !var_469_bool; //@nz
		if(var_535_bool == 0) goto Label_1074;
		@sync();
		var_466_object->IsDialogEnd(var_469_bool);
	}
	
Label_1074:
	object var_536_object;
	var_460_object = var_536_object;
	func_2040();
	@StopDialog(var_466_object);
	var_466_object->GetReturnValue(-1);
	int var_468_int = var_459_int;
}
EMIT "Stack[-4] = 0";


void func_755(object var_0_object, int var_49_int, object var_50_object)
{
	var_0_object = var_50_object;
	bool var_60_bool; object var_61_object;
	var_50_object = var_61_object;
	func_1971(var_60_bool, var_61_object, 70.0);
	if(!var_60_bool) { //@nz
		var_49_int = -2;
		return 8;
	}
	object var_56_object;
	@CreateDialog(var_56_object);
	int var_108_int;
	func_2436(var_108_int);
	var_56_object->SetNPCName(var_108_int);
	int var_109_int;
	func_2434(var_109_int);
	var_56_object->SetNPCDescription(var_109_int);
	string var_110_string;
	func_2438(var_110_string);
	var_56_object->SetPhoto(var_110_string);
	string var_111_string;
	func_2440(var_111_string);
	var_56_object->SetPhoto2(var_111_string);
	int var_112_int;
	func_2757(var_112_int);
	var_56_object->SetPlayerName(var_112_int);
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	@DoDialog(var_56_object);
	bool var_121_bool; object var_122_object;
	object var_123_object;
	func_2249(var_123_object);
	var_123_object = var_122_object;
	func_2058(var_121_bool, var_122_object);
	object var_216_object; object var_217_object;
	var_50_object = var_216_object;
	var_56_object = var_217_object;
	TaskCall(5);
	func_836(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object);
	TaskReturn();
	bool var_59_bool;
	var_56_object->IsDialogEnd(var_59_bool);
	
	for(;;) {
		var_265_bool = !var_59_bool; //@nz
		if(var_265_bool == 0) goto Label_825;
		@sync();
		var_56_object->IsDialogEnd(var_59_bool);
	}
	
Label_825:
	object var_266_object;
	var_50_object = var_266_object;
	func_2040();
	@StopDialog(var_56_object);
	var_56_object->GetReturnValue(-1);
	int var_58_int = var_49_int;
}
EMIT "Stack[-4] = 0";


void func_2293(object var_96_object, object var_97_object, int var_98_int)
{
	int var_102_int;
	var_97_object->GetItemID(var_102_int);
	int var_103_int;
	@GetInvItemProperty(var_103_int, var_102_int, "Category");
	bool var_104_bool;
	var_96_object->AddItem(var_104_bool, var_97_object, var_103_int, var_98_int);
	if(!var_104_bool) { //@nz
		var_96_object->DropItems(var_97_object, var_98_int);
	} else {
		int var_107_int; int var_108_int;
		var_102_int = var_107_int;
		var_98_int = var_108_int;
		func_2281(var_107_int, var_108_int);
	}
	
}


// @pe
void func_1527(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_561_object, object var_562_object)
{
	var_0_object = var_562_object;
	var_1_object = var_561_object;
	var_3_string = false;
	if(1 != 0) {
		func_1585(var_562_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1555;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5fb";
	}
Label_1555:
	bool var_583_bool;
	func_2442(var_583_bool);
	if(var_583_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2196(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1584;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1584:
		return 0;

	}
	
}


// @pe
void func_2552(bool var_509_bool)
{
	int var_511_int;
	func_2276(var_511_int, "oob9Eva1");
	if(var_511_int == 0) {
		var_509_bool = true;
		return 0;
	}
	var_509_bool = false;
}


