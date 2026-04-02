// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2245();
			if(var_27_cvector == 20612) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2453();
			}
			if(var_26_bool == 19387) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(518278); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_2635(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(519444, 20613, 20612); //@t
				var_0_object->AddReply(518279, -1, 19388); //@t
				return 0;
			}
			if(var_26_bool == 20613) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519445); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519446, 20615, 20614); //@t
				var_0_object->AddReply(519450, 20620, 20618); //@t
				return 0;
			}
			if(var_26_bool == 20615) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519451, 20620, 20619); //@t
				var_0_object->AddReply(519453, 20620, 20622); //@t
				return 0;
			}
			if(var_26_bool == 20620) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519448, -1, 20616); //@t
				var_0_object->AddReply(519449, -1, 20617); //@t
				return 0;
			}
			var_3_string = true;
			bool var_95_bool;
			func_2445(var_95_bool);
			if(var_95_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2245();
			if(var_27_cvector == 21396) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2447();
			}
			if(var_27_cvector == 21402) {
				object var_38_object = var_1_object;
				func_2530(var_0_object);
			}
			if(var_27_cvector == 21403) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_2491();
			}
			if(var_27_cvector == 21405) {
				object var_86_object = var_1_object;
				func_2530(var_0_object);
			}
			if(var_27_cvector == 26115) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_2497();
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_2537();
				object var_112_object = var_1_object;
				func_2484(var_0_object);
			}
			if(var_27_cvector == 21406) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_2497();
				object var_121_object; object var_122_object;
				var_121_object = var_1_object;
				var_122_object = var_0_object;
				func_2537();
			}
			if(var_26_bool == 21395) {
				func_502(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_138_bool;
				func_2623(var_1_object);
				if(var_138_bool != 0)
					var_0_object->AddReply(520204, 21397, 21396); //@t
				bool var_149_bool = true;
				bool var_150_bool = false;
				bool var_151_bool = false;
				bool var_152_bool;
				func_2579(var_1_object);
				if(var_152_bool != 0) {
					bool var_158_bool;
					func_2613(var_158_bool, var_1_object);
					if(var_158_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0) {
					bool var_173_bool;
					func_2591(var_1_object);
					if(var_173_bool != 0)
						var_150_bool = true;
				}
				if(var_150_bool != 1) {
					bool var_179_bool = false;
					bool var_180_bool = false;
					bool var_181_bool;
					func_2603(var_181_bool, var_1_object);
					if(var_181_bool != 0) {
						bool var_192_bool;
						func_2579(var_1_object);
						if(var_192_bool != 0)
							var_180_bool = true;
					}
					if(var_180_bool != 0) {
						bool var_194_bool;
						func_2591(var_1_object);
						if(var_194_bool != 0)
							var_179_bool = true;
					}
					if(var_179_bool != 1)
						var_149_bool = false;
				}
				if(var_149_bool != 0)
					var_0_object->AddReply(520211, 21404, 21403); //@t
				var_0_object->AddReply(520215, -1, 21407); //@t
				return 0;
			}
			if(var_26_bool == 21404) {
				func_502(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520213, 26114, 21405); //@t
				var_0_object->AddReply(520214, -1, 21406); //@t
				return 0;
			}
			if(var_26_bool == 26114) {
				func_502(var_27_cvector, "Neutral");
				var_0_object->SetMessage(524804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524805, -1, 26115); //@t
				return 0;
			}
			if(var_26_bool == 21397) {
				var_0_object->SetMessage(520205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520206, 21399, 21398); //@t
				var_0_object->AddReply(520210, -1, 21402); //@t
				return 0;
			}
			if(var_26_bool == 21399) {
				func_502(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520208, -1, 21400); //@t
				var_0_object->AddReply(520209, -1, 21401); //@t
				return 0;
			}
			var_3_string = true;
			bool var_238_bool;
			func_2445(var_238_bool);
			if(var_238_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20d";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2245();
			if(var_26_bool == 21927) {
				func_911(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520716); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520717, 21929, 21928); //@t
				var_0_object->AddReply(520721, 21933, 21932); //@t
				return 0;
			}
			if(var_26_bool == 21933) {
				func_911(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520723, -1, 21934); //@t
				var_0_object->AddReply(520724, -1, 21935); //@t
				return 0;
			}
			if(var_26_bool == 21929) {
				func_911(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520719, -1, 21930); //@t
				var_0_object->AddReply(520720, -1, 21931); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_2445(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3a6";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2245();
			if(var_27_cvector == 23411) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2465();
			}
			if(var_27_cvector == 23412) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_2465();
			}
			if(var_27_cvector == 22716) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2465();
			}
			if(var_27_cvector == 22776) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_2459();
			}
			if(var_27_cvector == 22778) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_2513();
				object var_88_object = var_1_object;
				func_2519(var_0_object);
			}
			if(var_26_bool == 22713) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521552); //@t
				var_0_object->ClearReplies(); //@t
				bool var_127_bool;
				func_2543(var_1_object);
				if(var_127_bool != 0)
					var_0_object->AddReply(521553, 22715, 22714); //@t
				bool var_138_bool = false;
				bool var_139_bool;
				func_2555(var_1_object);
				if(var_139_bool != 0) {
					bool var_145_bool;
					func_2567(var_1_object);
					if(var_145_bool != 0)
						var_138_bool = true;
				}
				if(var_138_bool != 0)
					var_0_object->AddReply(521609, 22777, 22776); //@t
				var_0_object->AddReply(521556, -1, 22717); //@t
				return 0;
			}
			if(var_26_bool == 22777) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522261, 23414, 23413); //@t
				return 0;
			}
			if(var_26_bool == 23414) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522262); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522263, 23418, 23415); //@t
				var_0_object->AddReply(522264, 23417, 23416); //@t
				return 0;
			}
			if(var_26_bool == 23417) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522265); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522269, 23418, 23421); //@t
				var_0_object->AddReply(522271, -1, 23423); //@t
				return 0;
			}
			if(var_26_bool == 23418) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522267, 23420, 23419); //@t
				return 0;
			}
			if(var_26_bool == 23420) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521611, -1, 22778); //@t
				return 0;
			}
			if(var_26_bool == 22715) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522257, 23410, 23409); //@t
				var_0_object->AddReply(521555, -1, 22716); //@t
				return 0;
			}
			if(var_26_bool == 23410) {
				func_1184(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522259, -1, 23411); //@t
				var_0_object->AddReply(522260, -1, 23412); //@t
				return 0;
			}
			var_3_string = true;
			bool var_218_bool;
			func_2445(var_218_bool);
			if(var_218_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4b7";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2245();
			if(var_26_int == 42560) {
				func_1602(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2445(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x659";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1670(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_1741();
			bool var_30_bool = false;
			bool var_31_bool;
			func_1989(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_1710(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_1690(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2252(var_72_object);
					var_72_object = var_71_object;
					func_2137(var_70_bool, var_71_object);
				}
			} else {
				func_1705(var_26_int);
				func_1732();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_1923();
		func_1741();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_1741();
		func_2217("Neutral");
		func_1732();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_1732();
		else
			func_2217("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_1923();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_1980(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2777(var_44_object);
			func_2217("Neutral");
			func_1741();
			func_1732();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_1989(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


void func_772(object var_0_object, int var_49_int, object var_50_object)
{
	var_0_object = var_50_object;
	bool var_60_bool; object var_61_object;
	object var_62_object;
	func_2252(var_62_object);
	var_62_object = var_61_object;
	func_2079(var_60_bool, var_61_object);
	bool var_155_bool; object var_156_object;
	var_50_object = var_156_object;
	func_1994(var_155_bool, var_156_object, 70.0);
	if(!var_155_bool) { //@nz
		var_49_int = -2;
		return 8;
	}
	object var_56_object;
	@CreateDialog(var_56_object);
	int var_202_int;
	func_2439(var_202_int);
	var_56_object->SetNPCName(var_202_int);
	int var_203_int;
	func_2437(var_203_int);
	var_56_object->SetNPCDescription(var_203_int);
	string var_204_string;
	func_2441(var_204_string);
	var_56_object->SetPhoto(var_204_string);
	string var_205_string;
	func_2443(var_205_string);
	var_56_object->SetPhoto2(var_205_string);
	int var_206_int;
	func_2760(var_206_int);
	var_56_object->SetPlayerName(var_206_int);
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	@DoDialog(var_56_object);
	object var_215_object; object var_216_object;
	var_50_object = var_215_object;
	var_56_object = var_216_object;
	TaskCall(6);
	func_853(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object);
	TaskReturn();
	bool var_59_bool;
	var_56_object->IsDialogEnd(var_59_bool);
	
	for(;;) {
		var_254_bool = !var_59_bool; //@nz
		if(var_254_bool == 0) goto Label_842;
		@sync();
		var_56_object->IsDialogEnd(var_59_bool);
	}
	
Label_842:
	object var_255_object;
	var_50_object = var_255_object;
	func_2062();
	@StopDialog(var_56_object);
	var_56_object->GetReturnValue(-1);
	int var_58_int = var_49_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2567(bool var_503_bool)
{
	int var_505_int;
	func_2279(var_505_int, "b9q01DankoAmmo");
	if(var_505_int != 0) {
		var_503_bool = true;
		return 0;
	}
	var_503_bool = false;
}


// @pe
void func_1544(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_549_object, object var_550_object)
{
	var_0_object = var_550_object;
	var_1_object = var_549_object;
	var_3_string = false;
	if(1 != 0) {
		func_1602(var_550_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1572;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x60c";
	}
Label_1572:
	bool var_571_bool;
	func_2445(var_571_bool);
	if(var_571_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2217(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1601;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1601:
		return 0;

	}
	
}


void func_2315(object var_91_object, string var_92_string, int var_93_int)
{
	object var_95_object;
	@CreateInvItem(var_95_object);
	var_95_object->SetItemName(var_92_string);
	object var_96_object; object var_97_object; int var_98_int;
	var_91_object = var_96_object;
	var_95_object = var_97_object;
	var_93_int = var_98_int;
	func_2296(var_96_object, var_97_object, var_98_int);
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_383_int, object var_384_object)
{
	var_0_object = var_384_object;
	bool var_394_bool; object var_395_object;
	object var_396_object;
	func_2252(var_396_object);
	var_396_object = var_395_object;
	func_2079(var_394_bool, var_395_object);
	bool var_397_bool; object var_398_object;
	var_384_object = var_398_object;
	func_1994(var_397_bool, var_398_object, 70.0);
	if(!var_397_bool) { //@nz
		var_383_int = -2;
		return 8;
	}
	object var_390_object;
	@CreateDialog(var_390_object);
	int var_401_int;
	func_2439(var_401_int);
	var_390_object->SetNPCName(var_401_int);
	int var_402_int;
	func_2437(var_402_int);
	var_390_object->SetNPCDescription(var_402_int);
	string var_403_string;
	func_2441(var_403_string);
	var_390_object->SetPhoto(var_403_string);
	string var_404_string;
	func_2443(var_404_string);
	var_390_object->SetPhoto2(var_404_string);
	int var_405_int;
	func_2760(var_405_int);
	var_390_object->SetPlayerName(var_405_int);
	bool var_391_bool;
	@IsOverrideActive(var_391_bool);
	if(var_391_bool != 0) {
		var_383_int = -2;
		return 8;
	}
	@DoDialog(var_390_object);
	object var_407_object; object var_408_object;
	var_384_object = var_407_object;
	var_390_object = var_408_object;
	TaskCall(2);
	func_94(var_409_object, var_410_object, var_411_string, var_412_bool, var_407_object, var_408_object);
	TaskReturn();
	bool var_393_bool;
	var_390_object->IsDialogEnd(var_393_bool);
	
	for(;;) {
		var_443_bool = !var_393_bool; //@nz
		if(var_443_bool == 0) goto Label_83;
		@sync();
		var_390_object->IsDialogEnd(var_393_bool);
	}
	
Label_83:
	object var_444_object;
	var_384_object = var_444_object;
	func_2062();
	@StopDialog(var_390_object);
	var_390_object->GetReturnValue(-1);
	int var_392_int = var_383_int;
}
EMIT "Stack[-4] = 0";


void func_2062(void)
{
	bool var_257_bool;
	@CameraSwitchToNormal();
	bool var_258_bool;
	func_2445(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		@HasAnimationTrack(var_257_bool, "head");
		if(var_257_bool == 0) goto Label_2078;
		@UnlookAsync("head");
	}
Label_2078:
	
}


// @pe
void func_2579(bool var_321_bool)
{
	int var_323_int;
	func_2279(var_323_int, "oob1Eva2");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_2328(bool var_40_bool, object var_41_object, float var_42_float)
{
	if(!var_41_object) { //@nz
		var_40_bool = false;
		return 0;
	}
	if(var_42_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_42_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_47_float;
		var_42_float = var_47_float;
		func_2363(var_47_float);
		bool var_51_bool; object var_52_object; float var_54_float;
		var_41_object = var_52_object;
		var_42_float = var_54_float;
		func_1948(var_51_bool, var_52_object, "reputation", var_54_float, (float)0, (float)1);
		var_40_bool = true;
		return 0;

	}
	
	var_40_bool = false;
}


// @pe
void func_2591(bool var_342_bool)
{
	int var_344_int;
	func_2279(var_344_int, "b1q01GrifToldAboutDanko");
	if(var_344_int != 0) {
		var_342_bool = true;
		return 0;
	}
	var_342_bool = false;
}


void func_2079(bool var_60_bool, object var_61_object)
{
	int var_67_int; int var_68_int;
	@GetVariable("voice_common", var_67_int);
	if(var_67_int != 0) {
		bool var_71_bool; object var_72_object;
		var_61_object = var_72_object;
		func_2137(var_71_bool, var_72_object);
		if(!var_71_bool) { //@nz
			bool var_102_bool; object var_103_object;
			var_61_object = var_103_object;
			func_2174(var_102_bool, var_103_object);
			if(!var_102_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@irand(var_68_int, 2);
		if(var_68_int != 0)
			@SetVariable("voice_common", ((var_67_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_147_bool; object var_148_object;
		var_61_object = var_148_object;
		func_2174(var_147_bool, var_148_object);
		if(!var_147_bool) { //@nz
			bool var_150_bool; object var_151_object;
			var_61_object = var_151_object;
			func_2137(var_150_bool, var_151_object);
			if(!var_150_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2135;
	
Label_2135:
	var_60_bool = true;
	
}


// @pe
void func_2603(bool var_350_bool, object var_351_object)
{
	object var_353_object;
	var_351_object = var_353_object;
	func_2647(var_353_object);
	bool var_352_bool;
	if(var_352_bool != 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


void func_303(object var_0_object, int var_267_int, object var_268_object)
{
	var_0_object = var_268_object;
	bool var_278_bool; object var_279_object;
	object var_280_object;
	func_2252(var_280_object);
	var_280_object = var_279_object;
	func_2079(var_278_bool, var_279_object);
	bool var_281_bool; object var_282_object;
	var_268_object = var_282_object;
	func_1994(var_281_bool, var_282_object, 70.0);
	if(!var_281_bool) { //@nz
		var_267_int = -2;
		return 8;
	}
	object var_274_object;
	@CreateDialog(var_274_object);
	int var_285_int;
	func_2439(var_285_int);
	var_274_object->SetNPCName(var_285_int);
	int var_286_int;
	func_2437(var_286_int);
	var_274_object->SetNPCDescription(var_286_int);
	string var_287_string;
	func_2441(var_287_string);
	var_274_object->SetPhoto(var_287_string);
	string var_288_string;
	func_2443(var_288_string);
	var_274_object->SetPhoto2(var_288_string);
	int var_289_int;
	func_2760(var_289_int);
	var_274_object->SetPlayerName(var_289_int);
	bool var_275_bool;
	@IsOverrideActive(var_275_bool);
	if(var_275_bool != 0) {
		var_267_int = -2;
		return 8;
	}
	@DoDialog(var_274_object);
	object var_291_object; object var_292_object;
	var_268_object = var_291_object;
	var_274_object = var_292_object;
	TaskCall(4);
	func_384(var_293_object, var_294_object, var_295_string, var_296_bool, var_291_object, var_292_object);
	TaskReturn();
	bool var_277_bool;
	var_274_object->IsDialogEnd(var_277_bool);
	
	for(;;) {
		var_379_bool = !var_277_bool; //@nz
		if(var_379_bool == 0) goto Label_373;
		@sync();
		var_274_object->IsDialogEnd(var_277_bool);
	}
	
Label_373:
	object var_380_object;
	var_268_object = var_380_object;
	func_2062();
	@StopDialog(var_274_object);
	var_274_object->GetReturnValue(-1);
	int var_276_int = var_267_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2613(bool var_327_bool, object var_328_object)
{
	object var_330_object;
	var_328_object = var_330_object;
	func_2668(var_330_object);
	bool var_329_bool;
	if(var_329_bool != 0) {
		var_327_bool = true;
		return 0;
	}
	var_327_bool = false;
}


void func_2363(float var_47_float)
{
	object var_49_object;
	@CreateFloatVector(var_49_object);
	var_49_object->add(var_47_float);
	@SendWorldWndMessage(16, var_49_object);
}
EMIT "Stack[-1] = 0";


void func_1852(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_1989(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_2420(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_1989(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_2413(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_1907;
			goto Label_1918;
			}
				Label_1907:
					bool var_78_bool;
					func_1921(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_1913;
			}
		}
	Label_1918:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1913:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


// @pe
void func_2623(bool var_307_bool)
{
	int var_309_int;
	func_2279(var_309_int, "oob1Eva1");
	if(var_309_int == 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


// @pe
void func_1602(object var_2_object, string var_556_string)
{
	bool var_557_bool;
	func_2445(var_557_bool);
	if(!var_557_bool) //@nz
		return 0;
	if(var_556_string == var_2_object)
		return 0;
	string var_560_string; bool var_561_bool;
	var_556_string = var_560_string;
	if(var_556_string == "")
		var_561_bool = false;
	else
		var_561_bool = true;
	func_2224(var_560_string, var_561_bool);
	var_2_object = var_556_string;
	
}


void func_2373(bool var_59_bool, string var_60_string, string var_61_string)
{
	object var_63_object;
	@FindActor(var_63_object, var_60_string);
	if(var_63_object == null)
		var_59_bool = false;
	@Trigger(var_63_object, var_61_string);
	var_59_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2635(bool var_423_bool)
{
	int var_425_int;
	func_2279(var_425_int, "oob2Eva1");
	if(var_425_int == 0) {
		var_423_bool = true;
		return 0;
	}
	var_423_bool = false;
}


// @pe
void func_1102(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_471_object, object var_472_object)
{
	var_0_object = var_472_object;
	var_1_object = var_471_object;
	var_3_string = false;
	if(1 != 0) {
		func_1184(var_472_object, "Neutral");
		var_0_object->SetMessage(521552); //@t
		var_0_object->ClearReplies(); //@t
		bool var_487_bool;
		func_2543(var_1_object);
		if(var_487_bool != 0)
			var_0_object->AddReply(521553, 22715, 22714); //@t
		bool var_496_bool = false;
		bool var_497_bool;
		func_2555(var_1_object);
		if(var_497_bool != 0) {
			bool var_503_bool;
			func_2567(var_1_object);
			if(var_503_bool != 0)
				var_496_bool = true;
		}
		if(var_496_bool != 0)
			var_0_object->AddReply(521609, 22777, 22776); //@t
		var_0_object->AddReply(521556, -1, 22717); //@t
		goto Label_1154;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x452";
	}
Label_1154:
	bool var_515_bool;
	func_2445(var_515_bool);
	if(var_515_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2217(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1183;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1183:
		return 0;

	}
	
}


void func_2385(float var_105_float)
{
	float var_107_float;
	@GetGameTime(var_107_float);
	var_107_float = var_105_float;
}


// @pe
void func_853(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_215_object, object var_216_object)
{
	var_0_object = var_216_object;
	var_1_object = var_215_object;
	var_3_string = false;
	if(1 != 0) {
		func_911(var_216_object, "Neutral");
		var_0_object->SetMessage(520716); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520717, 21929, 21928); //@t
		var_0_object->AddReply(520721, 21933, 21932); //@t
		goto Label_881;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x359";
	}
Label_881:
	bool var_241_bool;
	func_2445(var_241_bool);
	if(var_241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2217(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_910;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_910:
		return 0;

	}
	
}


void func_2390(int var_115_int)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_115_int = 1 + (var_117_float / 24);
}


// @pe
void func_2647(bool var_352_bool)
{
	bool var_354_bool = false;
	int var_355_int;
	func_2399(var_355_int);
	if(var_355_int >= 12) {
		int var_358_int;
		func_2399(var_358_int);
		if(var_358_int < 18)
			var_354_bool = true;
	}
	if(var_354_bool != 0) {
		var_352_bool = true;
		return 0;
	}
	var_352_bool = false;
}


void func_2137(bool var_71_bool, object var_72_object)
{
	string var_78_string; bool var_80_bool; int var_81_int; string var_82_string;
	var_78_string = "c";
	int var_79_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_72_object->HasProperty((var_78_string + (var_79_int + 1)), var_80_bool);
			if(!var_80_bool) { //@nz
			} else {
				var_79_int += 1;
			}
		}
		if(!var_79_int) { //@nz
			var_71_bool = false;
			return 10;
		}
		var_81_int = 0;
		if(var_79_int > 1)
			@irand(var_81_int, var_79_int);
		var_72_object->GetProperty((var_78_string + (var_81_int + 1)), var_82_string);
		bool var_94_bool; string var_95_string;
		var_82_string = var_95_string;
		func_2230(var_94_bool, var_95_string);
		var_94_bool = var_71_bool;
		return 10;

	}
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_407_object, object var_408_object)
{
	var_0_object = var_408_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_408_object, "Neutral");
		var_0_object->SetMessage(518278); //@t
		var_0_object->ClearReplies(); //@t
		bool var_423_bool;
		func_2635(var_407_object);
		if(var_423_bool != 0)
			var_0_object->AddReply(519444, 20613, 20612); //@t
		var_0_object->AddReply(518279, -1, 19388); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_435_bool;
	func_2445(var_435_bool);
	if(var_435_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2217(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_2399(int var_332_int)
{
	float var_334_float;
	@GetGameTime(var_334_float);
	int var_335_int;
	var_334_float = var_335_int;
	var_332_int = var_335_int % 24;
}


// @pe
void func_2407(bool var_264_bool, int var_265_int)
{
	int var_266_int;
	func_2390(var_266_int);
	var_264_bool = var_266_int == var_265_int;
}


// @pe
void func_2668(bool var_329_bool)
{
	bool var_331_bool = false;
	int var_332_int;
	func_2399(var_332_int);
	if(var_332_int >= 0) {
		int var_339_int;
		func_2399(var_339_int);
		if(var_339_int < 12)
			var_331_bool = true;
	}
	if(var_331_bool != 0) {
		var_329_bool = true;
		return 0;
	}
	var_329_bool = false;
}


void func_2413(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_2420(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_2413(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_2174(bool var_102_bool, object var_103_object)
{
	bool var_111_bool; int var_112_int; string var_113_string;
	int var_115_int;
	func_2390(var_115_int);
	string var_109_string = ("d" + var_115_int) + "m";
	int var_110_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_103_object->HasProperty((var_109_string + (var_110_int + 1)), var_111_bool);
			if(!var_111_bool) { //@nz
			} else {
				var_110_int += 1;
			}
		}
		if(!var_110_int) { //@nz
			var_102_bool = false;
			return 10;
		}
		var_112_int = 0;
		if(var_110_int > 1)
			@irand(var_112_int, var_110_int);
		var_103_object->GetProperty((var_109_string + (var_112_int + 1)), var_113_string);
		bool var_134_bool; string var_135_string;
		var_113_string = var_135_string;
		func_2230(var_134_bool, var_135_string);
		var_134_bool = var_102_bool;
		return 10;

	}
}


// @pe
void func_384(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_291_object, object var_292_object)
{
	var_0_object = var_292_object;
	var_1_object = var_291_object;
	var_3_string = false;
	if(1 != 0) {
		func_502(var_292_object, "Neutral");
		var_0_object->SetMessage(520203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_307_bool;
		func_2623(var_1_object);
		if(var_307_bool != 0)
			var_0_object->AddReply(520204, 21397, 21396); //@t
		bool var_318_bool = true;
		bool var_319_bool = false;
		bool var_320_bool = false;
		bool var_321_bool;
		func_2579(var_1_object);
		if(var_321_bool != 0) {
			bool var_327_bool;
			func_2613(var_327_bool, var_1_object);
			if(var_327_bool != 0)
				var_320_bool = true;
		}
		if(var_320_bool != 0) {
			bool var_342_bool;
			func_2591(var_1_object);
			if(var_342_bool != 0)
				var_319_bool = true;
		}
		if(var_319_bool != 1) {
			bool var_348_bool = false;
			bool var_349_bool = false;
			bool var_350_bool;
			func_2603(var_350_bool, var_1_object);
			if(var_350_bool != 0) {
				bool var_361_bool;
				func_2579(var_1_object);
				if(var_361_bool != 0)
					var_349_bool = true;
			}
			if(var_349_bool != 0) {
				bool var_363_bool;
				func_2591(var_1_object);
				if(var_363_bool != 0)
					var_348_bool = true;
			}
			if(var_348_bool != 1)
				var_318_bool = false;
		}
		if(var_318_bool != 0)
			var_0_object->AddReply(520211, 21404, 21403); //@t
		var_0_object->AddReply(520215, -1, 21407); //@t
		goto Label_472;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x184";
	}
Label_472:
	bool var_371_bool;
	func_2445(var_371_bool);
	if(var_371_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2217(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_501;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_501:
		return 0;

	}
	
}


void func_2689(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 299, 1, 521614);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_2715(var_41_bool, var_42_object, 297);
}
EMIT "Stack[-1] = 0";


void func_1921(bool var_78_bool)
{
	var_78_bool = true;
}


void func_1923(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2437(int var_203_int)
{
	var_203_int = 515533;
}


void func_1670(object var_0_object)
{
	bool var_26_bool;
	func_1989(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1798();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1852();
	}
}
EMIT "Return(); Pop(0)";


void func_2439(int var_202_int)
{
	var_202_int = 502858;
}


void func_1928(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2441(string var_204_string)
{
	var_204_string = "ui/NPC_Eva.png";
}


void func_2443(string var_205_string)
{
	var_205_string = "ui/NPC_Eva_b.png";
}


void func_2445(bool var_98_bool)
{
	var_98_bool = true;
}


void func_2702(object var_50_object)
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
void func_2447(void)
{
	@SetVariable("oob1Eva1", 1);
}


// @pe
void func_911(object var_2_object, string var_222_string)
{
	bool var_223_bool;
	func_2445(var_223_bool);
	if(!var_223_bool) //@nz
		return 0;
	if(var_222_string == var_2_object)
		return 0;
	string var_226_string; bool var_227_bool;
	var_222_string = var_226_string;
	if(var_222_string == "")
		var_227_bool = false;
	else
		var_227_bool = true;
	func_2224(var_226_string, var_227_bool);
	var_2_object = var_222_string;
	
}


void func_1936(bool var_59_bool, object var_60_object, string var_61_string)
{
	var_66_bool = IsFuncExist(var_60_object, "HasProperty", 2);
	if(!var_66_bool) { //@nz
		var_59_bool = false;
		return 2;
	}
	bool var_63_bool;
	var_60_object->HasProperty(var_61_string, var_63_bool);
	var_63_bool = var_59_bool;
}


// @pe
void func_2453(void)
{
	@SetVariable("oob2Eva1", 1);
}


void func_1690(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_1980(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2715(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_2702(var_50_object);
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
void func_2459(void)
{
	@SetVariable("oob9Eva1", 1);
}


// @pe
void func_157(object var_2_object, string var_414_string)
{
	bool var_415_bool;
	func_2445(var_415_bool);
	if(!var_415_bool) //@nz
		return 0;
	if(var_414_string == var_2_object)
		return 0;
	string var_418_string; bool var_419_bool;
	var_414_string = var_418_string;
	if(var_414_string == "")
		var_419_bool = false;
	else
		var_419_bool = true;
	func_2224(var_418_string, var_419_bool);
	var_2_object = var_414_string;
	
}


void func_1948(bool var_51_bool, object var_52_object, string var_53_string, float var_54_float, float var_55_float, float var_56_float)
{
	object var_60_object;
	var_52_object = var_60_object;
	string var_61_string;
	var_53_string = var_61_string;
	bool var_59_bool;
	func_1936(var_59_bool, var_60_object, var_61_string);
	if(!var_59_bool) //@nz
		var_51_bool = false;
	float var_58_float;
	var_52_object->GetProperty(var_53_string, var_58_float);
	float var_69_float; float var_71_float; float var_72_float;
	var_55_float = var_71_float;
	var_56_float = var_72_float;
	func_2268(var_69_float, (var_58_float + var_54_float), var_71_float, var_72_float);
	var_52_object->SetProperty(var_53_string, var_69_float);
	var_51_bool = true;
}


// @pe
void func_1184(object var_2_object, string var_478_string)
{
	bool var_479_bool;
	func_2445(var_479_bool);
	if(!var_479_bool) //@nz
		return 0;
	if(var_478_string == var_2_object)
		return 0;
	string var_482_string; bool var_483_bool;
	var_478_string = var_482_string;
	if(var_478_string == "")
		var_483_bool = false;
	else
		var_483_bool = true;
	func_2224(var_482_string, var_483_bool);
	var_2_object = var_478_string;
	
}


// @pe
void func_2465(void)
{
	@SetVariable("b9q01", 2);
	func_2689();
	bool var_59_bool;
	func_2373(var_59_bool, "quest_b9_01", "place_mdoberman");
	bool var_65_bool;
	func_2373(var_65_bool, "quest_b9_01", "init_factory");
}


void func_2217(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


void func_1705(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_1710(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_1928(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2224(string var_226_string, bool var_227_bool)
{
	float var_232_float; float var_233_float;
	@lshGetAnimTimes(var_226_string, var_232_float, var_233_float);
	@lshPlayAnimation(var_232_float, var_233_float, var_227_bool);
}


void func_1970(bool var_34_bool, cvector var_35_cvector)
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
void func_2484(object var_112_object)
{
	object var_115_object;
	var_112_object = var_115_object;
	bool var_114_bool;
	func_2328(var_114_bool, var_115_object, -0.05);
}


void func_2230(bool var_94_bool, string var_95_string)
{
	bool var_97_bool;
	bool var_98_bool;
	func_2445(var_98_bool);
	if(var_98_bool != 0) {
		@lshHasSpeech(var_97_bool, var_95_string);
		if(var_97_bool != 0) {
			@lshPlaySpeech(var_95_string);
			var_94_bool = true;
		}
	}
	var_94_bool = false;
}


void func_2743(object var_94_object)
{
	object var_97_object; object var_98_object;
	@GetMainOutdoorScene(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find main outdoor scene");
		var_98_object = null;
		var_98_object = var_94_object;
	}
	var_97_object->GetMap(var_98_object);
	var_98_object = var_94_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1463(object var_0_object, int var_525_int, object var_526_object)
{
	var_0_object = var_526_object;
	bool var_536_bool; object var_537_object;
	object var_538_object;
	func_2252(var_538_object);
	var_538_object = var_537_object;
	func_2079(var_536_bool, var_537_object);
	bool var_539_bool; object var_540_object;
	var_526_object = var_540_object;
	func_1994(var_539_bool, var_540_object, 70.0);
	if(!var_539_bool) { //@nz
		var_525_int = -2;
		return 8;
	}
	object var_532_object;
	@CreateDialog(var_532_object);
	int var_543_int;
	func_2439(var_543_int);
	var_532_object->SetNPCName(var_543_int);
	int var_544_int;
	func_2437(var_544_int);
	var_532_object->SetNPCDescription(var_544_int);
	string var_545_string;
	func_2441(var_545_string);
	var_532_object->SetPhoto(var_545_string);
	string var_546_string;
	func_2443(var_546_string);
	var_532_object->SetPhoto2(var_546_string);
	int var_547_int;
	func_2760(var_547_int);
	var_532_object->SetPlayerName(var_547_int);
	bool var_533_bool;
	@IsOverrideActive(var_533_bool);
	if(var_533_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	@DoDialog(var_532_object);
	object var_549_object; object var_550_object;
	var_526_object = var_549_object;
	var_532_object = var_550_object;
	TaskCall(10);
	func_1544(var_551_object, var_552_object, var_553_string, var_554_bool, var_549_object, var_550_object);
	TaskReturn();
	bool var_535_bool;
	var_532_object->IsDialogEnd(var_535_bool);
	
	for(;;) {
		var_579_bool = !var_535_bool; //@nz
		if(var_579_bool == 0) goto Label_1533;
		@sync();
		var_532_object->IsDialogEnd(var_535_bool);
	}
	
Label_1533:
	object var_580_object;
	var_526_object = var_580_object;
	func_2062();
	@StopDialog(var_532_object);
	var_532_object->GetReturnValue(-1);
	int var_534_int = var_525_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2491(void)
{
	@SetVariable("oob1Eva2", 1);
}


void func_1980(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_1970(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_2497(void)
{
	object var_94_object;
	func_2743(var_94_object);
	object var_93_object;
	var_94_object = var_93_object;
	float var_105_float;
	func_2385(var_105_float);
	var_93_object->AddMark("b1q01BakWillBeAt18", "pt_map_eva", 3, 524806, var_105_float);
}
EMIT "Stack[-1] = 0";


void func_1732(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_2245(void)
{
	bool var_29_bool;
	func_2445(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_1989(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_2760(int var_206_int)
{
	int var_208_int;
	@GetVariable("branch", var_208_int);
	if(var_208_int == 0) {
		var_206_int = 1;
		return 2;
	EMIT "GOTO 0xad7";
	}
	if(var_208_int == 1) {
		var_206_int = 2;
		return 2;
	}
	var_206_int = 3;
}


void func_1994(bool var_155_bool, object var_156_object, float var_157_float)
{
	cvector var_168_cvector; bool var_175_bool;
	var_156_object->GetPosition(var_168_cvector);
	float var_167_float;
	var_156_object->GetEyesHeight(var_167_float);
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (var_176_float + var_167_float);
	cvector var_169_cvector;
	@GetPosition(var_169_cvector);
	@GetEyesHeight(var_167_float);
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (var_177_float + var_167_float);
	cvector var_170_cvector = var_168_cvector - var_169_cvector;
	var_178_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (float)0;
	var_180_float = sqrt(var_170_cvector | var_170_cvector);
	var_170_cvector /= var_180_float;
	cvector var_171_cvector = -var_170_cvector;
	cvector var_182_cvector;
	func_2258(var_182_cvector, (var_171_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_172_cvector = ((var_170_cvector * var_157_float) + (var_182_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_174_bool;
	@IsOverrideActive(var_174_bool);
	if(var_174_bool != 0)
		var_155_bool = false;
	@StopWorld();
	@CameraTransit((var_169_cvector + var_172_cvector), var_171_cvector);
	var_195_float = GetByIndex(var_172_cvector, 0);
	var_196_float = GetByIndex(var_172_cvector, 2);
	@Rotate(var_195_float, var_196_float);
	bool var_197_bool;
	func_2445(var_197_bool);
	if(var_197_bool != 0) {
	} else {
		@HasAnimationTrack(var_175_bool, "head");
		if(var_175_bool == 0) goto Label_2056;
		@LookAsyncCamera("head");
	}
Label_2056:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_155_bool = true;
	
}


void func_2252(object var_62_object)
{
	object var_64_object;
	@self(var_64_object);
	var_64_object = var_62_object;
}
EMIT "Stack[-1] = 0";


void func_1741(void)
{
	@KillTimer(10);
}


// @pe
void func_2513(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2258(cvector var_182_cvector, cvector var_183_cvector)
{
	float var_186_float = sqrt(var_183_cvector | var_183_cvector);
	if(var_186_float < 0.000001)
		var_182_cvector = [0.0, 0.0, 0.0];
	var_182_cvector = var_183_cvector / var_186_float;
}


// @pe
void func_2519(object var_88_object)
{
	@Trace("rifle ammo30 is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_2315(var_91_object, "rifle_ammo", 30);
}


void func_2777(object var_44_object)
{
	int var_46_int;
	@GetVariable("mt_eva", var_46_int);
	if(!var_46_int) { //@nz
		int var_49_int; object var_50_object;
		var_44_object = var_50_object;
		TaskCall(5);
		func_772(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		@SetVariable("mt_eva", 1);
	}
	bool var_264_bool;
	func_2407(var_264_bool, 1);
	if(var_264_bool != 0) {
		int var_267_int; object var_268_object;
		var_44_object = var_268_object;
		TaskCall(3);
		func_303(var_269_object, var_267_int, var_268_object);
		TaskReturn();
		return 2;
	}
	bool var_381_bool;
	func_2407(var_381_bool, 2);
	if(var_381_bool != 0) {
		int var_383_int; object var_384_object;
		var_44_object = var_384_object;
		TaskCall(1);
		func_13(var_385_object, var_383_int, var_384_object);
		TaskReturn();
		return 2;
	}
	bool var_445_bool;
	func_2407(var_445_bool, 9);
	if(var_445_bool != 0) {
		int var_447_int; object var_448_object;
		var_44_object = var_448_object;
		TaskCall(7);
		func_1021(var_449_object, var_447_int, var_448_object);
		TaskReturn();
		return 2;
	}
	int var_525_int; object var_526_object;
	var_44_object = var_526_object;
	TaskCall(9);
	func_1463(var_527_object, var_525_int, var_526_object);
	TaskReturn();
}


// @pe
void func_2268(float var_69_float, float var_70_float, float var_71_float, float var_72_float)
{
	if(var_70_float < var_71_float) {
		var_71_float = var_69_float;
		return 0;
	}
	if(var_70_float > var_72_float) {
		var_72_float = var_69_float;
		return 0;
	}
	var_70_float = var_69_float;
}


// @pe
void func_2530(object var_38_object)
{
	object var_41_object;
	var_38_object = var_41_object;
	bool var_40_bool;
	func_2328(var_40_bool, var_41_object, -0.02);
}


void func_2279(int var_309_int, string var_310_string)
{
	int var_312_int;
	@GetVariable(var_310_string, var_312_int);
	var_312_int = var_309_int;
}


// @pe
void func_2537(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_2284(int var_107_int, int var_108_int)
{
	object var_110_object;
	@CreateIntVector(var_110_object);
	var_110_object->add(var_107_int);
	var_110_object->add(var_108_int);
	@SendWorldWndMessage(3, var_110_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2543(bool var_487_bool)
{
	int var_489_int;
	func_2279(var_489_int, "b9q01");
	if(var_489_int == 1)
		var_487_bool = true;
	var_487_bool = false;
}


// @pe
void func_502(object var_2_object, string var_298_string)
{
	bool var_299_bool;
	func_2445(var_299_bool);
	if(!var_299_bool) //@nz
		return 0;
	if(var_298_string == var_2_object)
		return 0;
	string var_302_string; bool var_303_bool;
	var_298_string = var_302_string;
	if(var_298_string == "")
		var_303_bool = false;
	else
		var_303_bool = true;
	func_2224(var_302_string, var_303_bool);
	var_2_object = var_298_string;
	
}


void func_2296(object var_96_object, object var_97_object, int var_98_int)
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
		func_2284(var_107_int, var_108_int);
	}
	
}


// @pe
void func_2555(bool var_497_bool)
{
	int var_499_int;
	func_2279(var_499_int, "oob9Eva1");
	if(var_499_int == 0) {
		var_497_bool = true;
		return 0;
	}
	var_497_bool = false;
}


void func_1021(object var_0_object, int var_447_int, object var_448_object)
{
	var_0_object = var_448_object;
	bool var_458_bool; object var_459_object;
	object var_460_object;
	func_2252(var_460_object);
	var_460_object = var_459_object;
	func_2079(var_458_bool, var_459_object);
	bool var_461_bool; object var_462_object;
	var_448_object = var_462_object;
	func_1994(var_461_bool, var_462_object, 70.0);
	if(!var_461_bool) { //@nz
		var_447_int = -2;
		return 8;
	}
	object var_454_object;
	@CreateDialog(var_454_object);
	int var_465_int;
	func_2439(var_465_int);
	var_454_object->SetNPCName(var_465_int);
	int var_466_int;
	func_2437(var_466_int);
	var_454_object->SetNPCDescription(var_466_int);
	string var_467_string;
	func_2441(var_467_string);
	var_454_object->SetPhoto(var_467_string);
	string var_468_string;
	func_2443(var_468_string);
	var_454_object->SetPhoto2(var_468_string);
	int var_469_int;
	func_2760(var_469_int);
	var_454_object->SetPlayerName(var_469_int);
	bool var_455_bool;
	@IsOverrideActive(var_455_bool);
	if(var_455_bool != 0) {
		var_447_int = -2;
		return 8;
	}
	@DoDialog(var_454_object);
	object var_471_object; object var_472_object;
	var_448_object = var_471_object;
	var_454_object = var_472_object;
	TaskCall(8);
	func_1102(var_473_object, var_474_object, var_475_string, var_476_bool, var_471_object, var_472_object);
	TaskReturn();
	bool var_457_bool;
	var_454_object->IsDialogEnd(var_457_bool);
	
	for(;;) {
		var_523_bool = !var_457_bool; //@nz
		if(var_523_bool == 0) goto Label_1091;
		@sync();
		var_454_object->IsDialogEnd(var_457_bool);
	}
	
Label_1091:
	object var_524_object;
	var_448_object = var_524_object;
	func_2062();
	@StopDialog(var_454_object);
	var_454_object->GetReturnValue(-1);
	int var_456_int = var_447_int;
}
EMIT "Stack[-4] = 0";


