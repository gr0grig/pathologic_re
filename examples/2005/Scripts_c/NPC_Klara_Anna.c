// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_42_cvector == 26722) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4333();
			}
			if(var_42_cvector == 26725) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_4374();
				object var_114_object = var_1_object;
				func_4383(var_0_object);
				object var_138_object = var_1_object;
				func_4394(var_0_object);
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_4580();
			}
			if(var_41_bool == 26714) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525346); //@t
				var_0_object->ClearReplies(); //@t
				bool var_163_bool;
				func_4676(var_1_object);
				if(var_163_bool != 0)
					var_0_object->AddReply(525348, 26717, 26716); //@t
				var_0_object->AddReply(525347, -1, 26715); //@t
				var_0_object->AddReply(529145, -1, 30591); //@t
				return 0;
			}
			if(var_41_bool == 26717) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525349); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529146, 30593, 30592); //@t
				var_0_object->AddReply(529150, 30593, 30596); //@t
				return 0;
			}
			if(var_41_bool == 30593) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529148, 30595, 30594); //@t
				return 0;
			}
			if(var_41_bool == 30595) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(529149); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525350, 26719, 26718); //@t
				return 0;
			}
			if(var_41_bool == 26719) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525352, 26721, 26720); //@t
				var_0_object->AddReply(525355, 26724, 26723); //@t
				return 0;
			}
			if(var_41_bool == 26724) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525357, -1, 26725); //@t
				return 0;
			}
			if(var_41_bool == 26721) {
				func_162(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525354, -1, 26722); //@t
				return 0;
			}
			var_3_string = true;
			bool var_228_bool;
			func_4262(var_228_bool);
			if(var_228_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_42_cvector == 26779) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4405();
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_4586();
			}
			if(var_42_cvector == 40921) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_4405();
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_4586();
			}
			if(var_42_cvector == 26801) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_4437();
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_4586();
			}
			if(var_42_cvector == 26924) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_4460();
			}
			if(var_41_bool == 26810) {
				bool var_161_bool;
				func_4724(var_1_object);
				if(var_161_bool != 0) {
					func_588(var_42_cvector, "Neutral");
					var_0_object->SetMessage(525442); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525443, -1, 26811); //@t
					var_0_object->AddReply(529337, -1, 30792); //@t
					return 0;
				}
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525406); //@t
				var_0_object->ClearReplies(); //@t
				bool var_190_bool;
				func_4688(var_1_object);
				if(var_190_bool != 0)
					var_0_object->AddReply(525407, 26776, 26775); //@t
				bool var_199_bool = false;
				bool var_200_bool;
				func_4712(var_1_object);
				if(var_200_bool != 0) {
					bool var_206_bool;
					func_4700(var_1_object);
					if(var_206_bool != 0)
						var_199_bool = true;
				}
				if(var_199_bool != 0)
					var_0_object->AddReply(525425, 40970, 26793); //@t
				bool var_215_bool;
				func_4736(var_1_object);
				if(var_215_bool != 0)
					var_0_object->AddReply(525575, 26923, 26922); //@t
				var_0_object->AddReply(525412, -1, 26780); //@t
				var_0_object->AddReply(538971, -1, 40909); //@t
				return 0;
			}
			if(var_41_bool == 26923) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525576); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538918, 40872, 40871); //@t
				var_0_object->AddReply(538922, 40872, 40875); //@t
				return 0;
			}
			if(var_41_bool == 40872) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538920, 40874, 40873); //@t
				return 0;
			}
			if(var_41_bool == 40874) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539033, 40975, 40974); //@t
				var_0_object->AddReply(539035, 40975, 40976); //@t
				return 0;
			}
			if(var_41_bool == 40975) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538923, 40878, 40877); //@t
				var_0_object->AddReply(538925, 40878, 40879); //@t
				return 0;
			}
			if(var_41_bool == 40878) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525577, -1, 26924); //@t
				var_0_object->AddReply(525614, -1, 26961); //@t
				return 0;
			}
			if(var_41_bool == 40970) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539030, 26794, 40971); //@t
				var_0_object->AddReply(539031, 26794, 40972); //@t
				return 0;
			}
			if(var_41_bool == 26794) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525426); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525427, 40979, 26795); //@t
				return 0;
			}
			if(var_41_bool == 40979) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539037, 40982, 40980); //@t
				var_0_object->AddReply(539038, 40983, 40981); //@t
				return 0;
			}
			if(var_41_bool == 40983) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539046, 40991, 40990); //@t
				var_0_object->AddReply(539048, 40996, 40992); //@t
				return 0;
			}
			if(var_41_bool == 40991) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539041, 40996, 40984); //@t
				return 0;
			}
			if(var_41_bool == 40996) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539051); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539052, 40999, 40998); //@t
				return 0;
			}
			if(var_41_bool == 40999) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539054, 26796, 41000); //@t
				var_0_object->AddReply(539056, 26798, 41003); //@t
				return 0;
			}
			if(var_41_bool == 40982) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539039); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539044, 40988, 40987); //@t
				return 0;
			}
			if(var_41_bool == 40988) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539045); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539049, 40983, 40993); //@t
				var_0_object->AddReply(539050, 26796, 40994); //@t
				return 0;
			}
			if(var_41_bool == 26796) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525428); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525429, 26798, 26797); //@t
				var_0_object->AddReply(539071, 41020, 41019); //@t
				return 0;
			}
			if(var_41_bool == 41020) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539073, 26798, 41021); //@t
				return 0;
			}
			if(var_41_bool == 26798) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525430); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525431, 26800, 26799); //@t
				return 0;
			}
			if(var_41_bool == 26800) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525432); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538913, 40867, 40866); //@t
				var_0_object->AddReply(539074, 41024, 41023); //@t
				return 0;
			}
			if(var_41_bool == 41024) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539076, 41026, 41025); //@t
				return 0;
			}
			if(var_41_bool == 41026) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539078, 41029, 41027); //@t
				return 0;
			}
			if(var_41_bool == 41029) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539081, 41028, 41030); //@t
				return 0;
			}
			if(var_41_bool == 40867) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525434, 41028, 26802); //@t
				var_0_object->AddReply(538915, 41028, 40868); //@t
				return 0;
			}
			if(var_41_bool == 41028) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525433, -1, 26801); //@t
				bool var_427_bool;
				func_4724(var_1_object);
				if(var_427_bool != 0)
					var_0_object->AddReply(538917, -1, 40870); //@t
				return 0;
			}
			if(var_41_bool == 26776) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525409, 40903, 26777); //@t
				return 0;
			}
			if(var_41_bool == 40903) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538966, 40905, 40904); //@t
				var_0_object->AddReply(538972, 40905, 40910); //@t
				return 0;
			}
			if(var_41_bool == 40905) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538968, 40907, 40906); //@t
				return 0;
			}
			if(var_41_bool == 40907) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538970, 40912, 40908); //@t
				return 0;
			}
			if(var_41_bool == 40912) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538974, 40914, 40913); //@t
				var_0_object->AddReply(538977, 40917, 40916); //@t
				return 0;
			}
			if(var_41_bool == 40917) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538978); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538979, 40914, 40918); //@t
				return 0;
			}
			if(var_41_bool == 40914) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(538975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525411, -1, 26779); //@t
				var_0_object->AddReply(538980, 26778, 40920); //@t
				return 0;
			}
			if(var_41_bool == 26778) {
				func_588(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538981, -1, 40921); //@t
				return 0;
			}
			var_3_string = true;
			bool var_497_bool;
			func_4262(var_497_bool);
			if(var_497_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x263";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_41_bool == 26821) {
				func_1545(var_42_cvector, "Neutral");
				var_0_object->SetMessage(525465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526257, 27533, 27531); //@t
				var_0_object->AddReply(525466, -1, 26822); //@t
				return 0;
			}
			if(var_41_bool == 27533) {
				func_1545(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526260, -1, 27534); //@t
				var_0_object->AddReply(526261, -1, 27535); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_4262(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x620";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_42_cvector == 27372) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4486();
			}
			if(var_42_cvector == 27374) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_4492();
			}
			if(var_41_bool == 27371) {
				func_1799(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526085); //@t
				var_0_object->ClearReplies(); //@t
				bool var_93_bool = false;
				bool var_94_bool = false;
				bool var_95_bool;
				func_4748(var_1_object);
				if(var_95_bool != 0) {
					bool var_103_bool;
					func_4760(var_1_object);
					if(var_103_bool != 0)
						var_94_bool = true;
				}
				if(var_94_bool != 0) {
					bool var_109_bool;
					func_4772(var_1_object);
					if(var_109_bool != 0)
						var_93_bool = true;
				}
				if(var_93_bool != 0)
					var_0_object->AddReply(526086, 27373, 27372); //@t
				var_0_object->AddReply(526089, -1, 27375); //@t
				var_0_object->AddReply(528861, -1, 30283); //@t
				return 0;
			}
			if(var_41_bool == 27373) {
				func_1799(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528862, 30285, 30284); //@t
				return 0;
			}
			if(var_41_bool == 30285) {
				func_1799(var_42_cvector, "Neutral");
				var_0_object->SetMessage(528863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526088, -1, 27374); //@t
				return 0;
			}
			var_3_string = true;
			bool var_138_bool;
			func_4262(var_138_bool);
			if(var_138_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x71e";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_42_cvector == 28892) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4548();
			}
			if(var_42_cvector == 28904) {
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_4497();
			}
			if(var_41_bool == 28889) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527548); //@t
				var_0_object->ClearReplies(); //@t
				bool var_151_bool = false;
				bool var_152_bool;
				func_4784(var_1_object);
				if(var_152_bool != 0) {
					bool var_160_bool;
					func_4796(var_1_object);
					if(var_160_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0)
					var_0_object->AddReply(527551, 28893, 28892); //@t
				var_0_object->AddReply(527550, -1, 28891); //@t
				return 0;
			}
			if(var_41_bool == 28893) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527553, 28895, 28894); //@t
				var_0_object->AddReply(527564, 28906, 28905); //@t
				return 0;
			}
			if(var_41_bool == 28906) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527566, 28897, 28907); //@t
				return 0;
			}
			if(var_41_bool == 28895) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527555, 28897, 28896); //@t
				return 0;
			}
			if(var_41_bool == 28897) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527556); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527557, 28899, 28898); //@t
				return 0;
			}
			if(var_41_bool == 28899) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527559, 28901, 28900); //@t
				return 0;
			}
			if(var_41_bool == 28901) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527561, 28903, 28902); //@t
				return 0;
			}
			if(var_41_bool == 28903) {
				func_2096(var_42_cvector, "Neutral");
				var_0_object->SetMessage(527562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527563, -1, 28904); //@t
				return 0;
			}
			var_3_string = true;
			bool var_224_bool;
			func_4262(var_224_bool);
			if(var_224_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x847";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_42_cvector == 26100) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4298();
				object var_98_object = var_1_object;
				func_4264(var_0_object);
			}
			if(var_42_cvector == 26104) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_4298();
				object var_128_object = var_1_object;
				func_4264(var_0_object);
			}
			if(var_42_cvector == 26113) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_4324();
				object var_144_object = var_1_object;
				func_4564(var_0_object);
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_4574();
				object var_169_object = var_1_object;
				func_4554(var_0_object);
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_4574();
			}
			if(var_41_bool == 26029) {
				bool var_178_bool = false;
				bool var_179_bool;
				func_4592(var_1_object);
				if(var_179_bool != 0) {
					bool var_187_bool;
					func_4604(var_1_object);
					if(var_187_bool != 0)
						var_178_bool = true;
				}
				if(var_178_bool != 0) {
					object var_193_object; object var_194_object;
					var_193_object = var_1_object;
					var_194_object = var_0_object;
					func_4280();
					func_2578(var_42_cvector, "Neutral");
					var_0_object->SetMessage(524690); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524691, 28130, 26030); //@t
					return 0;
				}
				bool var_213_bool = false;
				bool var_214_bool;
				func_4616(var_1_object);
				if(var_214_bool != 0) {
					bool var_220_bool;
					func_4628(var_1_object);
					if(var_220_bool != 0)
						var_213_bool = true;
				}
				if(var_213_bool != 0) {
					object var_226_object; object var_227_object;
					var_226_object = var_1_object;
					var_227_object = var_0_object;
					func_4286();
					func_2578(var_42_cvector, "Neutral");
					var_0_object->SetMessage(524707); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524708, 28139, 26047); //@t
					return 0;
				}
				bool var_235_bool;
				func_4640(var_1_object);
				if(var_235_bool != 0) {
					object var_241_object; object var_242_object;
					var_241_object = var_1_object;
					var_242_object = var_0_object;
					func_4292();
					func_2578(var_42_cvector, "Neutral");
					var_0_object->SetMessage(524780); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526860, 28146, 28145); //@t
					return 0;
				}
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524709); //@t
				var_0_object->ClearReplies(); //@t
				bool var_252_bool = false;
				bool var_253_bool;
				func_4652(var_1_object);
				if(var_253_bool != 0) {
					bool var_259_bool;
					func_4640(var_1_object);
					if(!var_259_bool) //@nz
						var_252_bool = true;
				}
				if(var_252_bool != 0)
					var_0_object->AddReply(524787, 26103, 26102); //@t
				bool var_265_bool;
				func_4664(var_1_object);
				if(var_265_bool != 0)
					var_0_object->AddReply(524796, 28156, 26111); //@t
				var_0_object->AddReply(524710, -1, 26049); //@t
				return 0;
			}
			if(var_41_bool == 28156) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526871, 26112, 28157); //@t
				var_0_object->AddReply(526872, 26112, 28158); //@t
				return 0;
			}
			if(var_41_bool == 26112) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526868, 28155, 28154); //@t
				return 0;
			}
			if(var_41_bool == 28155) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526873, 28161, 28160); //@t
				return 0;
			}
			if(var_41_bool == 28161) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526875, 28163, 28162); //@t
				return 0;
			}
			if(var_41_bool == 28163) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526877, 28165, 28164); //@t
				return 0;
			}
			if(var_41_bool == 28165) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526878); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524798, -1, 26113); //@t
				return 0;
			}
			if(var_41_bool == 26103) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524789, -1, 26104); //@t
				return 0;
			}
			if(var_41_bool == 28146) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526862, 28148, 28147); //@t
				var_0_object->AddReply(526865, 28148, 28150); //@t
				return 0;
			}
			if(var_41_bool == 28148) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526866, 28152, 28151); //@t
				return 0;
			}
			if(var_41_bool == 28152) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524781, 26097, 26096); //@t
				return 0;
			}
			if(var_41_bool == 26097) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524783, 26099, 26098); //@t
				return 0;
			}
			if(var_41_bool == 26099) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(524784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524785, -1, 26100); //@t
				var_0_object->AddReply(524786, -1, 26101); //@t
				return 0;
			}
			if(var_41_bool == 28139) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526855, 28142, 28140); //@t
				var_0_object->AddReply(526856, -1, 28141); //@t
				return 0;
			}
			if(var_41_bool == 28142) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526858, -1, 28143); //@t
				var_0_object->AddReply(526859, -1, 28144); //@t
				return 0;
			}
			if(var_41_bool == 28130) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526846, 28132, 28131); //@t
				return 0;
			}
			if(var_41_bool == 28132) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526848, 28134, 28133); //@t
				return 0;
			}
			if(var_41_bool == 28134) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526850, 28136, 28135); //@t
				return 0;
			}
			if(var_41_bool == 28136) {
				func_2578(var_42_cvector, "Neutral");
				var_0_object->SetMessage(526851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526852, -1, 28137); //@t
				var_0_object->AddReply(526853, -1, 28138); //@t
				return 0;
			}
			var_3_string = true;
			bool var_421_bool;
			func_4262(var_421_bool);
			if(var_421_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa29";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_41_bool == 41246) {
				func_3302(var_42_cvector, "Neutral");
				var_0_object->SetMessage(539303); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539304, -1, 41247); //@t
				return 0;
			}
			var_3_string = true;
			bool var_63_bool;
			func_4262(var_63_bool);
			if(var_63_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcfd";
	
	}

}


