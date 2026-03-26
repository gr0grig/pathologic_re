GlobalVarCount = 0

Strings:
	W:quest_k7_01
	W:theater_load
	W:quest_k12_01
	W:theater_unload
	W:Performance
	W:cs_mask_klara
	W:cs_mask_klara.xml
	A:ForceGeometryLoad
	W:.mot
	W:nightmask
	W:.ogg
	W:NightMasks
	W:.wmv
	W:STAT_LOOK
	W:Day: 
	W:Before stat 
	W:After stat 
	W:ACHIEVEMENT_LOOK
	W:Achievement Unlocked!!!
	W:player
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
// @pool_raw:710075006500730074005f006b0037005f0030003100000074006800650061007400650072005f006c006f00610064000000710075006500730074005f006b00310032005f0030003100000074006800650061007400650072005f0075006e006c006f0061006400000050006500720066006f0072006d0061006e00630065000000630073005f006d00610073006b005f006b006c006100720061000000630073005f006d00610073006b005f006b006c006100720061002e0078006d006c000000466f72636547656f6d657472794c6f6164002e006d006f00740000006e0069006700680074006d00610073006b0000002e006f006700670000004e0069006700680074004d00610073006b00730000002e0077006d007600000053005400410054005f004c004f004f004b0000004400610079003a00200000004200650066006f0072006500200073007400610074002000000041006600740065007200200073007400610074002000000041004300480049004500560045004d0045004e0054005f004c004f004f004b00000041006300680069006500760065006d0065006e007400200055006e006c006f0063006b0065006400210021002100000070006c00610079006500720000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f706572747900

