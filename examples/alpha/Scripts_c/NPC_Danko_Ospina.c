// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		func_5869();
		bool var_36_bool;
		func_4695(var_36_bool);
		if(!var_36_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4760("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_36_object;
		var_35_bool = var_36_object;
		func_5873(var_36_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool)
	{
		object var_37_object;
		var_35_bool = var_37_object;
		bool var_36_bool;
		func_4683(var_36_bool, var_37_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_35_string == 362) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5285();
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(311, 370, 364); //@t
				var_0_object->AddReply(312, 366, 365); //@t
				var_0_object->AddReply(310, 369, 363); //@t
				return 0;
			}
			if(var_35_string == 369) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6268, -1, 6938); //@t
				return 0;
			}
			if(var_35_string == 366) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(314, 370, 367); //@t
				var_0_object->AddReply(315, 370, 368); //@t
				return 0;
			}
			if(var_35_string == 370) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(319, 374, 372); //@t
				var_0_object->AddReply(318, 374, 371); //@t
				return 0;
			}
			if(var_35_string == 374) {
				func_180(var_36_bool, "Neutral");
				var_0_object->SetMessage(320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(322, -1, 376); //@t
				var_0_object->AddReply(323, -1, 377); //@t
				return 0;
			}
			var_3_string = true;
			bool var_107_bool;
			func_4871(var_107_bool);
			if(var_107_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_36_bool == 3869) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5090();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5137();
				object var_49_object = var_1_object;
				func_5123(var_0_object);
			}
			if(var_36_bool == 3872) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5090();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				func_5137();
				object var_99_object = var_1_object;
				func_5123(var_0_object);
			}
			if(var_36_bool == 3870) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_5090();
				object var_105_object = var_1_object;
				func_5123(var_0_object);
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_5137();
			}
			if(var_36_bool == 3860) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_5090();
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_5137();
				object var_115_object = var_1_object;
				func_5123(var_0_object);
			}
			if(var_36_bool == 3856) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_5090();
			}
			if(var_36_bool == 3857) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_5090();
				object var_125_object = var_1_object;
				func_5123(var_0_object);
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_5137();
			}
			if(var_36_bool == 13923) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5096();
			}
			if(var_36_bool == 11938) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_5143();
			}
			if(var_36_bool == 11939) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_5143();
			}
			if(var_35_string == 13922) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(12729); //@t
				var_0_object->ClearReplies(); //@t
				bool var_235_bool = false;
				bool var_236_bool;
				func_5519(var_1_object);
				if(var_236_bool != 0) {
					bool var_244_bool;
					func_5507(var_1_object);
					if(var_244_bool != 0)
						var_235_bool = true;
				}
				if(var_235_bool != 0)
					var_0_object->AddReply(12731, 3851, 13924); //@t
				bool var_253_bool = false;
				bool var_254_bool = false;
				bool var_255_bool = false;
				bool var_256_bool;
				func_5531(var_1_object);
				if(var_256_bool != 0) {
					bool var_262_bool;
					func_5579(var_1_object);
					if(var_262_bool != 0)
						var_255_bool = true;
				}
				if(var_255_bool != 0) {
					bool var_268_bool;
					func_5591(var_1_object);
					if(!var_268_bool) //@nz
						var_254_bool = true;
				}
				if(var_254_bool != 0) {
					bool var_275_bool;
					func_5603(var_1_object);
					if(!var_275_bool) //@nz
						var_253_bool = true;
				}
				if(var_253_bool != 0)
					var_0_object->AddReply(12730, 11927, 13923); //@t
				var_0_object->AddReply(12732, -1, 13926); //@t
				return 0;
			}
			if(var_35_string == 11927) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(10791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10792, 11929, 11928); //@t
				var_0_object->AddReply(10810, 11929, 11950); //@t
				return 0;
			}
			if(var_35_string == 11929) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(10793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10794, 11931, 11930); //@t
				var_0_object->AddReply(10808, 11931, 11946); //@t
				var_0_object->AddReply(10809, 11931, 11948); //@t
				return 0;
			}
			if(var_35_string == 11931) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(10795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10796, 11933, 11932); //@t
				var_0_object->AddReply(10807, 11933, 11945); //@t
				return 0;
			}
			if(var_35_string == 11933) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(10797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10798, 11935, 11934); //@t
				var_0_object->AddReply(10806, 11937, 11943); //@t
				return 0;
			}
			if(var_35_string == 11935) {
				func_509(var_36_bool, "Disappointment");
				var_0_object->SetMessage(10799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10800, 11937, 11936); //@t
				var_0_object->AddReply(10805, 11937, 11941); //@t
				return 0;
			}
			if(var_35_string == 11937) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(10801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(10802, -1, 11938); //@t
				var_0_object->AddReply(10803, -1, 11939); //@t
				var_0_object->AddReply(10804, -1, 11940); //@t
				return 0;
			}
			if(var_35_string == 3851) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3563, 3858, 3852); //@t
				var_0_object->AddReply(3564, 3858, 3853); //@t
				var_0_object->AddReply(3565, 3855, 3854); //@t
				return 0;
			}
			if(var_35_string == 3855) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3567, -1, 3856); //@t
				var_0_object->AddReply(3568, -1, 3857); //@t
				return 0;
			}
			if(var_35_string == 3858) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3571, 3862, 3861); //@t
				var_0_object->AddReply(3582, 3874, 3873); //@t
				var_0_object->AddReply(3570, -1, 3860); //@t
				return 0;
			}
			if(var_35_string == 3874) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3584, 3867, 3875); //@t
				return 0;
			}
			if(var_35_string == 3862) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3573, 3864, 3863); //@t
				var_0_object->AddReply(3576, 3867, 3866); //@t
				return 0;
			}
			if(var_35_string == 3864) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3575, 3867, 3865); //@t
				var_0_object->AddReply(3579, -1, 3870); //@t
				return 0;
			}
			if(var_35_string == 3867) {
				func_509(var_36_bool, "Neutral");
				var_0_object->SetMessage(3577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3578, -1, 3869); //@t
				var_0_object->AddReply(3581, -1, 3872); //@t
				return 0;
			}
			var_3_string = true;
			bool var_427_bool;
			func_4871(var_427_bool);
			if(var_427_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20e";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_36_bool == 6645) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4873();
			}
			if(var_36_bool == 6653) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_4873();
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_4891();
			}
			if(var_36_bool == 6312) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6313) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6314) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6319) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6320) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6321) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_4879();
			}
			if(var_36_bool == 6327) {
				object var_100_object; object var_101_object;
				var_100_object = var_1_object;
				var_101_object = var_0_object;
				func_4885();
			}
			if(var_36_bool == 6328) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_4885();
			}
			if(var_36_bool == 6329) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_4885();
			}
			if(var_36_bool == 6332) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_4885();
			}
			if(var_36_bool == 6333) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_4885();
			}
			if(var_36_bool == 9456) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_4918();
			}
			if(var_36_bool == 9453) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_4918();
			}
			if(var_36_bool == 9469) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_4924();
			}
			if(var_36_bool == 9466) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_4924();
			}
			if(var_36_bool == 9474) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_4930();
			}
			if(var_35_string == 6305) {
				bool var_148_bool = false;
				bool var_149_bool;
				func_5291(var_1_object);
				if(var_149_bool != 0) {
					bool var_157_bool;
					func_5339(var_1_object);
					if(var_157_bool != 0)
						var_148_bool = true;
				}
				if(var_148_bool != 0) {
					func_1310(var_36_bool, "Neutral");
					var_0_object->SetMessage(5721); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(5722, 6334, 6306); //@t
					var_0_object->AddReply(6003, 6615, 6614); //@t
					return 0;
				}
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8287); //@t
				var_0_object->ClearReplies(); //@t
				bool var_187_bool = false;
				bool var_188_bool;
				func_5303(var_1_object);
				if(var_188_bool != 0) {
					bool var_194_bool;
					func_5327(var_1_object);
					if(var_194_bool != 0)
						var_187_bool = true;
				}
				if(var_187_bool != 0)
					var_0_object->AddReply(8288, 6307, 9111); //@t
				bool var_203_bool;
				func_5315(var_1_object);
				if(var_203_bool != 0)
					var_0_object->AddReply(8291, 6322, 9114); //@t
				bool var_212_bool = false;
				bool var_213_bool;
				func_5627(var_1_object);
				if(var_213_bool != 0) {
					bool var_219_bool;
					func_5351(var_1_object);
					if(var_219_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0)
					var_0_object->AddReply(8299, 9137, 9122); //@t
				bool var_228_bool = true;
				bool var_229_bool = false;
				bool var_230_bool;
				func_5651(var_1_object);
				if(var_230_bool != 0) {
					bool var_236_bool;
					func_5363(var_1_object);
					if(var_236_bool != 0)
						var_229_bool = true;
				}
				if(var_229_bool != 1) {
					bool var_242_bool = false;
					bool var_243_bool;
					func_5615(var_1_object);
					if(var_243_bool != 0) {
						bool var_249_bool;
						func_5363(var_1_object);
						if(var_249_bool != 0)
							var_242_bool = true;
					}
					if(var_242_bool != 1)
						var_228_bool = false;
				}
				if(var_228_bool != 0)
					var_0_object->AddReply(8302, 9457, 9125); //@t
				bool var_254_bool = false;
				bool var_255_bool;
				func_5639(var_1_object);
				if(var_255_bool != 0) {
					bool var_261_bool;
					func_5375(var_1_object);
					if(var_261_bool != 0)
						var_254_bool = true;
				}
				if(var_254_bool != 0)
					var_0_object->AddReply(8310, 9140, 9133); //@t
				var_0_object->AddReply(8723, -1, 9560); //@t
				return 0;
			}
			if(var_35_string == 9140) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8623, 9471, 9470); //@t
				return 0;
			}
			if(var_35_string == 9471) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8625, 9473, 9472); //@t
				return 0;
			}
			if(var_35_string == 9473) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8627, -1, 9474); //@t
				return 0;
			}
			if(var_35_string == 9457) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8610); //@t
				var_0_object->ClearReplies(); //@t
				bool var_298_bool;
				func_5615(var_1_object);
				if(var_298_bool != 0)
					var_0_object->AddReply(8611, 9462, 9458); //@t
				bool var_303_bool;
				func_5651(var_1_object);
				if(var_303_bool != 0)
					var_0_object->AddReply(8612, 9460, 9459); //@t
				return 0;
			}
			if(var_35_string == 9460) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8614, 9139, 9461); //@t
				return 0;
			}
			if(var_35_string == 9139) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8316); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8617, 9465, 9464); //@t
				return 0;
			}
			if(var_35_string == 9465) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8619, -1, 9466); //@t
				return 0;
			}
			if(var_35_string == 9462) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8616, 9138, 9463); //@t
				return 0;
			}
			if(var_35_string == 9138) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8620, 9468, 9467); //@t
				return 0;
			}
			if(var_35_string == 9468) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8621); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8622, -1, 9469); //@t
				return 0;
			}
			if(var_35_string == 9137) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8604, 9452, 9451); //@t
				return 0;
			}
			if(var_35_string == 9452) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8605); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8607, 9455, 9454); //@t
				var_0_object->AddReply(8606, -1, 9453); //@t
				return 0;
			}
			if(var_35_string == 9455) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(8608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8609, -1, 9456); //@t
				return 0;
			}
			if(var_35_string == 6322) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5738, 6324, 6323); //@t
				var_0_object->AddReply(5745, 6331, 6330); //@t
				return 0;
			}
			if(var_35_string == 6331) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5747, -1, 6332); //@t
				var_0_object->AddReply(5748, -1, 6333); //@t
				return 0;
			}
			if(var_35_string == 6324) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5740, 6326, 6325); //@t
				var_0_object->AddReply(5744, -1, 6329); //@t
				return 0;
			}
			if(var_35_string == 6326) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5742, -1, 6327); //@t
				var_0_object->AddReply(5743, -1, 6328); //@t
				return 0;
			}
			if(var_35_string == 6307) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5724, 6309, 6308); //@t
				var_0_object->AddReply(5732, 6318, 6317); //@t
				var_0_object->AddReply(5736, -1, 6321); //@t
				return 0;
			}
			if(var_35_string == 6318) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5734, -1, 6319); //@t
				var_0_object->AddReply(5735, -1, 6320); //@t
				return 0;
			}
			if(var_35_string == 6309) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5725); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5726, 6311, 6310); //@t
				var_0_object->AddReply(5730, -1, 6314); //@t
				var_0_object->AddReply(5731, 6311, 6315); //@t
				return 0;
			}
			if(var_35_string == 6311) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5727); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5728, -1, 6312); //@t
				var_0_object->AddReply(5729, -1, 6313); //@t
				return 0;
			}
			if(var_35_string == 6615) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6004); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6005, 6618, 6616); //@t
				var_0_object->AddReply(6006, 6625, 6617); //@t
				return 0;
			}
			if(var_35_string == 6618) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6011, 6625, 6622); //@t
				var_0_object->AddReply(6015, 6625, 6628); //@t
				return 0;
			}
			if(var_35_string == 6334) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(5749); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6008, 6621, 6619); //@t
				var_0_object->AddReply(6009, 6621, 6620); //@t
				return 0;
			}
			if(var_35_string == 6621) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6010); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6016, 6632, 6631); //@t
				var_0_object->AddReply(6013, 6625, 6624); //@t
				return 0;
			}
			if(var_35_string == 6625) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6014); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6018, 6632, 6633); //@t
				return 0;
			}
			if(var_35_string == 6632) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6019, 6636, 6634); //@t
				var_0_object->AddReply(6020, 6637, 6635); //@t
				var_0_object->AddReply(6039, 6661, 6660); //@t
				return 0;
			}
			if(var_35_string == 6661) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6041, 6636, 6662); //@t
				return 0;
			}
			if(var_35_string == 6637) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6022); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6023, 6641, 6638); //@t
				var_0_object->AddReply(6027, 6652, 6642); //@t
				var_0_object->AddReply(6029, 6647, 6646); //@t
				return 0;
			}
			if(var_35_string == 6647) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6031, 6652, 6648); //@t
				var_0_object->AddReply(6032, 6650, 6649); //@t
				return 0;
			}
			if(var_35_string == 6650) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6034, 6652, 6651); //@t
				var_0_object->AddReply(6037, 6641, 6655); //@t
				return 0;
			}
			if(var_35_string == 6652) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6035); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6036, -1, 6653); //@t
				var_0_object->AddReply(6038, 6641, 6656); //@t
				return 0;
			}
			if(var_35_string == 6636) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6024, 6641, 6639); //@t
				var_0_object->AddReply(6025, 6641, 6640); //@t
				return 0;
			}
			if(var_35_string == 6641) {
				func_1310(var_36_bool, "Neutral");
				var_0_object->SetMessage(6026); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6028, -1, 6645); //@t
				return 0;
			}
			var_3_string = true;
			bool var_587_bool;
			func_4871(var_587_bool);
			if(var_587_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x52f";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_36_bool == 9768) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4954();
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_4942();
				object var_95_object = var_1_object;
				func_5020(var_0_object);
			}
			if(var_36_bool == 9769) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_4942();
			}
			if(var_36_bool == 9760) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_4942();
			}
			if(var_36_bool == 9762) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_4942();
			}
			if(var_36_bool == 12327) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_4954();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4986();
				object var_141_object = var_1_object;
				func_5020(var_0_object);
			}
			if(var_36_bool == 9736) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_4936();
			}
			if(var_36_bool == 9737) {
				object var_151_object; object var_152_object;
				var_151_object = var_1_object;
				var_152_object = var_0_object;
				func_4936();
			}
			if(var_36_bool == 9738) {
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_4936();
			}
			if(var_36_bool == 9745) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_4936();
			}
			if(var_36_bool == 9746) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_4936();
			}
			if(var_36_bool == 9788) {
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_4948();
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_4992();
			}
			if(var_36_bool == 9789) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_4948();
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_4992();
			}
			if(var_35_string == 9728) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8869); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool = false;
				bool var_223_bool;
				func_5399(var_1_object);
				if(var_223_bool != 0) {
					bool var_231_bool;
					func_5435(var_1_object);
					if(var_231_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_object->AddReply(8889, 9751, 9750); //@t
				bool var_240_bool = false;
				bool var_241_bool = false;
				bool var_242_bool;
				func_5423(var_1_object);
				if(var_242_bool != 0) {
					bool var_248_bool;
					func_5399(var_1_object);
					if(!var_248_bool) //@nz
						var_241_bool = true;
				}
				if(var_241_bool != 0) {
					bool var_251_bool;
					func_5435(var_1_object);
					if(var_251_bool != 0)
						var_240_bool = true;
				}
				if(var_240_bool != 0)
					var_0_object->AddReply(11136, 12326, 12325); //@t
				bool var_256_bool;
				func_5387(var_1_object);
				if(var_256_bool != 0)
					var_0_object->AddReply(8888, 9729, 9749); //@t
				bool var_265_bool = false;
				bool var_266_bool;
				func_5411(var_1_object);
				if(var_266_bool != 0) {
					bool var_272_bool;
					func_5447(var_1_object);
					if(var_272_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0)
					var_0_object->AddReply(8908, 9772, 9771); //@t
				var_0_object->AddReply(11134, -1, 12323); //@t
				return 0;
			}
			if(var_35_string == 9772) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8909); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8913, 9778, 9777); //@t
				var_0_object->AddReply(8910, 9775, 9773); //@t
				var_0_object->AddReply(8911, 9775, 9774); //@t
				return 0;
			}
			if(var_35_string == 9775) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8915, -1, 9779); //@t
				return 0;
			}
			if(var_35_string == 9778) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8914); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8916, 9781, 9780); //@t
				var_0_object->AddReply(8918, 9783, 9782); //@t
				return 0;
			}
			if(var_35_string == 9783) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8920, 9786, 9784); //@t
				return 0;
			}
			if(var_35_string == 9781) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8921, 9786, 9785); //@t
				return 0;
			}
			if(var_35_string == 9786) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8923, -1, 9788); //@t
				var_0_object->AddReply(8924, -1, 9789); //@t
				return 0;
			}
			if(var_35_string == 9729) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8871, 9731, 9730); //@t
				var_0_object->AddReply(8887, 9731, 9747); //@t
				return 0;
			}
			if(var_35_string == 9731) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8873, 9733, 9732); //@t
				var_0_object->AddReply(8880, 9740, 9739); //@t
				return 0;
			}
			if(var_35_string == 9740) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8882, 9733, 9741); //@t
				var_0_object->AddReply(8883, 9744, 9743); //@t
				return 0;
			}
			if(var_35_string == 9744) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8885, -1, 9745); //@t
				var_0_object->AddReply(8886, -1, 9746); //@t
				return 0;
			}
			if(var_35_string == 9733) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8875, 9735, 9734); //@t
				var_0_object->AddReply(8879, -1, 9738); //@t
				return 0;
			}
			if(var_35_string == 9735) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8876); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8877, -1, 9736); //@t
				var_0_object->AddReply(8878, -1, 9737); //@t
				return 0;
			}
			if(var_35_string == 12326) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(11137); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11138, -1, 12327); //@t
				return 0;
			}
			if(var_35_string == 9751) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8890); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8891, 9753, 9752); //@t
				var_0_object->AddReply(8893, 9759, 9754); //@t
				return 0;
			}
			if(var_35_string == 9759) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8899, -1, 9760); //@t
				var_0_object->AddReply(8900, -1, 9762); //@t
				return 0;
			}
			if(var_35_string == 9753) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8892); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8894, 9756, 9755); //@t
				return 0;
			}
			if(var_35_string == 9756) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8895); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8896, 9763, 9757); //@t
				var_0_object->AddReply(8897, 9759, 9758); //@t
				return 0;
			}
			if(var_35_string == 9763) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8902, 9766, 9764); //@t
				var_0_object->AddReply(8903, 9766, 9765); //@t
				return 0;
			}
			if(var_35_string == 9766) {
				func_2585(var_36_bool, "Neutral");
				var_0_object->SetMessage(8904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8905, -1, 9768); //@t
				var_0_object->AddReply(8906, -1, 9769); //@t
				return 0;
			}
			var_3_string = true;
			bool var_462_bool;
			func_4871(var_462_bool);
			if(var_462_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2a";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_35_string == 10322) {
				func_3379(var_36_bool, "Neutral");
				var_0_object->SetMessage(9394); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9395, 10324, 10323); //@t
				var_0_object->AddReply(9407, 10328, 10335); //@t
				return 0;
			}
			if(var_35_string == 10324) {
				func_3379(var_36_bool, "Neutral");
				var_0_object->SetMessage(9396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9397, 10326, 10325); //@t
				var_0_object->AddReply(9405, -1, 10333); //@t
				var_0_object->AddReply(9406, -1, 10334); //@t
				return 0;
			}
			if(var_35_string == 10326) {
				func_3379(var_36_bool, "Neutral");
				var_0_object->SetMessage(9398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9399, 10328, 10327); //@t
				var_0_object->AddReply(9403, -1, 10331); //@t
				var_0_object->AddReply(9404, -1, 10332); //@t
				return 0;
			}
			if(var_35_string == 10328) {
				func_3379(var_36_bool, "Neutral");
				var_0_object->SetMessage(9400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9401, -1, 10329); //@t
				var_0_object->AddReply(9402, -1, 10330); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_4871(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd44";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool)
	{
		if(1 != 0) {
			func_4778();
			if(var_36_bool == 12266) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5072();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_5052();
				object var_65_object = var_1_object;
				func_5036(var_0_object);
			}
			if(var_36_bool == 12267) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_5072();
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_5052();
				object var_97_object = var_1_object;
				func_5036(var_0_object);
			}
			if(var_36_bool == 12281) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_5084();
				object var_105_object; object var_106_object;
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_5078();
			}
			if(var_35_string == 12246) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11065); //@t
				var_0_object->ClearReplies(); //@t
				bool var_127_bool = false;
				bool var_128_bool;
				func_5471(var_1_object);
				if(var_128_bool != 0) {
					bool var_136_bool;
					func_5459(var_1_object);
					if(var_136_bool != 0)
						var_127_bool = true;
				}
				if(var_127_bool != 0)
					var_0_object->AddReply(11066, 12248, 12247); //@t
				bool var_145_bool = false;
				bool var_146_bool;
				func_5495(var_1_object);
				if(var_146_bool != 0) {
					bool var_152_bool;
					func_5483(var_1_object);
					if(var_152_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0)
					var_0_object->AddReply(11079, 12268, 12263); //@t
				var_0_object->AddReply(11505, -1, 12707); //@t
				return 0;
			}
			if(var_35_string == 12268) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11084, 12271, 12269); //@t
				var_0_object->AddReply(11085, 12272, 12270); //@t
				return 0;
			}
			if(var_35_string == 12272) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11088, 12275, 12273); //@t
				return 0;
			}
			if(var_35_string == 12271) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11089, 12275, 12274); //@t
				return 0;
			}
			if(var_35_string == 12275) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11091, 12279, 12276); //@t
				var_0_object->AddReply(11092, 12279, 12277); //@t
				return 0;
			}
			if(var_35_string == 12279) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11094, -1, 12281); //@t
				return 0;
			}
			if(var_35_string == 12248) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11067); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11068, 12250, 12249); //@t
				var_0_object->AddReply(11073, 12255, 12254); //@t
				return 0;
			}
			if(var_35_string == 12250) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11069); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11070, 12257, 12251); //@t
				var_0_object->AddReply(11071, 12257, 12252); //@t
				var_0_object->AddReply(11072, 12255, 12253); //@t
				return 0;
			}
			if(var_35_string == 12255) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11075, 12257, 12256); //@t
				return 0;
			}
			if(var_35_string == 12257) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11076); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11077, 12264, 12261); //@t
				var_0_object->AddReply(11078, 12264, 12262); //@t
				return 0;
			}
			if(var_35_string == 12264) {
				func_3670(var_36_bool, "Neutral");
				var_0_object->SetMessage(11080); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11081, -1, 12266); //@t
				var_0_object->AddReply(11082, -1, 12267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_255_bool;
			func_4871(var_255_bool);
			if(var_255_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe67";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int)
	{
		if(1 != 0) {
			func_4778();
			if(var_36_int == 14897) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_5117();
			}
			if(var_36_int == 14911) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_5102();
			}
			if(var_36_int == 13535) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_5111();
			}
			if(var_35_int == 13534) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12374); //@t
				var_0_object->ClearReplies(); //@t
				bool var_100_bool = false;
				bool var_101_bool;
				func_5543(var_1_object);
				if(!var_101_bool) { //@nz
					bool var_110_bool;
					func_5567(var_1_object);
					if(var_110_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0)
					var_0_object->AddReply(13641, 14898, 14897); //@t
				bool var_119_bool;
				func_5555(var_1_object);
				if(var_119_bool != 0)
					var_0_object->AddReply(12375, 13536, 13535); //@t
				var_0_object->AddReply(13658, -1, 14916); //@t
				return 0;
			}
			if(var_35_int == 13536) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12378, 13544, 13538); //@t
				var_0_object->AddReply(12377, 13539, 13537); //@t
				return 0;
			}
			if(var_35_int == 13539) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12380, 13541, 13540); //@t
				return 0;
			}
			if(var_35_int == 13541) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12382, -1, 13542); //@t
				var_0_object->AddReply(12383, -1, 13543); //@t
				return 0;
			}
			if(var_35_int == 13544) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12385, 13552, 13545); //@t
				var_0_object->AddReply(12386, 13547, 13546); //@t
				return 0;
			}
			if(var_35_int == 13547) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12387); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12388, 13550, 13548); //@t
				var_0_object->AddReply(12389, 13550, 13549); //@t
				return 0;
			}
			if(var_35_int == 13550) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12390); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12391, -1, 13551); //@t
				return 0;
			}
			if(var_35_int == 13552) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12393, 13559, 13554); //@t
				var_0_object->AddReply(12394, 13557, 13555); //@t
				var_0_object->AddReply(12395, 13558, 13556); //@t
				return 0;
			}
			if(var_35_int == 13558) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12397); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12403, 13565, 13564); //@t
				return 0;
			}
			if(var_35_int == 13557) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12396); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12402, 13565, 13563); //@t
				return 0;
			}
			if(var_35_int == 13559) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12398); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12399, 13561, 13560); //@t
				return 0;
			}
			if(var_35_int == 13561) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12401, 13565, 13562); //@t
				return 0;
			}
			if(var_35_int == 13565) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12405, 13570, 13568); //@t
				var_0_object->AddReply(12406, 13570, 13569); //@t
				return 0;
			}
			if(var_35_int == 13570) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(12407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12408, -1, 13572); //@t
				return 0;
			}
			if(var_35_int == 14898) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13642); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13643, 14900, 14899); //@t
				return 0;
			}
			if(var_35_int == 14900) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13644); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13645, 14902, 14901); //@t
				return 0;
			}
			if(var_35_int == 14902) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13646); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13647, 14904, 14903); //@t
				var_0_object->AddReply(13649, 14906, 14905); //@t
				return 0;
			}
			if(var_35_int == 14906) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13652, 14907, 14908); //@t
				return 0;
			}
			if(var_35_int == 14904) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13648); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13651, 14909, 14907); //@t
				var_0_object->AddReply(13655, 14913, 14912); //@t
				return 0;
			}
			if(var_35_int == 14913) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13657, 14909, 14914); //@t
				return 0;
			}
			if(var_35_int == 14909) {
				func_4171(var_36_int, "Neutral");
				var_0_object->SetMessage(13653); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13654, -1, 14911); //@t
				return 0;
			}
			var_3_string = true;
			bool var_298_bool;
			func_4871(var_298_bool);
			if(var_298_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x105c";
	
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_5123(object var_49_object)
{
	func_5821();
	@Trace("ospina blood is given");
	object var_77_object;
	var_49_object = var_77_object;
	func_4813(var_77_object, "d6q01_ospina_blood", 1);
}


void func_4867(int var_91_int)
{
	var_91_int = 2874;
}


void func_4869(string var_92_string)
{
	var_92_string = "ui/NPC_Ospina.png";
}


// @pe
void func_5639(bool var_255_bool)
{
	int var_257_int;
	func_4795(var_257_int, "KnowLaska");
	if(var_257_int == 1)
		var_255_bool = true;
	var_255_bool = false;
}


void func_4871(bool var_38_bool)
{
	var_38_bool = true;
}


// @pe
void func_4873(void)
{
	@SetVariable("ood1Ospina1", 1);
}


// @pe
void func_5387(bool var_256_bool)
{
	int var_258_int;
	func_4795(var_258_int, "ood3Ospina1");
	if(var_258_int == 0) {
		var_256_bool = true;
		return 0;
	}
	var_256_bool = false;
}


// @pe
void func_4879(void)
{
	@SetVariable("ood1Ospina2", 1);
}


// @pe
void func_5137(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5651(bool var_230_bool)
{
	int var_232_int;
	func_4795(var_232_int, "KnowMladVlad");
	if(var_232_int == 1)
		var_230_bool = true;
	var_230_bool = false;
}


// @pe
void func_4885(void)
{
	@SetVariable("ood1Ospina3", 1);
}


void func_5143(void)
{
	@SetVariable("d6q01OspinaVolonteer", 1);
	object var_145_object;
	func_5722(var_145_object);
	object var_141_object;
	var_145_object = var_141_object;
	object var_142_object;
	var_141_object->FindMark(var_142_object, "d6q01AlexandrGotoJulia");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01AlexandrGotoKaterina");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01AlexandrGotoLara");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01AlexangrGotoJulLaraSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01BigVladGotoAnna");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01BigVladGotoAnnaOspinaSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01BigVladGotoOspina");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01KaterinaGotoLaska");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01KaterinagotoLaskaSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01KillerIsKlara");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01LaskaGotoAlbinos");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01ViktorGotoAlexandr");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01ViktorGotoAlxBigSelf");
	if(var_142_object != 0)
		var_142_object->Remove();
	var_141_object->FindMark(var_142_object, "d6q01ViktorGotoBigVlad");
	if(var_142_object != 0)
		var_142_object->Remove();
	func_5837();
	bool var_189_bool;
	func_5705(var_189_bool, 112);
	bool var_197_bool;
	func_5705(var_197_bool, 113);
	bool var_199_bool;
	func_5705(var_199_bool, 114);
	bool var_201_bool;
	func_5705(var_201_bool, 115);
	bool var_203_bool;
	func_5705(var_203_bool, 116);
	bool var_205_bool;
	func_5705(var_205_bool, 117);
	bool var_207_bool;
	func_4826(var_207_bool, "quest_d6_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5399(bool var_223_bool)
{
	int var_225_int;
	func_4795(var_225_int, "ood3Ospina2");
	if(var_225_int == 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


// @pe
void func_2585(object var_2_object, string var_206_string)
{
	bool var_207_bool;
	func_4871(var_207_bool);
	if(!var_207_bool) //@nz
		return 0;
	if(var_206_string == var_2_object)
		return 0;
	string var_210_string;
	func_4760(var_210_string);
	var_2_object = var_210_string;
}


void func_4891(void)
{
	object var_55_object;
	func_5722(var_55_object);
	object var_53_object;
	var_55_object = var_53_object;
	object var_54_object;
	var_53_object->FindMark(var_54_object, "d1q03KapellaGotoOspina");
	if(var_54_object != 0)
		var_54_object->Remove();
	var_53_object->FindMark(var_54_object, "d1q03MladVladGotoOspina");
	if(var_54_object != 0)
		var_54_object->Remove();
	bool var_66_bool;
	func_4826(var_66_bool, "quest_d1_03", "kapella_finish");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1310(object var_2_object, string var_163_string)
{
	bool var_164_bool;
	func_4871(var_164_bool);
	if(!var_164_bool) //@nz
		return 0;
	if(var_163_string == var_2_object)
		return 0;
	string var_167_string;
	func_4760(var_167_string);
	var_2_object = var_167_string;
}


void func_5663(object var_66_object)
{
	object var_68_object;
	@GetDiaryRoot(var_68_object);
	if(!var_68_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_66_object = false;
	}
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_1056(object var_0_object, int var_157_int, object var_158_object)
{
	var_0_object = var_158_object;
	bool var_168_bool; object var_169_object;
	var_158_object = var_169_object;
	func_4700(var_168_bool, var_169_object);
	if(!var_168_bool) { //@nz
		var_157_int = -2;
		return 8;
	}
	object var_164_object;
	@CreateDialog(var_164_object);
	int var_171_int;
	func_4867(var_171_int);
	var_164_object->SetNPCName(var_171_int);
	string var_172_string;
	func_4869(var_172_string);
	var_164_object->SetPhoto(var_172_string);
	int var_173_int;
	func_5772(var_173_int);
	var_164_object->SetPlayerName(var_173_int);
	bool var_165_bool;
	@IsOverrideActive(var_165_bool);
	if(var_165_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	@DoDialog(var_164_object);
	object var_175_object; object var_176_object;
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(7);
	func_1119(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	bool var_167_bool;
	var_164_object->IsDialogEnd(var_167_bool);
	
	for(;;) {
		var_305_bool = !var_167_bool; //@nz
		if(var_305_bool == 0) goto Label_1108;
		@sync();
		var_164_object->IsDialogEnd(var_167_bool);
	}
	
Label_1108:
	object var_306_object;
	var_158_object = var_306_object;
	func_4756();
	@StopDialog(var_164_object);
	var_164_object->GetReturnValue(-1);
	int var_166_int = var_157_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5411(bool var_266_bool)
{
	int var_268_int;
	func_4795(var_268_int, "ood3Ospina3");
	if(var_268_int == 0) {
		var_266_bool = true;
		return 0;
	}
	var_266_bool = false;
}


void func_5676(bool var_57_bool, object var_58_object, int var_59_int)
{
	object var_66_object;
	func_5663(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	object var_64_object;
	var_63_object->Find(var_59_int, var_64_object);
	if(!var_64_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_59_int);
		var_57_bool = false;
	}
	var_64_object->AddChild(var_58_object);
	@SetVariable("player_diary", 1);
	int var_65_int;
	var_58_object->GetCategory(var_65_int);
	@SetDiarySection(var_65_int);
	var_57_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_5423(bool var_242_bool)
{
	int var_244_int;
	func_4795(var_244_int, "ood3Ospina4");
	if(var_244_int == 0) {
		var_242_bool = true;
		return 0;
	}
	var_242_bool = false;
}


void func_49(object var_0_object, int var_39_int, object var_40_object)
{
	var_0_object = var_40_object;
	bool var_50_bool; object var_51_object;
	var_40_object = var_51_object;
	func_4700(var_50_bool, var_51_object);
	if(!var_50_bool) { //@nz
		var_39_int = -2;
		return 8;
	}
	object var_46_object;
	@CreateDialog(var_46_object);
	int var_91_int;
	func_4867(var_91_int);
	var_46_object->SetNPCName(var_91_int);
	string var_92_string;
	func_4869(var_92_string);
	var_46_object->SetPhoto(var_92_string);
	int var_93_int;
	func_5772(var_93_int);
	var_46_object->SetPlayerName(var_93_int);
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	@DoDialog(var_46_object);
	object var_102_object; object var_103_object;
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	bool var_49_bool;
	var_46_object->IsDialogEnd(var_49_bool);
	
	for(;;) {
		var_146_bool = !var_49_bool; //@nz
		if(var_146_bool == 0) goto Label_101;
		@sync();
		var_46_object->IsDialogEnd(var_49_bool);
	}
	
Label_101:
	object var_147_object;
	var_40_object = var_147_object;
	func_4756();
	@StopDialog(var_46_object);
	var_46_object->GetReturnValue(-1);
	int var_48_int = var_39_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3379(object var_2_object, string var_41_string)
{
	bool var_42_bool;
	func_4871(var_42_bool);
	if(!var_42_bool) //@nz
		return 0;
	if(var_41_string == var_2_object)
		return 0;
	string var_45_string;
	func_4760(var_45_string);
	var_2_object = var_45_string;
}


// @pe
void func_4918(void)
{
	@SetVariable("ood1Ospina4", 1);
}


// @pe
void func_5435(bool var_231_bool)
{
	int var_233_int;
	func_4795(var_233_int, "d3q01");
	if(var_233_int == 2)
		var_231_bool = true;
	var_231_bool = false;
}


// @pe
void func_4924(void)
{
	@SetVariable("ood1Ospina5", 1);
}


// @pe
void func_4930(void)
{
	@SetVariable("ood1Ospina6", 1);
}


// @pe
void func_5447(bool var_272_bool)
{
	int var_274_int;
	func_4795(var_274_int, "d3q01");
	if(var_274_int == 6)
		var_272_bool = true;
	var_272_bool = false;
}


// @pe
void func_4936(void)
{
	@SetVariable("ood3Ospina1", 1);
}


void func_5705(bool var_189_bool, int var_190_int)
{
	object var_195_object;
	func_5663(var_195_object);
	object var_193_object;
	var_195_object = var_193_object;
	object var_194_object;
	var_193_object->Find(var_190_int, var_194_object);
	if(!var_194_object) //@nz
		var_189_bool = false;
	var_194_object->Remove();
	var_189_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4683(bool var_36_bool, object var_37_object)
{
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	bool var_45_bool;
	@Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
}


// @pe
void func_4171(object var_2_object, string var_84_string)
{
	bool var_85_bool;
	func_4871(var_85_bool);
	if(!var_85_bool) //@nz
		return 0;
	if(var_84_string == var_2_object)
		return 0;
	string var_88_string;
	func_4760(var_88_string);
	var_2_object = var_88_string;
}


// @pe
void func_4942(void)
{
	@SetVariable("ood3Ospina2", 1);
}


void func_335(object var_0_object, int var_539_int, object var_540_object)
{
	var_0_object = var_540_object;
	bool var_550_bool; object var_551_object;
	var_540_object = var_551_object;
	func_4700(var_550_bool, var_551_object);
	if(!var_550_bool) { //@nz
		var_539_int = -2;
		return 8;
	}
	object var_546_object;
	@CreateDialog(var_546_object);
	int var_553_int;
	func_4867(var_553_int);
	var_546_object->SetNPCName(var_553_int);
	string var_554_string;
	func_4869(var_554_string);
	var_546_object->SetPhoto(var_554_string);
	int var_555_int;
	func_5772(var_555_int);
	var_546_object->SetPlayerName(var_555_int);
	bool var_547_bool;
	@IsOverrideActive(var_547_bool);
	if(var_547_bool != 0) {
		var_539_int = -2;
		return 8;
	}
	@DoDialog(var_546_object);
	object var_557_object; object var_558_object;
	var_540_object = var_557_object;
	var_546_object = var_558_object;
	TaskCall(5);
	func_398(var_559_object, var_560_object, var_561_string, var_562_bool, var_557_object, var_558_object);
	TaskReturn();
	bool var_549_bool;
	var_546_object->IsDialogEnd(var_549_bool);
	
	for(;;) {
		var_629_bool = !var_549_bool; //@nz
		if(var_629_bool == 0) goto Label_387;
		@sync();
		var_546_object->IsDialogEnd(var_549_bool);
	}
	
Label_387:
	object var_630_object;
	var_540_object = var_630_object;
	func_4756();
	@StopDialog(var_546_object);
	var_546_object->GetReturnValue(-1);
	int var_548_int = var_539_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5459(bool var_136_bool)
{
	int var_138_int;
	func_4795(var_138_int, "d4q01_subquest");
	if(var_138_int == 1)
		var_136_bool = true;
	var_136_bool = false;
}


// @pe
void func_4948(void)
{
	@SetVariable("ood3Ospina3", 1);
}


// @pe
void func_3670(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_4871(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string;
	func_4760(var_115_string);
	var_2_object = var_115_string;
}


void func_4695(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_2392(object var_0_object, int var_358_int, object var_359_object)
{
	var_0_object = var_359_object;
	bool var_369_bool; object var_370_object;
	var_359_object = var_370_object;
	func_4700(var_369_bool, var_370_object);
	if(!var_369_bool) { //@nz
		var_358_int = -2;
		return 8;
	}
	object var_365_object;
	@CreateDialog(var_365_object);
	int var_372_int;
	func_4867(var_372_int);
	var_365_object->SetNPCName(var_372_int);
	string var_373_string;
	func_4869(var_373_string);
	var_365_object->SetPhoto(var_373_string);
	int var_374_int;
	func_5772(var_374_int);
	var_365_object->SetPlayerName(var_374_int);
	bool var_366_bool;
	@IsOverrideActive(var_366_bool);
	if(var_366_bool != 0) {
		var_358_int = -2;
		return 8;
	}
	@DoDialog(var_365_object);
	object var_376_object; object var_377_object;
	var_359_object = var_376_object;
	var_365_object = var_377_object;
	TaskCall(9);
	func_2455(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object);
	TaskReturn();
	bool var_368_bool;
	var_365_object->IsDialogEnd(var_368_bool);
	
	for(;;) {
		var_457_bool = !var_368_bool; //@nz
		if(var_457_bool == 0) goto Label_2444;
		@sync();
		var_365_object->IsDialogEnd(var_368_bool);
	}
	
Label_2444:
	object var_458_object;
	var_359_object = var_458_object;
	func_4756();
	@StopDialog(var_365_object);
	var_365_object->GetReturnValue(-1);
	int var_367_int = var_358_int;
}
EMIT "Stack[-4] = 0";


void func_5722(object var_51_object)
{
	object var_54_object; object var_55_object;
	@GetMainOutdoorScene(var_54_object);
	if(var_54_object == null) {
		@Trace("Can't find main outdoor scene");
		var_55_object = null;
		var_55_object = var_51_object;
	}
	var_54_object->GetMap(var_55_object);
	var_55_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4954(void)
{
	@SetVariable("d3q01", 3);
	object var_47_object;
	func_5722(var_47_object);
	object var_44_object;
	var_47_object = var_44_object;
	float var_58_float;
	func_4838(var_58_float);
	var_44_object->AddMark("d3q01OspinaGotoBigVlad", "pt_map_bigvlad", 1, 11152, var_58_float);
	float var_65_float;
	func_4838(var_65_float);
	var_44_object->AddMark("d3q01OspinaGotoBigVladSelf", "pt_map_ospina", 1, 15296, var_65_float);
	func_5805();
}
EMIT "Stack[-1] = 0";


void func_4700(bool var_50_bool, object var_51_object)
{
	cvector var_61_cvector;
	var_51_object->GetPosition(var_61_cvector);
	float var_60_float;
	var_51_object->GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_68_float + var_60_float);
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	@GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (var_69_float + var_60_float);
	cvector var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_72_float = sqrt(var_63_cvector | var_63_cvector);
	var_63_cvector /= var_72_float;
	cvector var_64_cvector = -var_63_cvector;
	cvector var_75_cvector;
	func_4785(var_75_cvector, (var_64_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_65_cvector = ((var_63_cvector * 70) + (var_75_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0)
		var_50_bool = false;
	@StopWorld();
	@CameraTransit((var_62_cvector + var_65_cvector), var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_88_float, var_89_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_50_bool = true;
}


// @pe
void func_1119(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_175_object, object var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_182_bool = false;
		bool var_183_bool;
		func_5291(var_1_object);
		if(var_183_bool != 0) {
			bool var_191_bool;
			func_5339(var_1_object);
			if(var_191_bool != 0)
				var_182_bool = true;
		}
		if(var_182_bool != 0) {
			func_1310(var_176_object, "Neutral");
			var_0_object->SetMessage(5721); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(5722, 6334, 6306); //@t
			var_0_object->AddReply(6003, 6615, 6614); //@t
		} else {
					func_1310(var_176_object, "Neutral");
					var_0_object->SetMessage(8287); //@t
					var_0_object->ClearReplies(); //@t
					bool var_219_bool = false;
					bool var_220_bool;
					func_5303(var_1_object);
					if(var_220_bool != 0) {
						bool var_226_bool;
						func_5327(var_1_object);
						if(var_226_bool != 0)
							var_219_bool = true;
					}
					if(var_219_bool != 0)
						var_0_object->AddReply(8288, 6307, 9111); //@t
					bool var_235_bool;
					func_5315(var_1_object);
					if(var_235_bool != 0)
						var_0_object->AddReply(8291, 6322, 9114); //@t
					bool var_244_bool = false;
					bool var_245_bool;
					func_5627(var_1_object);
					if(var_245_bool != 0) {
						bool var_251_bool;
						func_5351(var_1_object);
						if(var_251_bool != 0)
							var_244_bool = true;
					}
					if(var_244_bool != 0)
						var_0_object->AddReply(8299, 9137, 9122); //@t
					bool var_260_bool = true;
					bool var_261_bool = false;
					bool var_262_bool;
					func_5651(var_1_object);
					if(var_262_bool != 0) {
						bool var_268_bool;
						func_5363(var_1_object);
						if(var_268_bool != 0)
							var_261_bool = true;
					}
					if(var_261_bool != 1) {
						bool var_274_bool = false;
						bool var_275_bool;
						func_5615(var_1_object);
						if(var_275_bool != 0) {
							bool var_281_bool;
							func_5363(var_1_object);
							if(var_281_bool != 0)
								var_274_bool = true;
						}
						if(var_274_bool != 1)
							var_260_bool = false;
					}
					if(var_260_bool != 0)
						var_0_object->AddReply(8302, 9457, 9125); //@t
					bool var_286_bool = false;
					bool var_287_bool;
					func_5639(var_1_object);
					if(var_287_bool != 0) {
						bool var_293_bool;
						func_5375(var_1_object);
						if(var_293_bool != 0)
							var_286_bool = true;
					}
					if(var_286_bool != 0)
						var_0_object->AddReply(8310, 9140, 9133); //@t
					var_0_object->AddReply(8723, -1, 9560); //@t
		}
	}
	for(;;) {
		bool var_209_bool;
		func_4871(var_209_bool);
		if(var_209_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4760(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1309;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1309:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x463";


// @pe
void func_5471(bool var_128_bool)
{
	int var_130_int;
	func_4795(var_130_int, "ood4Ospina1");
	if(var_130_int == 0) {
		var_128_bool = true;
		return 0;
	}
	var_128_bool = false;
}


void func_5739(object var_67_object, string var_68_string, float var_69_float)
{
	object var_77_object;
	@GetMainOutdoorScene(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_75_cvector;
	cvector var_76_cvector;
	bool var_78_bool;
	var_77_object->GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector);
	if(!var_78_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_68_string) + " doesnt exist");
	var_77_object->GetMap(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_88_float = GetByIndex(var_75_cvector, 0);
	var_89_float = GetByIndex(var_75_cvector, 2);
	var_67_object->SetMapParams(var_88_float, var_89_float, var_69_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5483(bool var_152_bool)
{
	int var_154_int;
	func_4795(var_154_int, "d4q01_subquest");
	if(var_154_int == 3)
		var_152_bool = true;
	var_152_bool = false;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_102_object, object var_103_object)
{
	var_0_object = var_103_object;
	var_3_object = false;
	if(1 != 0) {
		object var_109_object; object var_110_object;
		var_109_object = var_102_object;
		var_110_object = var_0_object;
		func_5285();
		func_180(var_103_object, "Neutral");
		var_0_object->SetMessage(309); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(311, 370, 364); //@t
		var_0_object->AddReply(312, 366, 365); //@t
		var_0_object->AddReply(310, 369, 363); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_138_bool;
	func_4871(var_138_bool);
	if(var_138_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


// @pe
void func_5495(bool var_146_bool)
{
	int var_148_int;
	func_4795(var_148_int, "ood4Ospina2");
	if(var_148_int == 0) {
		var_146_bool = true;
		return 0;
	}
	var_146_bool = false;
}


// @pe
void func_4986(void)
{
	@SetVariable("ood3Ospina4", 1);
}


void func_4992(void)
{
	@SetVariable("d3q01", 7);
	object var_177_object;
	func_5722(var_177_object);
	object var_174_object;
	var_177_object = var_174_object;
	float var_182_float;
	func_4838(var_182_float);
	var_174_object->AddMark("d3q01OspinaButchersWillHelpSelf", "pt_map_ospina", 1, 15301, var_182_float);
	func_5789();
	bool var_192_bool;
	func_4826(var_192_bool, "quest_d3_01", "place_butchers");
}
EMIT "Stack[-1] = 0";


// @pe
void func_5507(bool var_244_bool)
{
	int var_246_int;
	func_4795(var_246_int, "d6q01");
	if(var_246_int == 1)
		var_244_bool = true;
	var_244_bool = false;
}


void func_5772(int var_93_int)
{
	int var_95_int;
	@GetVariable("player", var_95_int);
	if(var_95_int == 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x169b";
	}
	if(var_95_int == 1) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
}


// @pe
void func_398(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_557_object, object var_558_object)
{
	var_0_object = var_558_object;
	var_1_object = var_557_object;
	var_3_object = false;
	if(1 != 0) {
		func_509(var_558_object, "Neutral");
		var_0_object->SetMessage(12729); //@t
		var_0_object->ClearReplies(); //@t
		bool var_570_bool = false;
		bool var_571_bool;
		func_5519(var_1_object);
		if(var_571_bool != 0) {
			bool var_577_bool;
			func_5507(var_1_object);
			if(var_577_bool != 0)
				var_570_bool = true;
		}
		if(var_570_bool != 0)
			var_0_object->AddReply(12731, 3851, 13924); //@t
		bool var_586_bool = false;
		bool var_587_bool = false;
		bool var_588_bool = false;
		bool var_589_bool;
		func_5531(var_1_object);
		if(var_589_bool != 0) {
			bool var_595_bool;
			func_5579(var_1_object);
			if(var_595_bool != 0)
				var_588_bool = true;
		}
		if(var_588_bool != 0) {
			bool var_601_bool;
			func_5591(var_1_object);
			if(!var_601_bool) //@nz
				var_587_bool = true;
		}
		if(var_587_bool != 0) {
			bool var_608_bool;
			func_5603(var_1_object);
			if(!var_608_bool) //@nz
				var_586_bool = true;
		}
		if(var_586_bool != 0)
			var_0_object->AddReply(12730, 11927, 13923); //@t
		var_0_object->AddReply(12732, -1, 13926); //@t
		goto Label_479;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x192";
	}
Label_479:
	bool var_621_bool;
	func_4871(var_621_bool);
	if(var_621_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_508;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_508:
		return 0;

	}
	
}


// @pe
void func_5519(bool var_236_bool)
{
	int var_238_int;
	func_4795(var_238_int, "ood6Ospina1");
	if(var_238_int == 0) {
		var_236_bool = true;
		return 0;
	}
	var_236_bool = false;
}


// @pe
void func_5117(void)
{
	@SetVariable("ood8Ospina2", 1);
}


// @pe
void func_4756(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_2455(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_376_object, object var_377_object)
{
	var_0_object = var_377_object;
	var_1_object = var_376_object;
	var_3_object = false;
	if(1 != 0) {
		func_2585(var_377_object, "Neutral");
		var_0_object->SetMessage(8869); //@t
		var_0_object->ClearReplies(); //@t
		bool var_389_bool = false;
		bool var_390_bool;
		func_5399(var_1_object);
		if(var_390_bool != 0) {
			bool var_396_bool;
			func_5435(var_1_object);
			if(var_396_bool != 0)
				var_389_bool = true;
		}
		if(var_389_bool != 0)
			var_0_object->AddReply(8889, 9751, 9750); //@t
		bool var_405_bool = false;
		bool var_406_bool = false;
		bool var_407_bool;
		func_5423(var_1_object);
		if(var_407_bool != 0) {
			bool var_413_bool;
			func_5399(var_1_object);
			if(!var_413_bool) //@nz
				var_406_bool = true;
		}
		if(var_406_bool != 0) {
			bool var_416_bool;
			func_5435(var_1_object);
			if(var_416_bool != 0)
				var_405_bool = true;
		}
		if(var_405_bool != 0)
			var_0_object->AddReply(11136, 12326, 12325); //@t
		bool var_421_bool;
		func_5387(var_1_object);
		if(var_421_bool != 0)
			var_0_object->AddReply(8888, 9729, 9749); //@t
		bool var_430_bool = false;
		bool var_431_bool;
		func_5411(var_1_object);
		if(var_431_bool != 0) {
			bool var_437_bool;
			func_5447(var_1_object);
			if(var_437_bool != 0)
				var_430_bool = true;
		}
		if(var_430_bool != 0)
			var_0_object->AddReply(8908, 9772, 9771); //@t
		var_0_object->AddReply(11134, -1, 12323); //@t
		goto Label_2555;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x99b";
	}
Label_2555:
	bool var_449_bool;
	func_4871(var_449_bool);
	if(var_449_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2584;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2584:
		return 0;

	}
	
}


void func_4760(string var_40_string)
{
	@Trace("playing " + var_40_string);
	float var_43_float;
	float var_44_float;
	@lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float);
	@Trace("start: " + var_43_float);
	@Trace("end: " + var_44_float);
}


// @pe
void func_5627(bool var_213_bool)
{
	int var_215_int;
	func_4795(var_215_int, "KnowKaterina");
	if(var_215_int == 1)
		var_213_bool = true;
	var_213_bool = false;
}


// @pe
void func_5531(bool var_256_bool)
{
	int var_258_int;
	func_4795(var_258_int, "ood6Ospina2");
	if(var_258_int == 0) {
		var_256_bool = true;
		return 0;
	}
	var_256_bool = false;
}


// @pe
void func_5020(object var_96_object)
{
	object var_100_object;
	func_5722(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	func_5739(var_97_object, "pt_map_bigvlad", (float)2);
	object var_120_object;
	func_5722(var_120_object);
	var_96_object->ShowMap(var_120_object);
}


void func_5789(void)
{
	@Trace("Adding diary entry");
	object var_184_object;
	@CreateDiaryEntry(var_184_object, 71, 1, 12153);
	bool var_189_bool; object var_190_object;
	var_184_object = var_190_object;
	func_5676(var_189_bool, var_190_object, 25);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5285(void)
{
	@SetVariable("KnowOspina", 1);
}


// @pe
void func_5543(bool var_101_bool)
{
	int var_103_int;
	func_4795(var_103_int, "d8q01");
	if(var_103_int == 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


void func_4778(void)
{
	bool var_38_bool;
	func_4871(var_38_bool);
	if(var_38_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5291(bool var_149_bool)
{
	int var_151_int;
	func_4795(var_151_int, "ood1Ospina1");
	if(var_151_int == 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


// @pe
void func_5036(object var_66_object)
{
	object var_70_object;
	func_5722(var_70_object);
	object var_67_object;
	var_70_object = var_67_object;
	func_5739(var_67_object, "pt_map_lara", (float)2);
	object var_90_object;
	func_5722(var_90_object);
	var_66_object->ShowMap(var_90_object);
}


void func_5805(void)
{
	@Trace("Adding diary entry");
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 70, 1, 12152);
	bool var_72_bool; object var_73_object;
	var_67_object = var_73_object;
	func_5676(var_72_bool, var_73_object, 25);
}
EMIT "Stack[-1] = 0";


void func_4785(cvector var_75_cvector, cvector var_76_cvector)
{
	float var_79_float = sqrt(var_76_cvector | var_76_cvector);
	if(var_79_float < 0.000001)
		var_75_cvector = [0.0, 0.0, 0.0];
	var_75_cvector = var_76_cvector / var_79_float;
}


// @pe
void func_5555(bool var_119_bool)
{
	int var_121_int;
	func_4795(var_121_int, "ood8Ospina1");
	if(var_121_int == 0) {
		var_119_bool = true;
		return 0;
	}
	var_119_bool = false;
}


// @pe
void func_180(object var_2_object, string var_45_string)
{
	bool var_46_bool;
	func_4871(var_46_bool);
	if(!var_46_bool) //@nz
		return 0;
	if(var_45_string == var_2_object)
		return 0;
	string var_49_string;
	func_4760(var_49_string);
	var_2_object = var_49_string;
}


// @pe
void func_5303(bool var_188_bool)
{
	int var_190_int;
	func_4795(var_190_int, "ood1Ospina2");
	if(var_190_int == 0) {
		var_188_bool = true;
		return 0;
	}
	var_188_bool = false;
}


void func_4025(object var_0_object, int var_633_int, object var_634_object)
{
	var_0_object = var_634_object;
	bool var_644_bool; object var_645_object;
	var_634_object = var_645_object;
	func_4700(var_644_bool, var_645_object);
	if(!var_644_bool) { //@nz
		var_633_int = -2;
		return 8;
	}
	object var_640_object;
	@CreateDialog(var_640_object);
	int var_647_int;
	func_4867(var_647_int);
	var_640_object->SetNPCName(var_647_int);
	string var_648_string;
	func_4869(var_648_string);
	var_640_object->SetPhoto(var_648_string);
	int var_649_int;
	func_5772(var_649_int);
	var_640_object->SetPlayerName(var_649_int);
	bool var_641_bool;
	@IsOverrideActive(var_641_bool);
	if(var_641_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	@DoDialog(var_640_object);
	object var_651_object; object var_652_object;
	var_634_object = var_651_object;
	var_640_object = var_652_object;
	TaskCall(15);
	func_4088(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object);
	TaskReturn();
	bool var_643_bool;
	var_640_object->IsDialogEnd(var_643_bool);
	
	for(;;) {
		var_701_bool = !var_643_bool; //@nz
		if(var_701_bool == 0) goto Label_4077;
		@sync();
		var_640_object->IsDialogEnd(var_643_bool);
	}
	
Label_4077:
	object var_702_object;
	var_634_object = var_702_object;
	func_4756();
	@StopDialog(var_640_object);
	var_640_object->GetReturnValue(-1);
	int var_642_int = var_633_int;
}
EMIT "Stack[-4] = 0";


void func_3258(object var_0_object, int var_309_int, object var_310_object)
{
	var_0_object = var_310_object;
	bool var_320_bool; object var_321_object;
	var_310_object = var_321_object;
	func_4700(var_320_bool, var_321_object);
	if(!var_320_bool) { //@nz
		var_309_int = -2;
		return 8;
	}
	object var_316_object;
	@CreateDialog(var_316_object);
	int var_323_int;
	func_4867(var_323_int);
	var_316_object->SetNPCName(var_323_int);
	string var_324_string;
	func_4869(var_324_string);
	var_316_object->SetPhoto(var_324_string);
	int var_325_int;
	func_5772(var_325_int);
	var_316_object->SetPlayerName(var_325_int);
	bool var_317_bool;
	@IsOverrideActive(var_317_bool);
	if(var_317_bool != 0) {
		var_309_int = -2;
		return 8;
	}
	@DoDialog(var_316_object);
	object var_327_object; object var_328_object;
	var_310_object = var_327_object;
	var_316_object = var_328_object;
	TaskCall(11);
	func_3321(var_329_object, var_330_object, var_331_string, var_332_bool, var_327_object, var_328_object);
	TaskReturn();
	bool var_319_bool;
	var_316_object->IsDialogEnd(var_319_bool);
	
	for(;;) {
		var_354_bool = !var_319_bool; //@nz
		if(var_354_bool == 0) goto Label_3310;
		@sync();
		var_316_object->IsDialogEnd(var_319_bool);
	}
	
Label_3310:
	object var_355_object;
	var_310_object = var_355_object;
	func_4756();
	@StopDialog(var_316_object);
	var_316_object->GetReturnValue(-1);
	int var_318_int = var_309_int;
}
EMIT "Stack[-4] = 0";


void func_4795(int var_103_int, string var_104_string)
{
	int var_106_int;
	@GetVariable(var_104_string, var_106_int);
	var_106_int = var_103_int;
}


void func_5052(void)
{
	@SetVariable("d4q01_subquest", 2);
	object var_51_object;
	func_5722(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_4838(var_62_float);
	var_48_object->AddMark("d4q01OspinaGotoLara", "pt_map_lara", 1, 11504, var_62_float);
}
EMIT "Stack[-1] = 0";


void func_5821(void)
{
	@Trace("Adding diary entry");
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 162, 1, 15395);
	bool var_57_bool; object var_58_object;
	var_52_object = var_58_object;
	func_5676(var_57_bool, var_58_object, 111);
}
EMIT "Stack[-1] = 0";


void func_3516(object var_0_object, int var_461_int, object var_462_object)
{
	var_0_object = var_462_object;
	bool var_472_bool; object var_473_object;
	var_462_object = var_473_object;
	func_4700(var_472_bool, var_473_object);
	if(!var_472_bool) { //@nz
		var_461_int = -2;
		return 8;
	}
	object var_468_object;
	@CreateDialog(var_468_object);
	int var_475_int;
	func_4867(var_475_int);
	var_468_object->SetNPCName(var_475_int);
	string var_476_string;
	func_4869(var_476_string);
	var_468_object->SetPhoto(var_476_string);
	int var_477_int;
	func_5772(var_477_int);
	var_468_object->SetPlayerName(var_477_int);
	bool var_469_bool;
	@IsOverrideActive(var_469_bool);
	if(var_469_bool != 0) {
		var_461_int = -2;
		return 8;
	}
	@DoDialog(var_468_object);
	object var_479_object; object var_480_object;
	var_462_object = var_479_object;
	var_468_object = var_480_object;
	TaskCall(13);
	func_3579(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	bool var_471_bool;
	var_468_object->IsDialogEnd(var_471_bool);
	
	for(;;) {
		var_535_bool = !var_471_bool; //@nz
		if(var_535_bool == 0) goto Label_3568;
		@sync();
		var_468_object->IsDialogEnd(var_471_bool);
	}
	
Label_3568:
	object var_536_object;
	var_462_object = var_536_object;
	func_4756();
	@StopDialog(var_468_object);
	var_468_object->GetReturnValue(-1);
	int var_470_int = var_461_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5567(bool var_110_bool)
{
	int var_112_int;
	func_4795(var_112_int, "ood8Ospina2");
	if(var_112_int == 0) {
		var_110_bool = true;
		return 0;
	}
	var_110_bool = false;
}


void func_4800(object var_82_object, object var_83_object, int var_84_int)
{
	int var_88_int;
	var_83_object->GetItemID(var_88_int);
	int var_89_int;
	@GetInvItemProperty(var_89_int, var_88_int, "Category");
	bool var_90_bool;
	var_82_object->AddItem(var_90_bool, var_83_object, var_89_int, var_84_int);
	if(!var_90_bool) //@nz
		var_82_object->DropItems(var_83_object, var_84_int);
}


// @pe
void func_5315(bool var_203_bool)
{
	int var_205_int;
	func_4795(var_205_int, "ood1Ospina3");
	if(var_205_int == 0) {
		var_203_bool = true;
		return 0;
	}
	var_203_bool = false;
}


// @pe
void func_5579(bool var_262_bool)
{
	int var_264_int;
	func_4795(var_264_int, "microscope_d6q01_ospina_blood");
	if(var_264_int != 0) {
		var_262_bool = true;
		return 0;
	}
	var_262_bool = false;
}


void func_4813(object var_77_object, string var_78_string, int var_79_int)
{
	object var_81_object;
	@CreateInvItem(var_81_object);
	var_81_object->SetItemName(var_78_string);
	object var_82_object; object var_83_object; int var_84_int;
	var_77_object = var_82_object;
	var_81_object = var_83_object;
	var_79_int = var_84_int;
	func_4800(var_82_object, var_83_object, var_84_int);
}
EMIT "Stack[-1] = 0";


void func_5837(void)
{
	@Trace("Adding diary entry");
	object var_181_object;
	@CreateDiaryEntry(var_181_object, 121, 1, 13744);
	bool var_186_bool; object var_187_object;
	var_181_object = var_187_object;
	func_5676(var_186_bool, var_187_object, 111);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5327(bool var_194_bool)
{
	int var_196_int;
	func_4795(var_196_int, "d1q01FirstGeorgVisit");
	if(var_196_int == 1)
		var_194_bool = true;
	var_194_bool = false;
}


// @pe
void func_5072(void)
{
	@SetVariable("ood4Ospina1", 1);
}


// @pe
void func_5078(void)
{
	@SetVariable("d4q01_subquest", 1000);
}


// @pe
void func_5591(bool var_268_bool)
{
	int var_270_int;
	func_4795(var_270_int, "d6q01");
	if(var_270_int == 1000)
		var_268_bool = true;
	var_268_bool = false;
}


void func_4826(bool var_192_bool, string var_193_string, string var_194_string)
{
	object var_196_object;
	@FindActor(var_196_object, var_193_string);
	if(var_196_object == null)
		var_192_bool = false;
	@Trigger(var_196_object, var_194_string);
	var_192_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5339(bool var_157_bool)
{
	int var_159_int;
	func_4795(var_159_int, "d1q03");
	if(var_159_int == 1)
		var_157_bool = true;
	var_157_bool = false;
}


// @pe
void func_5084(void)
{
	@SetVariable("ood4Ospina2", 1);
}


void func_5853(void)
{
	@Trace("Adding diary entry");
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 178, 1, 15437);
	bool var_57_bool; object var_58_object;
	var_52_object = var_58_object;
	func_5676(var_57_bool, var_58_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5090(void)
{
	@SetVariable("ood6Ospina1", 1);
}


// @pe
void func_5603(bool var_275_bool)
{
	int var_277_int;
	func_4795(var_277_int, "d6q01");
	if(var_277_int == -1)
		var_275_bool = true;
	var_275_bool = false;
}


void func_4838(float var_62_float)
{
	float var_64_float;
	@GetGameTime(var_64_float);
	var_64_float = var_62_float;
}


// @pe
void func_5351(bool var_219_bool)
{
	int var_221_int;
	func_4795(var_221_int, "ood1Ospina4");
	if(var_221_int == 0) {
		var_219_bool = true;
		return 0;
	}
	var_219_bool = false;
}


// @pe
void func_5096(void)
{
	@SetVariable("ood6Ospina2", 1);
}


void func_4843(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	var_151_int = 1 + (var_153_float / 24);
}


void func_5869(void)
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_5102(void)
{
	@SetVariable("d8q01MladVladIsBad", 1);
	func_5853();
}


// @pe
void func_5615(bool var_243_bool)
{
	int var_245_int;
	func_4795(var_245_int, "KnowBigVlad");
	if(var_245_int == 1)
		var_243_bool = true;
	var_243_bool = false;
}


// @pe
void func_5873(object var_36_object)
{
	var_37_bool = GlobalVars[1];
	if(!var_37_bool) { //@nz
		int var_39_int; object var_40_object;
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_148_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_149_bool;
	func_4852(var_149_bool, 1);
	if(var_149_bool != 0) {
		int var_157_int; object var_158_object;
		var_36_object = var_158_object;
		TaskCall(6);
		func_1056(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 0;
	}
	bool var_307_bool;
	func_4852(var_307_bool, 2);
	if(var_307_bool != 0) {
		int var_309_int; object var_310_object;
		var_36_object = var_310_object;
		TaskCall(10);
		func_3258(var_311_object, var_309_int, var_310_object);
		TaskReturn();
		return 0;
	}
	bool var_356_bool;
	func_4852(var_356_bool, 3);
	if(var_356_bool != 0) {
		int var_358_int; object var_359_object;
		var_36_object = var_359_object;
		TaskCall(8);
		func_2392(var_360_object, var_358_int, var_359_object);
		TaskReturn();
		return 0;
	}
	bool var_459_bool;
	func_4852(var_459_bool, 4);
	if(var_459_bool != 0) {
		int var_461_int; object var_462_object;
		var_36_object = var_462_object;
		TaskCall(12);
		func_3516(var_463_object, var_461_int, var_462_object);
		TaskReturn();
		return 0;
	}
	bool var_537_bool;
	func_4852(var_537_bool, 6);
	if(var_537_bool != 0) {
		int var_539_int; object var_540_object;
		var_36_object = var_540_object;
		TaskCall(4);
		func_335(var_541_object, var_539_int, var_540_object);
		TaskReturn();
		return 0;
	}
	bool var_631_bool;
	func_4852(var_631_bool, 8);
	if(var_631_bool != 0) {
		int var_633_int; object var_634_object;
		var_36_object = var_634_object;
		TaskCall(14);
		func_4025(var_635_object, var_633_int, var_634_object);
		TaskReturn();
		return 0;
	}
	bool var_703_bool;
	func_4858(var_703_bool);
}


// @pe
void func_5363(bool var_236_bool)
{
	int var_238_int;
	func_4795(var_238_int, "ood1Ospina5");
	if(var_238_int == 0) {
		var_236_bool = true;
		return 0;
	}
	var_236_bool = false;
}


// @pe
void func_4852(bool var_149_bool, int var_150_int)
{
	int var_151_int;
	func_4843(var_151_int);
	var_149_bool = var_151_int == var_150_int;
}


// @pe
void func_5111(void)
{
	@SetVariable("ood8Ospina1", 1);
}


// @pe
void func_4088(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_651_object, object var_652_object)
{
	var_0_object = var_652_object;
	var_1_object = var_651_object;
	var_3_object = false;
	if(1 != 0) {
		func_4171(var_652_object, "Neutral");
		var_0_object->SetMessage(12374); //@t
		var_0_object->ClearReplies(); //@t
		bool var_664_bool = false;
		bool var_665_bool;
		func_5543(var_1_object);
		if(!var_665_bool) { //@nz
			bool var_672_bool;
			func_5567(var_1_object);
			if(var_672_bool != 0)
				var_664_bool = true;
		}
		if(var_664_bool != 0)
			var_0_object->AddReply(13641, 14898, 14897); //@t
		bool var_681_bool;
		func_5555(var_1_object);
		if(var_681_bool != 0)
			var_0_object->AddReply(12375, 13536, 13535); //@t
		var_0_object->AddReply(13658, -1, 14916); //@t
		goto Label_4141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xffc";
	}
Label_4141:
	bool var_693_bool;
	func_4871(var_693_bool);
	if(var_693_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_4170;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_4170:
		return 0;

	}
	
}


// @pe
void func_3321(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_327_object, object var_328_object)
{
	var_0_object = var_328_object;
	var_1_object = var_327_object;
	var_3_object = false;
	if(1 != 0) {
		func_3379(var_328_object, "Neutral");
		var_0_object->SetMessage(9394); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9395, 10324, 10323); //@t
		var_0_object->AddReply(9407, 10328, 10335); //@t
		goto Label_3349;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcfd";
	}
Label_3349:
	bool var_346_bool;
	func_4871(var_346_bool);
	if(var_346_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3378;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3378:
		return 0;

	}
	
}


void func_4858(bool var_703_bool)
{
	func_4760("No");
	bool var_705_bool;
	@lshWaitForAnimEnd(var_705_bool);
	var_705_bool = var_703_bool;
}


// @pe
void func_3579(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_479_object, object var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_object = false;
	if(1 != 0) {
		func_3670(var_480_object, "Neutral");
		var_0_object->SetMessage(11065); //@t
		var_0_object->ClearReplies(); //@t
		bool var_492_bool = false;
		bool var_493_bool;
		func_5471(var_1_object);
		if(var_493_bool != 0) {
			bool var_499_bool;
			func_5459(var_1_object);
			if(var_499_bool != 0)
				var_492_bool = true;
		}
		if(var_492_bool != 0)
			var_0_object->AddReply(11066, 12248, 12247); //@t
		bool var_508_bool = false;
		bool var_509_bool;
		func_5495(var_1_object);
		if(var_509_bool != 0) {
			bool var_515_bool;
			func_5483(var_1_object);
			if(var_515_bool != 0)
				var_508_bool = true;
		}
		if(var_508_bool != 0)
			var_0_object->AddReply(11079, 12268, 12263); //@t
		var_0_object->AddReply(11505, -1, 12707); //@t
		goto Label_3640;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdff";
	}
Label_3640:
	bool var_527_bool;
	func_4871(var_527_bool);
	if(var_527_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4760(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3669;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3669:
		return 0;

	}
	
}


// @pe
void func_509(object var_2_object, string var_219_string)
{
	bool var_220_bool;
	func_4871(var_220_bool);
	if(!var_220_bool) //@nz
		return 0;
	if(var_219_string == var_2_object)
		return 0;
	string var_223_string;
	func_4760(var_223_string);
	var_2_object = var_223_string;
}


// @pe
void func_5375(bool var_261_bool)
{
	int var_263_int;
	func_4795(var_263_int, "ood1Ospina6");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