task task_15
{
}


task task_16
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, cvector var_42_cvector)
	{
		if(1 != 0) {
			func_4119();
			if(var_41_int == 42548) {
				func_3500(var_42_cvector, "Neutral");
				var_0_object->SetMessage(540539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540540, -1, 42549); //@t
				var_0_object->AddReply(540799, -1, 42848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_4262(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdc3";
	
	}

}


maintask task_17
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		var_41_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_3571(var_40_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, int var_41_int)
	{
		if(var_41_int == 10) {
			func_3642();
			bool var_45_bool = false;
			bool var_46_bool;
			func_3863(var_46_bool);
			if(var_46_bool != 0) {
				bool var_49_bool;
				func_3611(var_49_bool);
				if(var_49_bool != 0)
					var_45_bool = true;
			}
			if(var_45_bool != 0) {
				bool var_66_bool;
				func_3591(var_66_bool);
				if(var_66_bool != 0) {
					bool var_85_bool; object var_86_object;
					object var_87_object;
					func_4126(var_87_object);
					var_87_object = var_86_object;
					func_4011(var_85_bool, var_86_object);
				}
			} else {
				func_3606(var_41_int);
				func_3633();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
	{
		func_3824();
		func_3642();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector)
		{
		@StopGroup0();
		func_3642();
		func_4091("Neutral");
		func_3633();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, bool var_41_bool)
	{
		if(var_41_bool != 0)
			func_3633();
		else
			func_4091("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, cvector var_40_cvector, object var_41_object)
	{
		bool var_43_bool;
		@IsOverrideActive(var_43_bool);
		if(!var_43_bool) { //@nz
			disable OnUse;
			func_3824();
			bool var_45_bool; object var_46_object;
			var_41_object = var_46_object;
			func_3854(var_45_bool, var_46_object);
			enable OnUse;
			object var_59_object;
			var_41_object = var_59_object;
			func_5124(var_59_object);
			func_4091("Neutral");
			func_3642();
			func_3633();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_46_bool;
	func_3863(var_46_bool);
	if(!var_46_bool) goto Label_0; //@nz
}


void func_4098(string var_239_string, bool var_240_bool)
{
	float var_245_float; float var_246_float;
	@lshGetAnimTimes(var_239_string, var_245_float, var_246_float);
	@lshPlayAnimation(var_245_float, var_246_float, var_240_bool);
}


// @pe
void func_5124(object var_59_object)
{
	var_60_bool = GlobalVars[1];
	if(!var_60_bool) { //@nz
		int var_62_int; object var_63_object;
		var_59_object = var_63_object;
		TaskCall(5);
		func_1406(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_275_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_276_bool;
	func_4224(var_276_bool, 1);
	if(var_276_bool != 0) {
		int var_279_int; object var_280_object;
		var_59_object = var_280_object;
		TaskCall(11);
		func_2321(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 0;
	}
	bool var_415_bool;
	func_4224(var_415_bool, 2);
	if(var_415_bool != 0) {
		int var_417_int; object var_418_object;
		var_59_object = var_418_object;
		TaskCall(1);
		func_13(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 0;
	}
	bool var_482_bool;
	func_4224(var_482_bool, 3);
	if(var_482_bool != 0) {
		int var_484_int; object var_485_object;
		var_59_object = var_485_object;
		TaskCall(3);
		func_385(var_486_object, var_484_int, var_485_object);
		TaskReturn();
		return 0;
	}
	bool var_588_bool;
	func_4224(var_588_bool, 6);
	if(var_588_bool != 0) {
		int var_590_int; object var_591_object;
		var_59_object = var_591_object;
		TaskCall(7);
		func_1632(var_592_object, var_590_int, var_591_object);
		TaskReturn();
		return 0;
	}
	bool var_669_bool;
	func_4224(var_669_bool, 11);
	if(var_669_bool != 0) {
		int var_671_int; object var_672_object;
		var_59_object = var_672_object;
		TaskCall(9);
		func_1943(var_673_object, var_671_int, var_672_object);
		TaskReturn();
		return 0;
	}
	bool var_740_bool;
	func_4224(var_740_bool, 12);
	if(var_740_bool != 0) {
		int var_742_int; object var_743_object;
		var_59_object = var_743_object;
		TaskCall(13);
		func_3168(var_744_object, var_742_int, var_743_object);
		TaskReturn();
		return 0;
	}
	int var_795_int; object var_796_object;
	var_59_object = var_796_object;
	TaskCall(15);
	func_3361(var_797_object, var_795_int, var_796_object);
	TaskReturn();
}


void func_3591(bool var_66_bool)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_66_bool = false;
	bool var_71_bool; object var_72_object;
	var_68_object = var_72_object;
	func_3854(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4616(bool var_350_bool)
{
	int var_352_int;
	func_4142(var_352_int, "k1q01Healed");
	if(var_352_int != 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


// @pe
void func_1545(object var_2_object, string var_235_string)
{
	bool var_236_bool;
	func_4262(var_236_bool);
	if(!var_236_bool) //@nz
		return 0;
	if(var_235_string == var_2_object)
		return 0;
	string var_239_string; bool var_240_bool;
	var_235_string = var_239_string;
	if(var_235_string == "")
		var_240_bool = false;
	else
		var_240_bool = true;
	func_4098(var_239_string, var_240_bool);
	var_2_object = var_235_string;
	
}


void func_4104(bool var_107_bool, string var_108_string)
{
	bool var_110_bool;
	bool var_111_bool;
	func_4262(var_111_bool);
	if(var_111_bool != 0) {
		@lshHasSpeech(var_110_bool, var_108_string);
		if(var_110_bool != 0) {
			@lshPlaySpeech(var_108_string);
			var_107_bool = true;
		}
	}
	var_107_bool = false;
}


void func_13(object var_0_object, int var_417_int, object var_418_object)
{
	var_0_object = var_418_object;
	bool var_428_bool; object var_429_object;
	object var_430_object;
	func_4126(var_430_object);
	var_430_object = var_429_object;
	func_3953(var_428_bool, var_429_object);
	bool var_431_bool; object var_432_object;
	var_418_object = var_432_object;
	func_3868(var_431_bool, var_432_object, 70.0);
	if(!var_431_bool) { //@nz
		var_417_int = -2;
		return 8;
	}
	object var_424_object;
	@CreateDialog(var_424_object);
	int var_435_int;
	func_4256(var_435_int);
	var_424_object->SetNPCName(var_435_int);
	int var_436_int;
	func_4254(var_436_int);
	var_424_object->SetNPCDescription(var_436_int);
	string var_437_string;
	func_4258(var_437_string);
	var_424_object->SetPhoto(var_437_string);
	string var_438_string;
	func_4260(var_438_string);
	var_424_object->SetPhoto2(var_438_string);
	int var_439_int;
	func_5107(var_439_int);
	var_424_object->SetPlayerName(var_439_int);
	bool var_425_bool;
	@IsOverrideActive(var_425_bool);
	if(var_425_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	@DoDialog(var_424_object);
	object var_441_object; object var_442_object;
	var_418_object = var_441_object;
	var_424_object = var_442_object;
	TaskCall(2);
	func_94(var_443_object, var_444_object, var_445_string, var_446_bool, var_441_object, var_442_object);
	TaskReturn();
	bool var_427_bool;
	var_424_object->IsDialogEnd(var_427_bool);
	
	for(;;) {
		var_480_bool = !var_427_bool; //@nz
		if(var_480_bool == 0) goto Label_83;
		@sync();
		var_424_object->IsDialogEnd(var_427_bool);
	}
	
Label_83:
	object var_481_object;
	var_418_object = var_481_object;
	func_3936();
	@StopDialog(var_424_object);
	var_424_object->GetReturnValue(-1);
	int var_426_int = var_417_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2578(object var_2_object, string var_329_string)
{
	bool var_330_bool;
	func_4262(var_330_bool);
	if(!var_330_bool) //@nz
		return 0;
	if(var_329_string == var_2_object)
		return 0;
	string var_333_string; bool var_334_bool;
	var_329_string = var_333_string;
	if(var_329_string == "")
		var_334_bool = false;
	else
		var_334_bool = true;
	func_4098(var_333_string, var_334_bool);
	var_2_object = var_329_string;
	
}


// @pe
void func_4628(bool var_356_bool)
{
	int var_358_int;
	func_4142(var_358_int, "ook1Anna2");
	if(var_358_int == 0) {
		var_356_bool = true;
		return 0;
	}
	var_356_bool = false;
}


void func_3606(object var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_118_float, var_119_float);
}


void func_4119(void)
{
	bool var_44_bool;
	func_4262(var_44_bool);
	if(var_44_bool != 0)
		@lshStopSpeech();
}


void func_3611(bool var_49_bool)
{
	object var_52_object;
	@FindActor(var_52_object, "player");
	if(!var_52_object) { //@nz
		var_49_bool = false;
		return 4;
	}
	float var_56_float; object var_57_object;
	func_3829(var_56_float, var_57_object);
	if(var_56_float > 90000.0) {
		var_49_bool = false;
		return 4;
	}
	bool var_53_bool;
	@CanSee(var_53_bool, var_57_object);
	var_53_bool = var_49_bool;
}
EMIT "Stack[-2] = 0";


void func_4126(object var_75_object)
{
	object var_77_object;
	@self(var_77_object);
	var_77_object = var_75_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4640(bool var_371_bool)
{
	int var_373_int;
	func_4142(var_373_int, "ook1Anna3");
	if(var_373_int == 0) {
		var_371_bool = true;
		return 0;
	}
	var_371_bool = false;
}


void func_4132(cvector var_195_cvector, cvector var_196_cvector)
{
	float var_199_float = sqrt(var_196_cvector | var_196_cvector);
	if(var_199_float < 0.000001)
		var_195_cvector = [0.0, 0.0, 0.0];
	var_195_cvector = var_196_cvector / var_199_float;
}


// @pe
void func_4652(bool var_389_bool)
{
	int var_391_int;
	func_4142(var_391_int, "k1q03");
	if(var_391_int == 0) {
		var_389_bool = true;
		return 0;
	}
	var_389_bool = false;
}


void func_4142(int var_313_int, string var_314_string)
{
	int var_316_int;
	@GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
}


// @pe
void func_2096(object var_2_object, string var_702_string)
{
	bool var_703_bool;
	func_4262(var_703_bool);
	if(!var_703_bool) //@nz
		return 0;
	if(var_702_string == var_2_object)
		return 0;
	string var_706_string; bool var_707_bool;
	var_702_string = var_706_string;
	if(var_702_string == "")
		var_707_bool = false;
	else
		var_707_bool = true;
	func_4098(var_706_string, var_707_bool);
	var_2_object = var_702_string;
	
}


void func_3633(void)
{
	float var_56_float;
	@rand(var_56_float, 8, 16);
	@SetTimer(10, var_56_float);
}


void func_4147(int var_160_int, int var_161_int)
{
	object var_163_object;
	@CreateIntVector(var_163_object);
	var_163_object->add(var_160_int);
	var_163_object->add(var_161_int);
	@SendWorldWndMessage(3, var_163_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4664(bool var_401_bool)
{
	int var_403_int;
	func_4142(var_403_int, "k1q03");
	if(var_403_int == 2)
		var_401_bool = true;
	var_401_bool = false;
}


void func_3642(void)
{
	@KillTimer(10);
}


void func_4159(object var_147_object, int var_148_int)
{
	int var_150_int;
	object var_151_object;
	var_147_object = var_151_object;
	int var_153_int;
	func_3837(var_151_object, "money", var_153_int);
	if(var_153_int > 0) {
		@GetInvItemByName(var_150_int, "Money");
		int var_160_int; int var_161_int;
		var_150_int = var_160_int;
		var_148_int = var_161_int;
		func_4147(var_160_int, var_161_int);
	}
}


// @pe
void func_4676(bool var_457_bool)
{
	int var_459_int;
	func_4142(var_459_int, "k2q04");
	if(var_459_int == 1)
		var_457_bool = true;
	var_457_bool = false;
}


// @pe
void func_588(object var_2_object, string var_521_string)
{
	bool var_522_bool;
	func_4262(var_522_bool);
	if(!var_522_bool) //@nz
		return 0;
	if(var_521_string == var_2_object)
		return 0;
	string var_525_string; bool var_526_bool;
	var_521_string = var_525_string;
	if(var_521_string == "")
		var_526_bool = false;
	else
		var_526_bool = true;
	func_4098(var_525_string, var_526_bool);
	var_2_object = var_521_string;
	
}


// @pe
void func_4688(bool var_546_bool)
{
	int var_548_int;
	func_4142(var_548_int, "k3q01");
	if(var_548_int == 1)
		var_546_bool = true;
	var_546_bool = false;
}


void func_4178(object var_122_object, object var_123_object, int var_124_int)
{
	int var_128_int;
	var_123_object->GetItemID(var_128_int);
	int var_129_int;
	@GetInvItemProperty(var_129_int, var_128_int, "Category");
	bool var_130_bool;
	var_122_object->AddItem(var_130_bool, var_123_object, var_129_int, var_124_int);
	if(!var_130_bool) { //@nz
		var_122_object->DropItems(var_123_object, var_124_int);
	} else {
		int var_133_int; int var_134_int;
		var_128_int = var_133_int;
		var_124_int = var_134_int;
		func_4147(var_133_int, var_134_int);
	}
	
}


// @pe
void func_4700(bool var_562_bool)
{
	int var_564_int;
	func_4142(var_564_int, "k3q01");
	if(var_564_int == 2)
		var_562_bool = true;
	var_562_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_441_object, object var_442_object)
{
	var_0_object = var_442_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_442_object, "Neutral");
		var_0_object->SetMessage(525346); //@t
		var_0_object->ClearReplies(); //@t
		bool var_457_bool;
		func_4676(var_441_object);
		if(var_457_bool != 0)
			var_0_object->AddReply(525348, 26717, 26716); //@t
		var_0_object->AddReply(525347, -1, 26715); //@t
		var_0_object->AddReply(529145, -1, 30591); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_472_bool;
	func_4262(var_472_bool);
	if(var_472_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


void func_1632(object var_0_object, int var_590_int, object var_591_object)
{
	var_0_object = var_591_object;
	bool var_601_bool; object var_602_object;
	object var_603_object;
	func_4126(var_603_object);
	var_603_object = var_602_object;
	func_3953(var_601_bool, var_602_object);
	bool var_604_bool; object var_605_object;
	var_591_object = var_605_object;
	func_3868(var_604_bool, var_605_object, 70.0);
	if(!var_604_bool) { //@nz
		var_590_int = -2;
		return 8;
	}
	object var_597_object;
	@CreateDialog(var_597_object);
	int var_608_int;
	func_4256(var_608_int);
	var_597_object->SetNPCName(var_608_int);
	int var_609_int;
	func_4254(var_609_int);
	var_597_object->SetNPCDescription(var_609_int);
	string var_610_string;
	func_4258(var_610_string);
	var_597_object->SetPhoto(var_610_string);
	string var_611_string;
	func_4260(var_611_string);
	var_597_object->SetPhoto2(var_611_string);
	int var_612_int;
	func_5107(var_612_int);
	var_597_object->SetPlayerName(var_612_int);
	bool var_598_bool;
	@IsOverrideActive(var_598_bool);
	if(var_598_bool != 0) {
		var_590_int = -2;
		return 8;
	}
	@DoDialog(var_597_object);
	object var_614_object; object var_615_object;
	var_591_object = var_614_object;
	var_597_object = var_615_object;
	TaskCall(8);
	func_1713(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object);
	TaskReturn();
	bool var_600_bool;
	var_597_object->IsDialogEnd(var_600_bool);
	
	for(;;) {
		var_667_bool = !var_600_bool; //@nz
		if(var_667_bool == 0) goto Label_1702;
		@sync();
		var_597_object->IsDialogEnd(var_600_bool);
	}
	
Label_1702:
	object var_668_object;
	var_591_object = var_668_object;
	func_3936();
	@StopDialog(var_597_object);
	var_597_object->GetReturnValue(-1);
	int var_599_int = var_590_int;
}
EMIT "Stack[-4] = 0";


void func_3168(object var_0_object, int var_742_int, object var_743_object)
{
	var_0_object = var_743_object;
	bool var_753_bool; object var_754_object;
	object var_755_object;
	func_4126(var_755_object);
	var_755_object = var_754_object;
	func_3953(var_753_bool, var_754_object);
	bool var_756_bool; object var_757_object;
	var_743_object = var_757_object;
	func_3868(var_756_bool, var_757_object, 70.0);
	if(!var_756_bool) { //@nz
		var_742_int = -2;
		return 8;
	}
	object var_749_object;
	@CreateDialog(var_749_object);
	int var_760_int;
	func_4256(var_760_int);
	var_749_object->SetNPCName(var_760_int);
	int var_761_int;
	func_4254(var_761_int);
	var_749_object->SetNPCDescription(var_761_int);
	string var_762_string;
	func_4258(var_762_string);
	var_749_object->SetPhoto(var_762_string);
	string var_763_string;
	func_4260(var_763_string);
	var_749_object->SetPhoto2(var_763_string);
	int var_764_int;
	func_5107(var_764_int);
	var_749_object->SetPlayerName(var_764_int);
	bool var_750_bool;
	@IsOverrideActive(var_750_bool);
	if(var_750_bool != 0) {
		var_742_int = -2;
		return 8;
	}
	@DoDialog(var_749_object);
	object var_766_object; object var_767_object;
	var_743_object = var_766_object;
	var_749_object = var_767_object;
	TaskCall(14);
	func_3249(var_768_object, var_769_object, var_770_string, var_771_bool, var_766_object, var_767_object);
	TaskReturn();
	bool var_752_bool;
	var_749_object->IsDialogEnd(var_752_bool);
	
	for(;;) {
		var_793_bool = !var_752_bool; //@nz
		if(var_793_bool == 0) goto Label_3238;
		@sync();
		var_749_object->IsDialogEnd(var_752_bool);
	}
	
Label_3238:
	object var_794_object;
	var_743_object = var_794_object;
	func_3936();
	@StopDialog(var_749_object);
	var_749_object->GetReturnValue(-1);
	int var_751_int = var_742_int;
}
EMIT "Stack[-4] = 0";


void func_4197(object var_117_object, string var_118_string, int var_119_int)
{
	object var_121_object;
	@CreateInvItem(var_121_object);
	var_121_object->SetItemName(var_118_string);
	object var_122_object; object var_123_object; int var_124_int;
	var_117_object = var_122_object;
	var_121_object = var_123_object;
	var_119_int = var_124_int;
	func_4178(var_122_object, var_123_object, var_124_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4712(bool var_556_bool)
{
	int var_558_int;
	func_4142(var_558_int, "k3q01KapellaAboutHan");
	if(var_558_int != 0) {
		var_556_bool = true;
		return 0;
	}
	var_556_bool = false;
}


void func_4210(float var_64_float)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_66_float = var_64_float;
}


// @pe
void func_4724(bool var_515_bool)
{
	int var_517_int;
	func_4142(var_517_int, "k3q01");
	if(var_517_int == 3)
		var_515_bool = true;
	var_515_bool = false;
}


void func_4215(int var_128_int)
{
	float var_130_float;
	@GetGameTime(var_130_float);
	var_128_int = 1 + (var_130_float / 24);
}


// @pe
void func_4736(bool var_571_bool)
{
	int var_573_int;
	func_4142(var_573_int, "k3q03");
	if(var_573_int == 0) {
		var_571_bool = true;
		return 0;
	}
	var_571_bool = false;
}


// @pe
void func_4224(bool var_276_bool, int var_277_int)
{
	int var_278_int;
	func_4215(var_278_int);
	var_276_bool = var_278_int == var_277_int;
}


void func_4230(string var_80_string, int var_81_int)
{
	string var_83_string = "idle";
	if(var_81_int != 0)
		var_83_string += var_81_int;
	var_83_string = var_80_string;
}


// @pe
void func_4748(bool var_632_bool)
{
	int var_634_int;
	func_4142(var_634_int, "k6q01");
	if(var_634_int == 2)
		var_632_bool = true;
	var_632_bool = false;
}


void func_4237(int var_74_int)
{
	int var_77_int; bool var_78_bool;
	var_77_int = 0;
	
	for(;;) {
		string var_80_string; int var_81_int;
		var_77_int = var_81_int;
		func_4230(var_80_string, var_81_int);
		@HasAnimation(var_78_bool, "all", var_80_string);
		if(!var_78_bool) //@nz
			break;
		var_77_int += 1;
	}
	var_77_int = var_74_int;
}


// @pe
void func_4760(bool var_638_bool)
{
	int var_640_int;
	func_4142(var_640_int, "k6q01DankoPos");
	if(var_640_int > 1)
		var_638_bool = true;
	var_638_bool = false;
}


void func_4254(int var_216_int)
{
	var_216_int = 515530;
}


void func_4256(int var_215_int)
{
	var_215_int = 502856;
}


void func_4258(string var_217_string)
{
	var_217_string = "ui/NPC_Anna.png";
}


// @pe
void func_162(object var_2_object, string var_448_string)
{
	bool var_449_bool;
	func_4262(var_449_bool);
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
	func_4098(var_452_string, var_453_bool);
	var_2_object = var_448_string;
	
}


void func_4260(string var_218_string)
{
	var_218_string = "ui/NPC_Anna_b.png";
}


// @pe
void func_4772(bool var_644_bool)
{
	int var_646_int;
	func_4142(var_646_int, "ook6Anna1");
	if(var_646_int == 0) {
		var_644_bool = true;
		return 0;
	}
	var_644_bool = false;
}


void func_4262(bool var_111_bool)
{
	var_111_bool = true;
}


// @pe
void func_4264(object var_99_object)
{
	object var_103_object;
	func_5057(var_103_object);
	object var_100_object;
	var_103_object = var_100_object;
	func_5074(var_100_object, "pt_map_notkin", (float)2);
	object var_123_object;
	func_5057(var_123_object);
	var_99_object->ShowMap(var_123_object);
}


void func_3753(void)
{
	bool var_68_bool; int var_69_int; int var_70_int; bool var_71_bool;
	@WaitForAnimEnd();
	bool var_72_bool;
	func_3863(var_72_bool);
	if(!var_72_bool) //@nz
		return 12;
	int var_74_int;
	func_4237(var_74_int);
	int var_66_int;
	var_74_int = var_66_int;
	int var_67_int = 0;
	
	for(;;) {
		bool var_87_bool = false;
		if(var_67_int < 5) {
			bool var_90_bool;
			func_3863(var_90_bool);
			if(var_90_bool != 0)
				var_87_bool = true;
		}
		if(var_87_bool != 0) {
			if(!var_66_int) { //@nz
				@Sleep(3, var_68_bool);
				if(!var_68_bool) { //@nz
				} else {
			} else {
			@irand(var_69_int, var_66_int);
			@irand(var_70_int, 5);
			if(var_70_int != 0)
				var_69_int = 0;
			string var_101_string; int var_102_int;
			var_69_int = var_102_int;
			func_4230(var_101_string, var_102_int);
			@PlayAnimation("all", var_101_string);
			@WaitForAnimEnd(var_71_bool);
			var_103_bool = !var_71_bool; //@nz
			if(var_103_bool == 0) goto Label_3808;
			goto Label_3819;
			}
				Label_3808:
					bool var_94_bool;
					func_3822(var_94_bool);
					var_95_bool = !var_94_bool; //@nz
					if(var_95_bool == 0) goto Label_3814;
			}
		}
	Label_3819:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_3814:
		@ResetAAS();
		var_67_int += 1;
	}
	
}


// @pe
void func_4784(bool var_712_bool)
{
	int var_714_int;
	func_4142(var_714_int, "k11q01");
	if(var_714_int == 9)
		var_712_bool = true;
	var_712_bool = false;
}


// @pe
void func_1713(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_614_object, object var_615_object)
{
	var_0_object = var_615_object;
	var_1_object = var_614_object;
	var_3_string = false;
	if(1 != 0) {
		func_1799(var_615_object, "Neutral");
		var_0_object->SetMessage(526085); //@t
		var_0_object->ClearReplies(); //@t
		bool var_630_bool = false;
		bool var_631_bool = false;
		bool var_632_bool;
		func_4748(var_1_object);
		if(var_632_bool != 0) {
			bool var_638_bool;
			func_4760(var_1_object);
			if(var_638_bool != 0)
				var_631_bool = true;
		}
		if(var_631_bool != 0) {
			bool var_644_bool;
			func_4772(var_1_object);
			if(var_644_bool != 0)
				var_630_bool = true;
		}
		if(var_630_bool != 0)
			var_0_object->AddReply(526086, 27373, 27372); //@t
		var_0_object->AddReply(526089, -1, 27375); //@t
		var_0_object->AddReply(528861, -1, 30283); //@t
		goto Label_1769;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b5";
	}
Label_1769:
	bool var_659_bool;
	func_4262(var_659_bool);
	if(var_659_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1798;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1798:
		return 0;

	}
	
}


// @pe
void func_3249(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_766_object, object var_767_object)
{
	var_0_object = var_767_object;
	var_1_object = var_766_object;
	var_3_string = false;
	if(1 != 0) {
		func_3302(var_767_object, "Neutral");
		var_0_object->SetMessage(539303); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539304, -1, 41247); //@t
		goto Label_3272;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcb5";
	}
Label_3272:
	bool var_785_bool;
	func_4262(var_785_bool);
	if(var_785_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3301;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3301:
		return 0;

	}
	
}


// @pe
void func_4280(void)
{
	@SetVariable("ook1Anna1", 1);
}


// @pe
void func_4796(bool var_718_bool)
{
	int var_720_int;
	func_4142(var_720_int, "ook11Anna1");
	if(var_720_int == 0) {
		var_718_bool = true;
		return 0;
	}
	var_718_bool = false;
}


// @pe
void func_4286(void)
{
	@SetVariable("ook1Anna2", 1);
}


// @pe
void func_4292(void)
{
	@SetVariable("ook1Anna3", 1);
}


void func_4808(void)
{
	object var_129_object;
	@CreateDiaryEntry(var_129_object, 498, 1, 528065);
	bool var_133_bool; object var_134_object;
	var_129_object = var_134_object;
	func_5029(var_133_bool, var_134_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4298(void)
{
	@SetVariable("k1q03", 1);
	object var_53_object;
	func_5057(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4210(var_64_float);
	var_50_object->AddMark("k1q03AnnaGotoNotkin", "pt_map_notkin", 0, 524799, var_64_float);
	func_4886();
	func_4899();
}
EMIT "Stack[-1] = 0";


void func_4821(void)
{
	object var_119_object;
	@CreateDiaryEntry(var_119_object, 497, 1, 528064);
	bool var_123_bool; object var_124_object;
	var_119_object = var_124_object;
	func_5029(var_123_bool, var_124_object, 480);
}
EMIT "Stack[-1] = 0";


void func_4834(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 496, 1, 528063);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_5029(var_113_bool, var_114_object, 480);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4324(void)
{
	@SetVariable("k1q03", 1000);
	func_4912();
}


// @pe
void func_3302(object var_2_object, string var_773_string)
{
	bool var_774_bool;
	func_4262(var_774_bool);
	if(!var_774_bool) //@nz
		return 0;
	if(var_773_string == var_2_object)
		return 0;
	string var_777_string; bool var_778_bool;
	var_773_string = var_777_string;
	if(var_773_string == "")
		var_778_bool = false;
	else
		var_778_bool = true;
	func_4098(var_777_string, var_778_bool);
	var_2_object = var_773_string;
	
}


void func_4333(void)
{
	@SetVariable("k2q04", 2);
	object var_53_object;
	func_5057(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4210(var_64_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer1", "pt_map_gatherer1", 0, 508643, var_64_float);
	float var_71_float;
	func_4210(var_71_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer2", "pt_map_gatherer2", 0, 539379, var_71_float);
	float var_76_float;
	func_4210(var_76_float);
	var_50_object->AddMark("k2q04AnnaGotoGatherer3", "pt_map_gatherer3", 0, 508644, var_76_float);
	func_4938();
}
EMIT "Stack[-1] = 0";


void func_3822(bool var_94_bool)
{
	var_94_bool = true;
}


void func_4847(void)
{
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 495, 1, 528062);
	bool var_103_bool; object var_104_object;
	var_99_object = var_104_object;
	func_5029(var_103_bool, var_104_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3824(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3829(float var_56_float, object var_57_object)
{
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	cvector var_62_cvector;
	var_57_object->GetPosition(var_62_cvector);
	var_56_float = (var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector);
}


void func_4860(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 494, 1, 528061);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_5029(var_93_bool, var_94_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3837(object var_151_object, string var_152_string, int var_153_int)
{
	int var_155_int;
	var_151_object->GetProperty(var_152_string, var_155_int);
	var_151_object->SetProperty(var_152_string, (var_155_int + var_153_int));
}


void func_3844(bool var_49_bool, cvector var_50_cvector)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	bool var_56_bool;
	@Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
}


// @pe
void func_1799(object var_2_object, string var_621_string)
{
	bool var_622_bool;
	func_4262(var_622_bool);
	if(!var_622_bool) //@nz
		return 0;
	if(var_621_string == var_2_object)
		return 0;
	string var_625_string; bool var_626_bool;
	var_621_string = var_625_string;
	if(var_621_string == "")
		var_626_bool = false;
	else
		var_626_bool = true;
	func_4098(var_625_string, var_626_bool);
	var_2_object = var_621_string;
	
}


void func_4873(void)
{
	object var_64_object;
	@CreateDiaryEntry(var_64_object, 493, 1, 528060);
	bool var_68_bool; object var_69_object;
	var_64_object = var_69_object;
	func_5029(var_68_bool, var_69_object, 480);
}
EMIT "Stack[-1] = 0";


void func_3854(bool var_45_bool, object var_46_object)
{
	cvector var_48_cvector;
	var_46_object->GetPosition(var_48_cvector);
	bool var_49_bool; cvector var_50_cvector;
	var_48_cvector = var_50_cvector;
	func_3844(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
}


void func_2321(object var_0_object, int var_279_int, object var_280_object)
{
	var_0_object = var_280_object;
	bool var_290_bool; object var_291_object;
	object var_292_object;
	func_4126(var_292_object);
	var_292_object = var_291_object;
	func_3953(var_290_bool, var_291_object);
	bool var_293_bool; object var_294_object;
	var_280_object = var_294_object;
	func_3868(var_293_bool, var_294_object, 70.0);
	if(!var_293_bool) { //@nz
		var_279_int = -2;
		return 8;
	}
	object var_286_object;
	@CreateDialog(var_286_object);
	int var_297_int;
	func_4256(var_297_int);
	var_286_object->SetNPCName(var_297_int);
	int var_298_int;
	func_4254(var_298_int);
	var_286_object->SetNPCDescription(var_298_int);
	string var_299_string;
	func_4258(var_299_string);
	var_286_object->SetPhoto(var_299_string);
	string var_300_string;
	func_4260(var_300_string);
	var_286_object->SetPhoto2(var_300_string);
	int var_301_int;
	func_5107(var_301_int);
	var_286_object->SetPlayerName(var_301_int);
	bool var_287_bool;
	@IsOverrideActive(var_287_bool);
	if(var_287_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	@DoDialog(var_286_object);
	object var_303_object; object var_304_object;
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(12);
	func_2402(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	bool var_289_bool;
	var_286_object->IsDialogEnd(var_289_bool);
	
	for(;;) {
		var_413_bool = !var_289_bool; //@nz
		if(var_413_bool == 0) goto Label_2391;
		@sync();
		var_286_object->IsDialogEnd(var_289_bool);
	}
	
Label_2391:
	object var_414_object;
	var_280_object = var_414_object;
	func_3936();
	@StopDialog(var_286_object);
	var_286_object->GetReturnValue(-1);
	int var_288_int = var_279_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4374(void)
{
	@SetVariable("k2q04", 9);
	func_4925();
}


void func_3863(bool var_42_bool)
{
	bool var_44_bool;
	@IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
}


void func_4886(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 333, 2, 524800);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_5029(var_72_bool, var_73_object, -1);
}
EMIT "Stack[-1] = 0";


void func_3868(bool var_168_bool, object var_169_object, float var_170_float)
{
	cvector var_181_cvector; bool var_188_bool;
	var_169_object->GetPosition(var_181_cvector);
	float var_180_float;
	var_169_object->GetEyesHeight(var_180_float);
	var_189_float = GetByIndex(var_181_cvector, 1);
	SetByIndex(var_181_cvector, 1) = (var_189_float + var_180_float);
	cvector var_182_cvector;
	@GetPosition(var_182_cvector);
	@GetEyesHeight(var_180_float);
	var_190_float = GetByIndex(var_182_cvector, 1);
	SetByIndex(var_182_cvector, 1) = (var_190_float + var_180_float);
	cvector var_183_cvector = var_181_cvector - var_182_cvector;
	var_191_float = GetByIndex(var_183_cvector, 1);
	SetByIndex(var_183_cvector, 1) = (float)0;
	var_193_float = sqrt(var_183_cvector | var_183_cvector);
	var_183_cvector /= var_193_float;
	cvector var_184_cvector = -var_183_cvector;
	cvector var_195_cvector;
	func_4132(var_195_cvector, (var_184_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_185_cvector = ((var_183_cvector * var_170_float) + (var_195_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_187_bool;
	@IsOverrideActive(var_187_bool);
	if(var_187_bool != 0)
		var_168_bool = false;
	@StopWorld();
	@CameraTransit((var_182_cvector + var_185_cvector), var_184_cvector);
	var_208_float = GetByIndex(var_185_cvector, 0);
	var_209_float = GetByIndex(var_185_cvector, 2);
	@Rotate(var_208_float, var_209_float);
	bool var_210_bool;
	func_4262(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_3930;
		@LookAsyncCamera("head");
	}
Label_3930:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_168_bool = true;
	
}


// @pe
void func_4383(object var_114_object)
{
	@Trace("alpha_pills 5 is given");
	object var_117_object;
	var_114_object = var_117_object;
	func_4197(var_117_object, "alpha_pills", 5);
}


void func_3361(object var_0_object, int var_795_int, object var_796_object)
{
	var_0_object = var_796_object;
	bool var_806_bool; object var_807_object;
	object var_808_object;
	func_4126(var_808_object);
	var_808_object = var_807_object;
	func_3953(var_806_bool, var_807_object);
	bool var_809_bool; object var_810_object;
	var_796_object = var_810_object;
	func_3868(var_809_bool, var_810_object, 70.0);
	if(!var_809_bool) { //@nz
		var_795_int = -2;
		return 8;
	}
	object var_802_object;
	@CreateDialog(var_802_object);
	int var_813_int;
	func_4256(var_813_int);
	var_802_object->SetNPCName(var_813_int);
	int var_814_int;
	func_4254(var_814_int);
	var_802_object->SetNPCDescription(var_814_int);
	string var_815_string;
	func_4258(var_815_string);
	var_802_object->SetPhoto(var_815_string);
	string var_816_string;
	func_4260(var_816_string);
	var_802_object->SetPhoto2(var_816_string);
	int var_817_int;
	func_5107(var_817_int);
	var_802_object->SetPlayerName(var_817_int);
	bool var_803_bool;
	@IsOverrideActive(var_803_bool);
	if(var_803_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	@DoDialog(var_802_object);
	object var_819_object; object var_820_object;
	var_796_object = var_819_object;
	var_802_object = var_820_object;
	TaskCall(16);
	func_3442(var_821_object, var_822_object, var_823_string, var_824_bool, var_819_object, var_820_object);
	TaskReturn();
	bool var_805_bool;
	var_802_object->IsDialogEnd(var_805_bool);
	
	for(;;) {
		var_849_bool = !var_805_bool; //@nz
		if(var_849_bool == 0) goto Label_3431;
		@sync();
		var_802_object->IsDialogEnd(var_805_bool);
	}
	
Label_3431:
	object var_850_object;
	var_796_object = var_850_object;
	func_3936();
	@StopDialog(var_802_object);
	var_802_object->GetReturnValue(-1);
	int var_804_int = var_795_int;
}
EMIT "Stack[-4] = 0";


void func_4899(void)
{
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 334, 2, 524801);
	bool var_95_bool; object var_96_object;
	var_91_object = var_96_object;
	func_5029(var_95_bool, var_96_object, 333);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4394(object var_138_object)
{
	@Trace("beta_pills 5 is given");
	object var_141_object;
	var_138_object = var_141_object;
	func_4197(var_141_object, "beta_pills", 5);
}


void func_4912(void)
{
	object var_137_object;
	@CreateDiaryEntry(var_137_object, 336, 2, 524803);
	bool var_141_bool; object var_142_object;
	var_137_object = var_142_object;
	func_5029(var_141_bool, var_142_object, 333);
}
EMIT "Stack[-1] = 0";


void func_4405(void)
{
	@SetVariable("k3q01", 2);
	object var_53_object;
	func_5057(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_4210(var_64_float);
	var_50_object->AddMark("k3q01AnnaGotoMladVlad", "pt_map_mladvlad", 1, 525454, var_64_float);
	float var_71_float;
	func_4210(var_71_float);
	var_50_object->AddMark("k3q01AnnaGotoKapella", "pt_map_kapella", 1, 525455, var_71_float);
	func_4964();
}
EMIT "Stack[-1] = 0";


void func_4925(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 510, 2, 529709);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_5029(var_111_bool, var_112_object, 507);
}
EMIT "Stack[-1] = 0";


void func_4938(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 509, 2, 529708);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_5029(var_82_bool, var_83_object, 507);
}
EMIT "Stack[-1] = 0";


void func_4437(void)
{
	@SetVariable("k3q01", 3);
	object var_113_object;
	func_5057(var_113_object);
	object var_110_object;
	var_113_object = var_110_object;
	float var_118_float;
	func_4210(var_118_float);
	var_110_object->AddMark("k3q01AnnaGotoAlexandr", "pt_map_alexandr", 1, 525457, var_118_float);
	func_4951();
}
EMIT "Stack[-1] = 0";


void func_4951(void)
{
	object var_120_object;
	@CreateDiaryEntry(var_120_object, 341, 1, 525450);
	bool var_124_bool; object var_125_object;
	var_120_object = var_125_object;
	func_5029(var_124_bool, var_125_object, 337);
}
EMIT "Stack[-1] = 0";


void func_3936(void)
{
	bool var_270_bool;
	@CameraSwitchToNormal();
	bool var_271_bool;
	func_4262(var_271_bool);
	if(var_271_bool != 0) {
	} else {
		@HasAnimationTrack(var_270_bool, "head");
		if(var_270_bool == 0) goto Label_3952;
		@UnlookAsync("head");
	}
Label_3952:
	
}


// @pe
void func_2402(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_303_object, object var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_310_bool = false;
		bool var_311_bool;
		func_4592(var_1_object);
		if(var_311_bool != 0) {
			bool var_319_bool;
			func_4604(var_1_object);
			if(var_319_bool != 0)
				var_310_bool = true;
		}
		if(var_310_bool != 0) {
			object var_325_object; object var_326_object;
			var_325_object = var_1_object;
			var_326_object = var_0_object;
			func_4280();
			func_2578(var_304_object, "Neutral");
			var_0_object->SetMessage(524690); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524691, 28130, 26030); //@t
		} else {
					bool var_349_bool = false;
					bool var_350_bool;
					func_4616(var_1_object);
					if(var_350_bool != 0) {
						bool var_356_bool;
						func_4628(var_1_object);
						if(var_356_bool != 0)
							var_349_bool = true;
					}
					if(var_349_bool == 0) goto Label_2476;
					object var_362_object; object var_363_object;
					var_362_object = var_1_object;
					var_363_object = var_0_object;
					func_4286();
					func_2578(var_304_object, "Neutral");
					var_0_object->SetMessage(524707); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524708, 28139, 26047); //@t
		}
	}
Label_2548:
	for(;;) {
		bool var_341_bool;
		func_4262(var_341_bool);
		if(var_341_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4091(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2577;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2577:
			}
			bool var_371_bool;
			func_4640(var_1_object);
			if(var_371_bool != 0) {
			object var_377_object; object var_378_object;
			var_377_object = var_1_object;
			var_378_object = var_0_object;
			func_4292();
			func_2578(var_304_object, "Neutral");
			var_0_object->SetMessage(524780); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526860, 28146, 28145); //@t
			goto Label_2548;
		}
		return 0;
	}
	func_2578(var_304_object, "Neutral");
	var_0_object->SetMessage(524709); //@t
	var_0_object->ClearReplies(); //@t
	bool var_388_bool = false;
	bool var_389_bool;
	func_4652(var_1_object);
	if(var_389_bool != 0) {
		bool var_395_bool;
		func_4640(var_1_object);
		if(!var_395_bool) //@nz
			var_388_bool = true;
	}
	if(var_388_bool != 0)
		var_0_object->AddReply(524787, 26103, 26102); //@t
	bool var_401_bool;
	func_4664(var_1_object);
	if(var_401_bool != 0)
		var_0_object->AddReply(524796, 28156, 26111); //@t
	var_0_object->AddReply(524710, -1, 26049); //@t
	goto Label_2548;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x966";


void func_4964(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 339, 1, 525448);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_5029(var_77_bool, var_78_object, 337);
}
EMIT "Stack[-1] = 0";


void func_4460(void)
{
	@SetVariable("k3q03", 1);
	object var_137_object;
	func_5057(var_137_object);
	object var_134_object;
	var_137_object = var_134_object;
	float var_142_float;
	func_4210(var_142_float);
	var_134_object->AddMark("k3q03AnnaGotoEva", "pt_map_eva", 0, 525615, var_142_float);
	func_4977();
	func_4990();
}
EMIT "Stack[-1] = 0";


void func_3953(bool var_73_bool, object var_74_object)
{
	int var_80_int; int var_81_int;
	@GetVariable("voice_common", var_80_int);
	if(var_80_int != 0) {
		bool var_84_bool; object var_85_object;
		var_74_object = var_85_object;
		func_4011(var_84_bool, var_85_object);
		if(!var_84_bool) { //@nz
			bool var_115_bool; object var_116_object;
			var_74_object = var_116_object;
			func_4048(var_115_bool, var_116_object);
			if(!var_115_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@irand(var_81_int, 2);
		if(var_81_int != 0)
			@SetVariable("voice_common", ((var_80_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_160_bool; object var_161_object;
		var_74_object = var_161_object;
		func_4048(var_160_bool, var_161_object);
		if(!var_160_bool) { //@nz
			bool var_163_bool; object var_164_object;
			var_74_object = var_164_object;
			func_4011(var_163_bool, var_164_object);
			if(!var_163_bool) { //@nz
				var_73_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4009;
	
Label_4009:
	var_73_bool = true;
	
}


// @pe
void func_3442(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_819_object, object var_820_object)
{
	var_0_object = var_820_object;
	var_1_object = var_819_object;
	var_3_string = false;
	if(1 != 0) {
		func_3500(var_820_object, "Neutral");
		var_0_object->SetMessage(540539); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540540, -1, 42549); //@t
		var_0_object->AddReply(540799, -1, 42848); //@t
		goto Label_3470;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd76";
	}
Label_3470:
	bool var_841_bool;
	func_4262(var_841_bool);
	if(var_841_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3499;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3499:
		return 0;

	}
	
}


void func_4977(void)
{
	object var_144_object;
	@CreateDiaryEntry(var_144_object, 350, 2, 525616);
	bool var_148_bool; object var_149_object;
	var_144_object = var_149_object;
	func_5029(var_148_bool, var_149_object, -1);
}
EMIT "Stack[-1] = 0";


void func_4990(void)
{
	object var_152_object;
	@CreateDiaryEntry(var_152_object, 351, 2, 525617);
	bool var_156_bool; object var_157_object;
	var_152_object = var_157_object;
	func_5029(var_156_bool, var_157_object, 350);
}
EMIT "Stack[-1] = 0";


void func_1406(object var_0_object, int var_62_int, object var_63_object)
{
	var_0_object = var_63_object;
	bool var_73_bool; object var_74_object;
	object var_75_object;
	func_4126(var_75_object);
	var_75_object = var_74_object;
	func_3953(var_73_bool, var_74_object);
	bool var_168_bool; object var_169_object;
	var_63_object = var_169_object;
	func_3868(var_168_bool, var_169_object, 70.0);
	if(!var_168_bool) { //@nz
		var_62_int = -2;
		return 8;
	}
	object var_69_object;
	@CreateDialog(var_69_object);
	int var_215_int;
	func_4256(var_215_int);
	var_69_object->SetNPCName(var_215_int);
	int var_216_int;
	func_4254(var_216_int);
	var_69_object->SetNPCDescription(var_216_int);
	string var_217_string;
	func_4258(var_217_string);
	var_69_object->SetPhoto(var_217_string);
	string var_218_string;
	func_4260(var_218_string);
	var_69_object->SetPhoto2(var_218_string);
	int var_219_int;
	func_5107(var_219_int);
	var_69_object->SetPlayerName(var_219_int);
	bool var_70_bool;
	@IsOverrideActive(var_70_bool);
	if(var_70_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	@DoDialog(var_69_object);
	object var_228_object; object var_229_object;
	var_63_object = var_228_object;
	var_69_object = var_229_object;
	TaskCall(6);
	func_1487(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	bool var_72_bool;
	var_69_object->IsDialogEnd(var_72_bool);
	
	for(;;) {
		var_267_bool = !var_72_bool; //@nz
		if(var_267_bool == 0) goto Label_1476;
		@sync();
		var_69_object->IsDialogEnd(var_72_bool);
	}
	
Label_1476:
	object var_268_object;
	var_63_object = var_268_object;
	func_3936();
	@StopDialog(var_69_object);
	var_69_object->GetReturnValue(-1);
	int var_71_int = var_62_int;
}
EMIT "Stack[-4] = 0";


void func_385(object var_0_object, int var_484_int, object var_485_object)
{
	var_0_object = var_485_object;
	bool var_495_bool; object var_496_object;
	object var_497_object;
	func_4126(var_497_object);
	var_497_object = var_496_object;
	func_3953(var_495_bool, var_496_object);
	bool var_498_bool; object var_499_object;
	var_485_object = var_499_object;
	func_3868(var_498_bool, var_499_object, 70.0);
	if(!var_498_bool) { //@nz
		var_484_int = -2;
		return 8;
	}
	object var_491_object;
	@CreateDialog(var_491_object);
	int var_502_int;
	func_4256(var_502_int);
	var_491_object->SetNPCName(var_502_int);
	int var_503_int;
	func_4254(var_503_int);
	var_491_object->SetNPCDescription(var_503_int);
	string var_504_string;
	func_4258(var_504_string);
	var_491_object->SetPhoto(var_504_string);
	string var_505_string;
	func_4260(var_505_string);
	var_491_object->SetPhoto2(var_505_string);
	int var_506_int;
	func_5107(var_506_int);
	var_491_object->SetPlayerName(var_506_int);
	bool var_492_bool;
	@IsOverrideActive(var_492_bool);
	if(var_492_bool != 0) {
		var_484_int = -2;
		return 8;
	}
	@DoDialog(var_491_object);
	object var_508_object; object var_509_object;
	var_485_object = var_508_object;
	var_491_object = var_509_object;
	TaskCall(4);
	func_466(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object);
	TaskReturn();
	bool var_494_bool;
	var_491_object->IsDialogEnd(var_494_bool);
	
	for(;;) {
		var_586_bool = !var_494_bool; //@nz
		if(var_586_bool == 0) goto Label_455;
		@sync();
		var_491_object->IsDialogEnd(var_494_bool);
	}
	
Label_455:
	object var_587_object;
	var_485_object = var_587_object;
	func_3936();
	@StopDialog(var_491_object);
	var_491_object->GetReturnValue(-1);
	int var_493_int = var_484_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4486(void)
{
	@SetVariable("ook6Anna1", 1);
}


void func_5003(void)
{
	object var_56_object;
	@CreateDiaryEntry(var_56_object, 412, 1, 526113);
	bool var_60_bool; object var_61_object;
	var_56_object = var_61_object;
	func_5029(var_60_bool, var_61_object, 408);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4492(void)
{
	func_5003();
}


void func_4497(void)
{
	int var_56_int;
	@GetVariable("k11q01SoulCount", var_56_int);
	@SetVariable("k11q01SoulCount", (var_56_int + 1));
	if(var_56_int == 2) {
		func_4873();
	} else if(var_56_int == 3) {
			func_4860();
	}

	for(;;) {
		return 2;

	}
	
	if(var_56_int == 4) {
		func_4847();
	} else if(var_56_int == 5) {
		func_4834();
	} else if(var_56_int == 6) {
		func_4821();
	} else if(var_56_int == 7) {
		func_4808();
	}
}


void func_1943(object var_0_object, int var_671_int, object var_672_object)
{
	var_0_object = var_672_object;
	bool var_682_bool; object var_683_object;
	object var_684_object;
	func_4126(var_684_object);
	var_684_object = var_683_object;
	func_3953(var_682_bool, var_683_object);
	bool var_685_bool; object var_686_object;
	var_672_object = var_686_object;
	func_3868(var_685_bool, var_686_object, 70.0);
	if(!var_685_bool) { //@nz
		var_671_int = -2;
		return 8;
	}
	object var_678_object;
	@CreateDialog(var_678_object);
	int var_689_int;
	func_4256(var_689_int);
	var_678_object->SetNPCName(var_689_int);
	int var_690_int;
	func_4254(var_690_int);
	var_678_object->SetNPCDescription(var_690_int);
	string var_691_string;
	func_4258(var_691_string);
	var_678_object->SetPhoto(var_691_string);
	string var_692_string;
	func_4260(var_692_string);
	var_678_object->SetPhoto2(var_692_string);
	int var_693_int;
	func_5107(var_693_int);
	var_678_object->SetPlayerName(var_693_int);
	bool var_679_bool;
	@IsOverrideActive(var_679_bool);
	if(var_679_bool != 0) {
		var_671_int = -2;
		return 8;
	}
	@DoDialog(var_678_object);
	object var_695_object; object var_696_object;
	var_672_object = var_695_object;
	var_678_object = var_696_object;
	TaskCall(10);
	func_2024(var_697_object, var_698_object, var_699_string, var_700_bool, var_695_object, var_696_object);
	TaskReturn();
	bool var_681_bool;
	var_678_object->IsDialogEnd(var_681_bool);
	
	for(;;) {
		var_738_bool = !var_681_bool; //@nz
		if(var_738_bool == 0) goto Label_2013;
		@sync();
		var_678_object->IsDialogEnd(var_681_bool);
	}
	
Label_2013:
	object var_739_object;
	var_672_object = var_739_object;
	func_3936();
	@StopDialog(var_678_object);
	var_678_object->GetReturnValue(-1);
	int var_680_int = var_671_int;
}
EMIT "Stack[-4] = 0";


void func_5016(object var_81_object)
{
	object var_83_object;
	@GetDiaryRoot(var_83_object);
	if(!var_83_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_81_object = false;
	}
	var_83_object = var_81_object;
}
EMIT "Stack[-1] = 0";


void func_5029(bool var_72_bool, object var_73_object, int var_74_int)
{
	object var_81_object;
	func_5016(var_81_object);
	object var_78_object;
	var_81_object = var_78_object;
	object var_79_object;
	var_78_object->Find(var_74_int, var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_74_int);
		var_72_bool = false;
	}
	var_79_object->AddChild(var_73_object);
	@SendWorldWndMessage(7);
	int var_80_int;
	var_73_object->GetCategory(var_80_int);
	@SetDiarySection(var_80_int);
	var_72_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_4011(bool var_84_bool, object var_85_object)
{
	string var_91_string; bool var_93_bool; int var_94_int; string var_95_string;
	var_91_string = "c";
	int var_92_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_85_object->HasProperty((var_91_string + (var_92_int + 1)), var_93_bool);
			if(!var_93_bool) { //@nz
			} else {
				var_92_int += 1;
			}
		}
		if(!var_92_int) { //@nz
			var_84_bool = false;
			return 10;
		}
		var_94_int = 0;
		if(var_92_int > 1)
			@irand(var_94_int, var_92_int);
		var_85_object->GetProperty((var_91_string + (var_94_int + 1)), var_95_string);
		bool var_107_bool; string var_108_string;
		var_95_string = var_108_string;
		func_4104(var_107_bool, var_108_string);
		var_107_bool = var_84_bool;
		return 10;

	}
}


// @pe
void func_3500(object var_2_object, string var_826_string)
{
	bool var_827_bool;
	func_4262(var_827_bool);
	if(!var_827_bool) //@nz
		return 0;
	if(var_826_string == var_2_object)
		return 0;
	string var_830_string; bool var_831_bool;
	var_826_string = var_830_string;
	if(var_826_string == "")
		var_831_bool = false;
	else
		var_831_bool = true;
	func_4098(var_830_string, var_831_bool);
	var_2_object = var_826_string;
	
}


void func_5057(object var_53_object)
{
	object var_56_object; object var_57_object;
	@GetMainOutdoorScene(var_56_object);
	if(var_56_object == null) {
		@Trace("Can't find main outdoor scene");
		var_57_object = null;
		var_57_object = var_53_object;
	}
	var_56_object->GetMap(var_57_object);
	var_57_object = var_53_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4548(void)
{
	@SetVariable("ook11Anna1", 1);
}


// @pe
void func_4554(object var_169_object)
{
	@Trace("money1000 is given");
	object var_172_object;
	var_169_object = var_172_object;
	func_4159(var_172_object, 1000);
}


// @pe
void func_1487(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_228_object, object var_229_object)
{
	var_0_object = var_229_object;
	var_1_object = var_228_object;
	var_3_string = false;
	if(1 != 0) {
		func_1545(var_229_object, "Neutral");
		var_0_object->SetMessage(525465); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(526257, 27533, 27531); //@t
		var_0_object->AddReply(525466, -1, 26822); //@t
		goto Label_1515;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5d3";
	}
Label_1515:
	bool var_254_bool;
	func_4262(var_254_bool);
	if(var_254_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1544;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1544:
		return 0;

	}
	
}


void func_4048(bool var_115_bool, object var_116_object)
{
	bool var_124_bool; int var_125_int; string var_126_string;
	int var_128_int;
	func_4215(var_128_int);
	string var_122_string = ("d" + var_128_int) + "m";
	int var_123_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_116_object->HasProperty((var_122_string + (var_123_int + 1)), var_124_bool);
			if(!var_124_bool) { //@nz
			} else {
				var_123_int += 1;
			}
		}
		if(!var_123_int) { //@nz
			var_115_bool = false;
			return 10;
		}
		var_125_int = 0;
		if(var_123_int > 1)
			@irand(var_125_int, var_123_int);
		var_116_object->GetProperty((var_122_string + (var_125_int + 1)), var_126_string);
		bool var_147_bool; string var_148_string;
		var_126_string = var_148_string;
		func_4104(var_147_bool, var_148_string);
		var_147_bool = var_115_bool;
		return 10;

	}
}


// @pe
void func_466(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_508_object, object var_509_object)
{
	var_0_object = var_509_object;
	var_1_object = var_508_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_515_bool;
		func_4724(var_1_object);
		if(var_515_bool != 0) {
			func_588(var_509_object, "Neutral");
			var_0_object->SetMessage(525442); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525443, -1, 26811); //@t
			var_0_object->AddReply(529337, -1, 30792); //@t
		} else {
					func_588(var_509_object, "Neutral");
					var_0_object->SetMessage(525406); //@t
					var_0_object->ClearReplies(); //@t
					bool var_546_bool;
					func_4688(var_1_object);
					if(var_546_bool != 0)
						var_0_object->AddReply(525407, 26776, 26775); //@t
					bool var_555_bool = false;
					bool var_556_bool;
					func_4712(var_1_object);
					if(var_556_bool != 0) {
						bool var_562_bool;
						func_4700(var_1_object);
						if(var_562_bool != 0)
							var_555_bool = true;
					}
					if(var_555_bool != 0)
						var_0_object->AddReply(525425, 40970, 26793); //@t
					bool var_571_bool;
					func_4736(var_1_object);
					if(var_571_bool != 0)
						var_0_object->AddReply(525575, 26923, 26922); //@t
					var_0_object->AddReply(525412, -1, 26780); //@t
					var_0_object->AddReply(538971, -1, 40909); //@t
		}
	}
	for(;;) {
		bool var_536_bool;
		func_4262(var_536_bool);
		if(var_536_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4091(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_587;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_587:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1d6";


void func_5074(object var_100_object, string var_101_string, float var_102_float)
{
	object var_110_object;
	@GetMainOutdoorScene(var_110_object);
	if(var_110_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_108_cvector;
	cvector var_109_cvector;
	bool var_111_bool;
	var_110_object->GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_101_string) + " doesnt exist");
	var_110_object->GetMap(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	var_100_object->SetMapParams(var_121_float, var_122_float, var_102_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4564(object var_144_object)
{
	@Trace("money500 is given");
	object var_147_object;
	var_144_object = var_147_object;
	func_4159(var_147_object, 500);
}


// @pe
void func_4574(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_4580(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2024(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_695_object, object var_696_object)
{
	var_0_object = var_696_object;
	var_1_object = var_695_object;
	var_3_string = false;
	if(1 != 0) {
		func_2096(var_696_object, "Neutral");
		var_0_object->SetMessage(527548); //@t
		var_0_object->ClearReplies(); //@t
		bool var_711_bool = false;
		bool var_712_bool;
		func_4784(var_1_object);
		if(var_712_bool != 0) {
			bool var_718_bool;
			func_4796(var_1_object);
			if(var_718_bool != 0)
				var_711_bool = true;
		}
		if(var_711_bool != 0)
			var_0_object->AddReply(527551, 28893, 28892); //@t
		var_0_object->AddReply(527550, -1, 28891); //@t
		goto Label_2066;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7ec";
	}
Label_2066:
	bool var_730_bool;
	func_4262(var_730_bool);
	if(var_730_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_4091(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2095;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2095:
		return 0;

	}
	
}


// @pe
void func_4586(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_4592(bool var_311_bool)
{
	int var_313_int;
	func_4142(var_313_int, "k1q01");
	if(var_313_int == 4)
		var_311_bool = true;
	var_311_bool = false;
}


void func_5107(int var_219_int)
{
	int var_221_int;
	@GetVariable("branch", var_221_int);
	if(var_221_int == 0) {
		var_219_int = 1;
		return 2;
	EMIT "GOTO 0x1402";
	}
	if(var_221_int == 1) {
		var_219_int = 2;
		return 2;
	}
	var_219_int = 3;
}


void func_3571(object var_0_object)
{
	bool var_42_bool;
	func_3863(var_42_bool);
	if(!var_42_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_3699();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_3753();
	}
}
EMIT "Return(); Pop(0)";


void func_4091(string var_49_string)
{
	float var_52_float; float var_53_float;
	@lshGetAnimTimes(var_49_string, var_52_float, var_53_float);
	@lshPlayAnimation(var_52_float, var_53_float, false);
}


// @pe
void func_4604(bool var_319_bool)
{
	int var_321_int;
	func_4142(var_321_int, "ook1Anna1");
	if(var_321_int == 0) {
		var_319_bool = true;
		return 0;
	}
	var_319_bool = false;
}