Import:
	Hold (0 args)
	SetVariable (2 args)
	AddActor (6 args)
	CameraPlay (1 args)
	PlayGlobalMusic (1 args)
	CameraWaitForPlayFinish (0 args)
	CameraSwitchToNormal (0 args)
	RemoveActor (1 args)
	PlayMovie (1 args)
	GetStat (2 args)
	Trace (1 args)
	shift (3 args)
	SetStat (2 args)
	UnlockAchievement (1 args)
	FindActor (2 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	GetVariable (2 args)

RunOp = 0x14
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x0 Vars = ()
		EVENT_6 Op = 0xe Vars = ()


0x0: PushEmpty()
0x1: Call2 0x18

0x2: Pop(0)
0x3: PushEmpty(bool, string, string)
0x4: Stack[-2] = "quest_k7_01" // @poff=0
0x5: Stack[-1] = "theater_load" // @poff=24
0x6: Call2 0xba

0x7: Pop(3)
0x8: PushEmpty(bool, string, string)
0x9: Stack[-2] = "quest_k12_01" // @poff=50
0xa: Stack[-1] = "theater_load" // @poff=24
0xb: Call2 0xba

0xc: Pop(3)
0xd: Return(); Pop(0)

0xe: PushEmpty(bool, string, string)
0xf: Stack[-2] = "quest_k12_01" // @poff=50
0x10: Stack[-1] = "theater_unload" // @poff=76
0x11: Call2 0xba

0x12: Pop(3)
0x13: Return(); Pop(0)

0x14: @ Hold()
0x15: Pop(0)
0x16: GOTO 0x14

0x17: Return(); Pop(0)

0x18: PushEmpty(int, int, object, object, int, int, int, int, object, object, int, int)
0x19: PushEmpty(bool)
0x1a: Call2 0xd7

0x1b: Pop(0)
0x1c: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x1d: PushEmpty(int)
0x1e: Call2 0xc6

0x1f: Stack[-1] = Stack[-7]
0x20: Pop(1)
0x21: Push("Performance") // @poff=106
0x22: Pop(1); Push(Stack[-1] + Stack[-7]);
0x23: Push((int) 1)
0x24: @ SetVariable(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: Push("cs_mask_klara") // @poff=130
0x27: PushEmpty(object)
0x28: Call2 0xb4

0x29: Pop(0)
0x2a: Push(CVector(0.0, 0.0, 0.0))
0x2b: Push(CVector(0.0, 0.0, 1.0))
0x2c: Push("cs_mask_klara.xml") // @poff=158
0x2d: @ AddActor(Stack[-9], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2e: Pop(5)
0x2f: @@ ForceGeometryLoad(); Obj=4 // @poff=194
0x30: Pop(0)
0x31: PushEmpty(object)
0x32: Call2 0x82

0x33: Stack[-1] = Stack[-4]
0x34: Pop(1)
0x35: PushEmpty(object)
0x36: Stack[-4] = Stack[-1]
0x37: Call2 0x89

0x38: Pop(1)
0x39: Push("cs_mask_klara") // @poff=130
0x3a: Push((int) 1)
0x3b: Pop(1); Push(Stack[-8] - Stack[-1]);
0x3c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3d: Push(".mot") // @poff=212
0x3e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f: @ CameraPlay(Stack[-1])
0x40: Pop(1)
0x41: Push("nightmask") // @poff=222
0x42: Push((int) 1)
0x43: Pop(1); Push(Stack[-8] - Stack[-1]);
0x44: Pop(2); Push(Stack[-2] + Stack[-1]);
0x45: Push(".ogg") // @poff=242
0x46: Pop(2); Push(Stack[-2] + Stack[-1]);
0x47: @ PlayGlobalMusic(Stack[-1])
0x48: Pop(1)
0x49: @ CameraWaitForPlayFinish()
0x4a: Pop(0)
0x4b: Push("") // @poff=21
0x4c: @ PlayGlobalMusic(Stack[-1])
0x4d: Pop(1)
0x4e: PushEmpty(object)
0x4f: Stack[-4] = Stack[-1]
0x50: Call2 0xa0

0x51: Pop(1)
0x52: @ CameraSwitchToNormal()
0x53: Pop(0)
0x54: @ RemoveActor(Stack[-4])
0x55: Pop(0)
0x56: Push("NightMasks") // @poff=252
0x57: Push((int) 1)
0x58: Pop(1); Push(Stack[-8] - Stack[-1]);
0x59: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5a: Push(".wmv") // @poff=274
0x5b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c: @ PlayMovie(Stack[-1])
0x5d: Pop(1)
0x5e: Push("STAT_LOOK") // @poff=284
0x5f: @ GetStat(Stack[-1], Stack[-3])
0x60: Pop(1)
0x61: Push("Day: ") // @poff=304
0x62: Pop(1); Push(Stack[-1] + Stack[-7]);
0x63: @ Trace(Stack[-1])
0x64: Pop(1)
0x65: Push("Before stat ") // @poff=316
0x66: Pop(1); Push(Stack[-1] + Stack[-3]);
0x67: @ Trace(Stack[-1])
0x68: Pop(1)
0x69: Push((int) 1)
0x6a: Push((int) 1)
0x6b: Pop(1); Push(Stack[-8] - Stack[-1]);
0x6c: @ shift(Stack[-3], Stack[-2], Stack[-1])
0x6d: Pop(2)
0x6e: Stack[-2] = Stack[-2] | Stack[-1]; Pop(0);
0x6f: Push("STAT_LOOK") // @poff=284
0x70: @ SetStat(Stack[-1], Stack[-3])
0x71: Pop(1)
0x72: Push("After stat ") // @poff=342
0x73: Pop(1); Push(Stack[-1] + Stack[-3]);
0x74: @ Trace(Stack[-1])
0x75: Pop(1)
0x76: Push((int) 4095)
0x77: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x79: Push("ACHIEVEMENT_LOOK") // @poff=366
0x7a: @ UnlockAchievement(Stack[-1])
0x7b: Pop(1)
0x7c: Push("Achievement Unlocked!!!") // @poff=400
0x7d: @ Trace(Stack[-1])
0x7e: Pop(1)
0x7f: Stack[-3] = 0
0x80: Stack[-4] = 0
0x81: Return(); Pop(12)

0x82: PushEmpty(object, object)
0x83: Push("player") // @poff=448
0x84: @ FindActor(Stack[-2], Stack[-1])
0x85: Pop(1)
0x86: Stack[-1] = Stack[-3]
0x87: Return(); Pop(2)

0x88: Stack[-1] = 0
0x89: PushEmpty(bool, int, bool, int)
0x8a: Pop(0); Push((bool) Stack[-5] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Return(); Pop(4)

0x8d: Push("noaccess") // @poff=462
0x8e: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=480
0x8f: Pop(1)
0x90: Push(Stack[-2])
0x91: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x92: Push("noaccess") // @poff=462
0x93: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=492
0x94: Pop(1)
0x95: Push("noaccess") // @poff=462
0x96: Push((int) 1)
0x97: Pop(1); Push(Stack[-3] + Stack[-1]);
0x98: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=504
0x99: Pop(2)
0x9a: GOTO 0x9f

0x9b: Push("noaccess") // @poff=462
0x9c: Push((int) 1)
0x9d: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=504
0x9e: Pop(2)
0x9f: Return(); Pop(4)

0xa0: PushEmpty(int, int)
0xa1: Pop(0); Push((bool) Stack[-3] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(2)

0xa4: Push("noaccess") // @poff=462
0xa5: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=492
0xa6: Pop(1)
0xa7: Push((int) 1)
0xa8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaa: Push("noaccess") // @poff=462
0xab: Push((int) 1)
0xac: Pop(1); Push(Stack[-3] - Stack[-1]);
0xad: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=504
0xae: Pop(2)
0xaf: GOTO 0xb3

0xb0: Push("noaccess") // @poff=462
0xb1: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=516
0xb2: Pop(1)
0xb3: Return(); Pop(2)

0xb4: PushEmpty(object, object)
0xb5: @ self(Stack[-1])
0xb6: Pop(0)
0xb7: Stack[-1] = Stack[-3]
0xb8: Return(); Pop(2)

0xb9: Stack[-1] = 0
0xba: PushEmpty(object, object)
0xbb: @ FindActor(Stack[-1], Stack[-4])
0xbc: Pop(0)
0xbd: Pop(0); PushNull((bool) Stack[-1] == 0)
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-5] = (bool) 0
0xc0: Return(); Pop(2)

0xc1: @ Trigger(Stack[-1], Stack[-3])
0xc2: Pop(0)
0xc3: Stack[-5] = (bool) 1
0xc4: Return(); Pop(2)

0xc5: Stack[-1] = 0
0xc6: PushEmpty(float, float)
0xc7: @ GetGameTime(Stack[-1])
0xc8: Pop(0)
0xc9: Push((int) 1)
0xca: PushEmpty(int)
0xcb: Push((int) 24)
0xcc: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xcd: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xce: Return(); Pop(2)

0xcf: PushEmpty(float, float)
0xd0: @ GetGameTime(Stack[-1])
0xd1: Pop(0)
0xd2: PushEmpty(int)
0xd3: Stack[-2] = Stack[-1]
0xd4: Push((int) 24)
0xd5: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xd6: Return(); Pop(2)

0xd7: PushEmpty(int, int, int, int, int, int)
0xd8: PushEmpty(int)
0xd9: Call2 0xcf

0xda: Stack[-1] = Stack[-4]
0xdb: Pop(1)
0xdc: Push((int) 7)
0xdd: Pop(1); Push((bool) Stack[-4] < Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xdf: PushEmpty(int)
0xe0: Call2 0xc6

0xe1: Stack[-1] = Stack[-3]
0xe2: Pop(1)
0xe3: Push((int) 1)
0xe4: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe6: Push("Performance") // @poff=106
0xe7: Pop(1); Push(Stack[-1] + Stack[-3]);
0xe8: @ GetVariable(Stack[-1], Stack[-2])
0xe9: Pop(1)
0xea: Push((int) 0)
0xeb: Stack[-8] = Stack[-2] == Stack[-1]; Pop(1);
0xec: Return(); Pop(6)

0xed: Stack[-7] = (bool) 0
0xee: Return(); Pop(6)

