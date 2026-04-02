GlobalVarCount = 2
	G_VAR_0 int 
	G_VAR_1 object 

Strings:
	A:GetPosition
	A:GetPFPosition
	W:walk
	W:run
	W:all
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:idle
	W:quest_d4_01
	W:key1_done
	A:GetRegionByPt
	W:HasProperty
	A:HasProperty
	A:IsDead
	W:IsDead
	A:GetScene
	W:noaccess
	A:GetProperty
	A:GetEyesHeight
	W:head
	A:add
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:playsound
	W:giveitem
	W:ood4WhiteMask1
	W:d4q01KeyWhite
	W:theaterkey is given
	W:d4q01_theater_key
	W:init_theater
	W:tvirin is given
	W:tvirin
	A:SetReturnValue
	W:branch
	W:ui/NPC_wmask.png
	W:ui/NPC_wmask_b.png
// @pool_raw:476574506f736974696f6e004765745046506f736974696f6e00770061006c006b000000720075006e00000061006c006c0000005365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c7900690064006c0065000000710075006500730074005f00640034005f003000310000006b006500790031005f0064006f006e0065000000476574526567696f6e4279507400480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e65006e006f00610063006300650073007300000047657450726f706572747900476574457965734865696768740068006500610064000000616464004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006c006100790073006f0075006e006400000067006900760065006900740065006d0000006f006f0064003400570068006900740065004d00610073006b0031000000640034007100300031004b006500790057006800690074006500000074006800650061007400650072006b0065007900200069007300200067006900760065006e000000640034007100300031005f0074006800650061007400650072005f006b0065007900000069006e00690074005f0074006800650061007400650072000000740076006900720069006e00200069007300200067006900760065006e000000740076006900720069006e00000053657452657475726e56616c7565006200720061006e00630068000000750069002f004e00500043005f0077006d00610073006b002e0070006e0067000000750069002f004e00500043005f0077006d00610073006b005f0062002e0070006e0067000000
// @pool_encoding:utf8

Import:
	SetTimer (2 args)
	Sleep (1 args)
	KillTimer (1 args)
	GetPosition (1 args)
	Stop (0 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	Sleep (2 args)
	RequestClearPath (1 args)
	rand (2 args)
	GetRandomPFPointInCircle (4 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	WaitForAnimEnd (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetScene (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	Trace (1 args)

RunOp = 0x41c
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (bool, object) Params = 1
		EVENT_7 Op = 0x23 Vars = (int)
		EVENT_10 Op = 0x97 Vars = (object)
		EVENT_41 Op = 0xa2 Vars = (object)
	GTASK_1 Vars = (bool, object) Params = 1
		EVENT_7 Op = 0x12c Vars = (int)
		EVENT_10 Op = 0x13e Vars = (object)
		EVENT_41 Op = 0x149 Vars = (object)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_10 Op = 0x1a5 Vars = (object)
		EVENT_28 Op = 0x1a9 Vars = ()
		EVENT_41 Op = 0x1b3 Vars = (object)
	GTASK_3  Params = 0
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c8 Vars = (int, int)
	GTASK_6  Params = 0
		EVENT_0 Op = 0x42a Vars = (object)
	GTASK_7  Params = 1

Events:
EVENT_41 Op = 0x5f7 Vars = (object)

0x0: PushEmpty()
0x1: Push((int) 10)
0x2: Push((int) 1)
0x3: @ SetTimer(Stack[-2], Stack[-1])
0x4: Pop(2)
0x5: PushEmpty(bool, object, float, float, bool, bool)
0x6: Stack[-7] = Stack[-5]
0x7: Stack[-4] = (int) 250
0x8: Stack[-3] = (int) 3000
0x9: Stack[-2] = (bool) 1
0xa: Stack[-1] = (bool) 1
0xb: Call2 0x31

0xc: Pop(6)
0xd: PushEmpty(int)
0xe: Call2 0x4d2

0xf: Pop(0)
0x10: Push(GlobalVars[0])
0x11: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x12: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0x13: GOTO 0x1f

0x14: Push((int) 1)
0x15: @ Sleep(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(int)
0x18: Call2 0x4d2

0x19: Pop(0)
0x1a: Push(GlobalVars[0])
0x1b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1c: IF (Stack[-1] == 0) GOTO 0x1e; Pop(1)

0x1d: GOTO 0x1f

0x1e: GOTO 0x5

0x1f: Push((int) 10)
0x20: @ KillTimer(Stack[-1])
0x21: Pop(1)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: Push((int) 10)
0x25: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x27: PushEmpty(int)
0x28: Call2 0x4d2

0x29: Pop(0)
0x2a: Push(GlobalVars[0])
0x2b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x30; Pop(1)

0x2d: PushEmpty()
0x2e: Call2 0x9b

0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x32: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x33: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x34: Stack[-17] = Stack[-7]
0x35: PushEmpty(bool, object)
0x36: Stack[-23] = Stack[-1]
0x37: Call2 0xab

0x38: Pop(1)
0x39: Pop(1); Push((bool) Stack[-1] == 0)
0x3a: IF (Stack[-1] == 0) GOTO 0x3d; Pop(1)

0x3b: Stack[-22] = (bool) 0
0x3c: Return(); Pop(16)

0x3d: @@ GetPosition(Stack[-5]); Obj=21 // @poff=0
0x3e: Pop(0)
0x3f: @ GetPosition(Stack[-4])
0x40: Pop(0)
0x41: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x42: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x43: PushEmpty(bool)
0x44: Stack[-1] = (bool) 0
0x45: Push((int) 0)
0x46: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x47: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x48: Pop(0); Push(Stack[-20] * Stack[-20]);
0x49: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x4a: IF (Stack[-1] == 0) GOTO 0x4c; Pop(1)

0x4b: Stack[-1] = (bool) 1
0x4c: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4d: @ Stop()
0x4e: Pop(0)
0x4f: Stack[-22] = (bool) 0
0x50: Return(); Pop(16)

0x51: Pop(0); Push(Stack[-20] * Stack[-20]);
0x52: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x53: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x54: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=12
0x55: Pop(0)
0x56: @ FindPathTo(Stack[-1], Stack[-5])
0x57: Pop(0)
0x58: Pop(0); Push(( Stack[-1] != 0 )
0x59: IF (Stack[-1] == 0) GOTO 0x5c; Pop(1)

0x5a: Stack[-1] = Stack[-6]
0x5b: Stack[-1] = 0
0x5c: Pop(0); Push(( Stack[-6] != 0 )
0x5d: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x5e: Push(Stack[-7])
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: Stack[-7] = (bool) 0
0x61: @ RotatePath(Stack[-6], Stack[-8])
0x62: Pop(0)
0x63: Pop(0); Push((bool) Stack[-8] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: GOTO 0x95

0x66: Push((int) 0)
0x67: Push((float)0.30000001192092896)
0x68: @ SetTimer(Stack[-2], Stack[-1])
0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Call2 0xb2

0x6c: Pop(0)
0x6d: PushEmpty(string)
0x6e: Call2 0xb4

0x6f: Pop(0)
0x70: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: Pop(0); Push((bool) Stack[-8] == 0)
0x73: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x74: Push( Stack[0 + Tasks[-1].StackPointer] )
0x75: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x76: Stack[-6] = 0
0x77: GOTO 0x95

0x78: GOTO 0x7a

0x79: GOTO 0x94

0x7a: GOTO 0x7c

0x7b: Stack[-6] = 0
0x7c: GOTO 0x8d

0x7d: Push((int) 0)
0x7e: @ KillTimer(Stack[-1])
0x7f: Pop(1)
0x80: Push((float)0.5)
0x81: @ Sleep(Stack[-1], Stack[-9])
0x82: Pop(1)
0x83: Pop(0); Push((bool) Stack[-8] == 0)
0x84: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x85: Push( Stack[0 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x87: Stack[-6] = 0
0x88: GOTO 0x95

0x89: Push((int) 0)
0x8a: Push((float)0.30000001192092896)
0x8b: @ SetTimer(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: Stack[-1] = 0
0x8e: GOTO 0x93

0x8f: Push((int) 0)
0x90: @ KillTimer(Stack[-1])
0x91: Pop(1)
0x92: GOTO 0x95

0x93: Stack[-6] = 0
0x94: GOTO 0x35

0x95: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x96: Return(); Pop(16)

0x97: PushEmpty()
0x98: @ RequestClearPath(Stack[-1])
0x99: Pop(0)
0x9a: Return(); Pop(0)

0x9b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x9c: Push((int) 0)
0x9d: @ KillTimer(Stack[-1])
0x9e: Pop(1)
0x9f: @ Stop()
0xa0: Pop(0)
0xa1: Return(); Pop(0)

0xa2: PushEmpty()
0xa3: PushEmpty()
0xa4: Call2 0x9b

0xa5: Pop(0)
0xa6: PushEmpty(object)
0xa7: Stack[-2] = Stack[-1]
0xa8: Call2 0x5f7

0xa9: Pop(1)
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: PushEmpty(bool, object)
0xad: Stack[-3] = Stack[-1]
0xae: Call2 0x512

0xaf: Stack[-2] = Stack[-4]
0xb0: Pop(2)
0xb1: Return(); Pop(0)

0xb2: Stack[-1] = "walk" // @poff=26
0xb3: Return(); Pop(0)

0xb4: Stack[-1] = "run" // @poff=36
0xb5: Return(); Pop(0)

0xb6: PushEmpty()
0xb7: PushEmpty(bool, object, float, float, bool, bool)
0xb8: Stack[-7] = Stack[-5]
0xb9: Stack[-4] = (int) 250
0xba: Stack[-3] = (int) 3000
0xbb: Stack[-2] = (bool) 1
0xbc: Stack[-1] = (bool) 1
0xbd: Call2 0xc6

0xbe: Pop(5)
0xbf: Pop(1); Push((bool) Stack[-1] == 0)
0xc0: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0xc1: Push((int) 1)
0xc2: @ Sleep(Stack[-1])
0xc3: Pop(1)
0xc4: GOTO 0xb7

0xc5: Return(); Pop(0)

0xc6: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0xc7: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xc8: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0xc9: Stack[-17] = Stack[-7]
0xca: PushEmpty(bool, object)
0xcb: Stack[-23] = Stack[-1]
0xcc: Call2 0x152

0xcd: Pop(1)
0xce: Pop(1); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xd0: Stack[-22] = (bool) 0
0xd1: Return(); Pop(16)

0xd2: @@ GetPosition(Stack[-5]); Obj=21 // @poff=0
0xd3: Pop(0)
0xd4: @ GetPosition(Stack[-4])
0xd5: Pop(0)
0xd6: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xd7: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xd8: PushEmpty(bool)
0xd9: Stack[-1] = (bool) 0
0xda: Push((int) 0)
0xdb: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xdc: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdd: Pop(0); Push(Stack[-20] * Stack[-20]);
0xde: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 1
0xe1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe2: @ Stop()
0xe3: Pop(0)
0xe4: Stack[-22] = (bool) 0
0xe5: Return(); Pop(16)

0xe6: Pop(0); Push(Stack[-20] * Stack[-20]);
0xe7: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0xe9: @@ GetPFPosition(Stack[-5]); Obj=21 // @poff=12
0xea: Pop(0)
0xeb: @ FindPathTo(Stack[-1], Stack[-5])
0xec: Pop(0)
0xed: Pop(0); Push(( Stack[-1] != 0 )
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-1] = Stack[-6]
0xf0: Stack[-1] = 0
0xf1: Pop(0); Push(( Stack[-6] != 0 )
0xf2: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0xf3: Push(Stack[-7])
0xf4: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf5: Stack[-7] = (bool) 0
0xf6: @ RotatePath(Stack[-6], Stack[-8])
0xf7: Pop(0)
0xf8: Pop(0); Push((bool) Stack[-8] == 0)
0xf9: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xfa: GOTO 0x12a

0xfb: Push((int) 0)
0xfc: Push((float)0.30000001192092896)
0xfd: @ SetTimer(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: PushEmpty(string)
0x100: Call2 0x159

0x101: Pop(0)
0x102: PushEmpty(string)
0x103: Call2 0x15b

0x104: Pop(0)
0x105: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x106: Pop(2)
0x107: Pop(0); Push((bool) Stack[-8] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x110; Pop(1)

0x109: Push( Stack[0 + Tasks[-1].StackPointer] )
0x10a: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10b: Stack[-6] = 0
0x10c: GOTO 0x12a

0x10d: GOTO 0x10f

0x10e: GOTO 0x129

0x10f: GOTO 0x111

0x110: Stack[-6] = 0
0x111: GOTO 0x122

0x112: Push((int) 0)
0x113: @ KillTimer(Stack[-1])
0x114: Pop(1)
0x115: Push((float)0.5)
0x116: @ Sleep(Stack[-1], Stack[-9])
0x117: Pop(1)
0x118: Pop(0); Push((bool) Stack[-8] == 0)
0x119: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x11b: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x11c: Stack[-6] = 0
0x11d: GOTO 0x12a

0x11e: Push((int) 0)
0x11f: Push((float)0.30000001192092896)
0x120: @ SetTimer(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: Stack[-1] = 0
0x123: GOTO 0x128

0x124: Push((int) 0)
0x125: @ KillTimer(Stack[-1])
0x126: Pop(1)
0x127: GOTO 0x12a

0x128: Stack[-6] = 0
0x129: GOTO 0xca

0x12a: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x12b: Return(); Pop(16)

0x12c: PushEmpty()
0x12d: Push((int) 0)
0x12e: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Return(); Pop(0)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x152

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x137: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x138: Push((int) 0)
0x139: @ KillTimer(Stack[-1])
0x13a: Pop(1)
0x13b: @ Stop()
0x13c: Pop(0)
0x13d: Return(); Pop(0)

0x13e: PushEmpty()
0x13f: @ RequestClearPath(Stack[-1])
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x143: Push((int) 0)
0x144: @ KillTimer(Stack[-1])
0x145: Pop(1)
0x146: @ Stop()
0x147: Pop(0)
0x148: Return(); Pop(0)

0x149: PushEmpty()
0x14a: PushEmpty()
0x14b: Call2 0x142

0x14c: Pop(0)
0x14d: PushEmpty(object)
0x14e: Stack[-2] = Stack[-1]
0x14f: Call2 0x5f7

0x150: Pop(1)
0x151: Return(); Pop(0)

0x152: PushEmpty()
0x153: PushEmpty(bool, object)
0x154: Stack[-3] = Stack[-1]
0x155: Call2 0x512

0x156: Stack[-2] = Stack[-4]
0x157: Pop(2)
0x158: Return(); Pop(0)

0x159: Stack[-1] = "walk" // @poff=26
0x15a: Return(); Pop(0)

0x15b: Stack[-1] = "run" // @poff=36
0x15c: Return(); Pop(0)

0x15d: PushEmpty()
0x15e: Call2 0x165

0x15f: Pop(0)
0x160: Push((int) 1)
0x161: @ Sleep(Stack[-1])
0x162: Pop(1)
0x163: GOTO 0x15d

0x164: Return(); Pop(0)

0x165: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x166: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x167: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x168: Push((float)0.5)
0x169: @ rand(Stack[-7], Stack[-1])
0x16a: Pop(1)
0x16b: @ Sleep(Stack[-6])
0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x16f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: @ GetPosition(Stack[-4])
0x172: Pop(0)
0x173: PushEmpty(float)
0x174: Call2 0x1a0

0x175: Pop(0)
0x176: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x177: Pop(1)
0x178: Push(Stack[-3])
0x179: IF (Stack[-1] == 0) GOTO 0x17b; Pop(1)

0x17a: GOTO 0x17f

0x17b: Push((int) 1)
0x17c: @ Sleep(Stack[-1])
0x17d: Pop(1)
0x17e: GOTO 0x171

0x17f: GOTO 0x181

0x180: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x181: PushEmpty(object, cvector)
0x182: Stack[-7] = Stack[-1]
0x183: Call2 0x1be

0x184: Stack[-2] = Stack[-4]
0x185: Pop(2)
0x186: Pop(0); Push(( Stack[-2] != 0 )
0x187: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x188: @ RotatePath(Stack[-2], Stack[-1])
0x189: Pop(0)
0x18a: Push(Stack[-1])
0x18b: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x18c: PushEmpty(bool)
0x18d: Call2 0x1bc

0x18e: Pop(0)
0x18f: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x190: Pop(1)
0x191: Stack[-2] = 0
0x192: Push(Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: PushEmpty()
0x195: Push(-0, 0); TaskCall(3)
0x196: Call2 0x1c4

0x197: Pop(-0, 0); TaskReturn
0x198: Pop(0)
0x199: GOTO 0x19d

0x19a: Push((int) 1)
0x19b: @ Sleep(Stack[-1])
0x19c: Pop(1)
0x19d: Stack[-2] = 0
0x19e: GOTO 0x16d

0x19f: Return(); Pop(12)

0x1a0: PushEmpty(float, float)
0x1a1: @ GetCameraFarDistance(Stack[-1])
0x1a2: Pop(0)
0x1a3: Stack[-1] = Stack[-3]
0x1a4: Return(); Pop(2)

0x1a5: PushEmpty()
0x1a6: @ RequestClearPath(Stack[-1])
0x1a7: Pop(0)
0x1a8: Return(); Pop(0)

0x1a9: @ Stop()
0x1aa: Pop(0)
0x1ab: Return(); Pop(0)

0x1ac: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ad: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1ae: @ Stop()
0x1af: Pop(0)
0x1b0: @ StopGroup0()
0x1b1: Pop(0)
0x1b2: Return(); Pop(0)

0x1b3: PushEmpty()
0x1b4: PushEmpty()
0x1b5: Call2 0x1ac

0x1b6: Pop(0)
0x1b7: PushEmpty(object)
0x1b8: Stack[-2] = Stack[-1]
0x1b9: Call2 0x5f7

0x1ba: Pop(1)
0x1bb: Return(); Pop(0)

0x1bc: Stack[-1] = (bool) 0
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(object, object)
0x1bf: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x1c0: Pop(0)
0x1c1: Stack[-1] = Stack[-4]
0x1c2: Return(); Pop(2)

0x1c3: Stack[-1] = 0
0x1c4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1c5: @ WaitForAnimEnd()
0x1c6: Pop(0)
0x1c7: PushEmpty(bool)
0x1c8: Call2 0x52a

0x1c9: Pop(0)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cc: Return(); Pop(14)

0x1cd: PushEmpty(int)
0x1ce: Call2 0x5e6

0x1cf: Stack[-1] = Stack[-8]
0x1d0: Pop(1)
0x1d1: Stack[-6] = (int) 0
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Push((int) 5)
0x1d5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: PushEmpty(bool)
0x1d8: Call2 0x52a

0x1d9: Pop(0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Stack[-1] = (bool) 1
0x1dc: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x1dd: Push((int) 3)
0x1de: @ irand(Stack[-6], Stack[-1])
0x1df: Pop(1)
0x1e0: Push((int) 0)
0x1e1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e3: Push(Stack[-7])
0x1e4: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e5: @ irand(Stack[-4], Stack[-7])
0x1e6: Pop(0)
0x1e7: Push("all") // @poff=44
0x1e8: PushEmpty(string, int)
0x1e9: Stack[-7] = Stack[-1]
0x1ea: Call2 0x5df

0x1eb: Pop(1)
0x1ec: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ed: Pop(2)
0x1ee: @ WaitForAnimEnd(Stack[-3])
0x1ef: Pop(0)
0x1f0: Pop(0); Push((bool) Stack[-3] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1f2: GOTO 0x210

0x1f3: GOTO 0x205

0x1f4: Push((int) 1)
0x1f5: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f7: Push((int) 4)
0x1f8: @ rand(Stack[-3], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push((int) 1)
0x1fb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1fc: @ Sleep(Stack[-1], Stack[-2])
0x1fd: Pop(1)
0x1fe: Pop(0); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: GOTO 0x210

0x201: GOTO 0x205

0x202: Push(Stack[-6])
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: GOTO 0x210

0x205: PushEmpty(bool)
0x206: Call2 0x213

0x207: Pop(0)
0x208: Pop(1); Push((bool) Stack[-1] == 0)
0x209: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x20a: GOTO 0x210

0x20b: @ ResetAAS()
0x20c: Pop(0)
0x20d: Push((int) 1)
0x20e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x20f: GOTO 0x1d2

0x210: @ ResetAAS()
0x211: Pop(0)
0x212: Return(); Pop(14)

0x213: Stack[-1] = (bool) 1
0x214: Return(); Pop(0)

0x215: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x216: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x217: PushEmpty(bool, object, float)
0x218: Stack[-12] = Stack[-2]
0x219: Stack[-1] = (float) 70.0
0x21a: Call2 0x52f

0x21b: Pop(2)
0x21c: Pop(1); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21e: Stack[-10] = (int) -2
0x21f: Return(); Pop(8)

0x220: @ CreateDialog(Stack[-4])
0x221: Pop(0)
0x222: PushEmpty(int)
0x223: Call2 0x64d

0x224: Pop(0)
0x225: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=52
0x226: Pop(1)
0x227: PushEmpty(int)
0x228: Call2 0x64b

0x229: Pop(0)
0x22a: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=63
0x22b: Pop(1)
0x22c: PushEmpty(string)
0x22d: Call2 0x64f

0x22e: Pop(0)
0x22f: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=81
0x230: Pop(1)
0x231: PushEmpty(string)
0x232: Call2 0x651

0x233: Pop(0)
0x234: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=90
0x235: Pop(1)
0x236: PushEmpty(int)
0x237: Call2 0x63a

0x238: Pop(0)
0x239: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=100
0x23a: Pop(1)
0x23b: Stack[-2] = (int) -1
0x23c: @ IsOverrideActive(Stack[-3])
0x23d: Pop(0)
0x23e: Push(Stack[-3])
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: Stack[-10] = (int) -2
0x241: Return(); Pop(8)

0x242: @ DoDialog(Stack[-4])
0x243: Pop(0)
0x244: PushEmpty(object, object)
0x245: Stack[-11] = Stack[-2]
0x246: Stack[-6] = Stack[-1]
0x247: Push(-2, 4); TaskCall(5)
0x248: Call2 0x25f

0x249: Pop(-2, 4); TaskReturn
0x24a: Pop(2)
0x24b: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=114
0x24c: Pop(0)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: @ sync()
0x250: Pop(0)
0x251: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=114
0x252: Pop(0)
0x253: GOTO 0x24d

0x254: PushEmpty(object)
0x255: Stack[-10] = Stack[-1]
0x256: Call2 0x573

0x257: Pop(1)
0x258: @ StopDialog(Stack[-4])
0x259: Pop(0)
0x25a: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=126
0x25b: Pop(0)
0x25c: Stack[-2] = Stack[-10]
0x25d: Return(); Pop(8)

0x25e: Stack[-4] = 0
0x25f: PushEmpty()
0x260: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x261: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x262: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x263: Push((int) 1)
0x264: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x265: PushEmpty(bool, object)
0x266: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x267: Call2 0x62e

0x268: Pop(1)
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral" // @poff=141
0x26c: Call2 0x2b2

0x26d: Pop(1)
0x26e: Push((int) 509667)
0x26f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x270: Pop(1)
0x271: @@@ ClearReplies(); Obj=0 // @poff=168
0x272: Pop(0)
0x273: Push((int) 509668)
0x274: Push((int) 10643)
0x275: Push((int) 10642)
0x276: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x277: Pop(3)
0x278: Push((int) 509677)
0x279: Push((int) 10653)
0x27a: Push((int) 10652)
0x27b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x27c: Pop(3)
0x27d: GOTO 0x294

0x27e: PushEmpty(string)
0x27f: Stack[-1] = "Neutral" // @poff=141
0x280: Call2 0x2b2

0x281: Pop(1)
0x282: Push((int) 509681)
0x283: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x284: Pop(1)
0x285: @@@ ClearReplies(); Obj=0 // @poff=168
0x286: Pop(0)
0x287: Push((int) 509682)
0x288: Push((int) 10660)
0x289: Push((int) 10659)
0x28a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x28b: Pop(3)
0x28c: Push((int) 509699)
0x28d: Push((int) -1)
0x28e: Push((int) 10678)
0x28f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x290: Pop(3)
0x291: GOTO 0x294

0x292: Return(); Pop(0)

0x293: GOTO 0x263

0x294: PushEmpty(bool)
0x295: Call2 0x653

0x296: Pop(0)
0x297: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x298: @ lshWaitForAnimEnd()
0x299: Pop(0)
0x29a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a2

0x29d: PushEmpty(string)
0x29e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29f: Call2 0x584

0x2a0: Pop(1)
0x2a1: GOTO 0x298

0x2a2: GOTO 0x2b1

0x2a3: Push("all") // @poff=44
0x2a4: Push("idle") // @poff=190
0x2a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: @ WaitForAnimEnd()
0x2a8: Pop(0)
0x2a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2b1

0x2ac: Push("all") // @poff=44
0x2ad: Push("idle") // @poff=190
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2a7

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: PushEmpty(bool)
0x2b4: Call2 0x653

0x2b5: Pop(0)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(0)

0x2b9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(string, bool)
0x2bd: Stack[-3] = Stack[-2]
0x2be: Push("") // @poff=33
0x2bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-1] = (bool) 0
0x2c2: GOTO 0x2c4

0x2c3: Stack[-1] = (bool) 1
0x2c4: Call2 0x58b

0x2c5: Pop(2)
0x2c6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: Push((int) 1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x2cb: PushEmpty()
0x2cc: Call2 0x591

0x2cd: Pop(0)
0x2ce: Push((int) 10646)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d1: PushEmpty(object, object)
0x2d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0x605

0x2d5: Pop(2)
0x2d6: PushEmpty(object, object)
0x2d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d9: Call2 0x5f9

0x2da: Pop(2)
0x2db: Push((int) 10648)
0x2dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2de: PushEmpty(object, object)
0x2df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e1: Call2 0x5ff

0x2e2: Pop(2)
0x2e3: PushEmpty(object, object)
0x2e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e6: Call2 0x624

0x2e7: Pop(2)
0x2e8: Push((int) 10649)
0x2e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2eb: PushEmpty(object, object)
0x2ec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ee: Call2 0x5ff

0x2ef: Pop(2)
0x2f0: PushEmpty(object, object)
0x2f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f3: Call2 0x629

0x2f4: Pop(2)
0x2f5: Push((int) 10669)
0x2f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f7: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2f8: PushEmpty(object, object)
0x2f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fb: Call2 0x619

0x2fc: Pop(2)
0x2fd: PushEmpty(object, object)
0x2fe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x300: Call2 0x5f9

0x301: Pop(2)
0x302: Push((int) 10641)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x305: PushEmpty(bool, object)
0x306: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x307: Call2 0x62e

0x308: Pop(1)
0x309: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x30a: PushEmpty(string)
0x30b: Stack[-1] = "Neutral" // @poff=141
0x30c: Call2 0x2b2

0x30d: Pop(1)
0x30e: Push((int) 509667)
0x30f: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x310: Pop(1)
0x311: @@@ ClearReplies(); Obj=0 // @poff=168
0x312: Pop(0)
0x313: Push((int) 509668)
0x314: Push((int) 10643)
0x315: Push((int) 10642)
0x316: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x317: Pop(3)
0x318: Push((int) 509677)
0x319: Push((int) 10653)
0x31a: Push((int) 10652)
0x31b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x31c: Pop(3)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(string)
0x31f: Stack[-1] = "Neutral" // @poff=141
0x320: Call2 0x2b2

0x321: Pop(1)
0x322: Push((int) 509681)
0x323: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x324: Pop(1)
0x325: @@@ ClearReplies(); Obj=0 // @poff=168
0x326: Pop(0)
0x327: Push((int) 509682)
0x328: Push((int) 10660)
0x329: Push((int) 10659)
0x32a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x32b: Pop(3)
0x32c: Push((int) 509699)
0x32d: Push((int) -1)
0x32e: Push((int) 10678)
0x32f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x330: Pop(3)
0x331: Return(); Pop(0)

0x332: Push((int) 10660)
0x333: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x335: PushEmpty(string)
0x336: Stack[-1] = "Neutral" // @poff=141
0x337: Call2 0x2b2

0x338: Pop(1)
0x339: Push((int) 509683)
0x33a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x33b: Pop(1)
0x33c: @@@ ClearReplies(); Obj=0 // @poff=168
0x33d: Pop(0)
0x33e: Push((int) 509684)
0x33f: Push((int) 10662)
0x340: Push((int) 10661)
0x341: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x342: Pop(3)
0x343: Push((int) 509694)
0x344: Push((int) 10672)
0x345: Push((int) 10671)
0x346: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x347: Pop(3)
0x348: Push((int) 509698)
0x349: Push((int) 10662)
0x34a: Push((int) 10676)
0x34b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x34c: Pop(3)
0x34d: Return(); Pop(0)

0x34e: Push((int) 10672)
0x34f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x350: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Neutral" // @poff=141
0x353: Call2 0x2b2

0x354: Pop(1)
0x355: Push((int) 509695)
0x356: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x357: Pop(1)
0x358: @@@ ClearReplies(); Obj=0 // @poff=168
0x359: Pop(0)
0x35a: Push((int) 509696)
0x35b: Push((int) 10665)
0x35c: Push((int) 10673)
0x35d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x35e: Pop(3)
0x35f: Push((int) 509697)
0x360: Push((int) -1)
0x361: Push((int) 10675)
0x362: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x363: Pop(3)
0x364: Return(); Pop(0)

0x365: Push((int) 10662)
0x366: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x367: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x368: PushEmpty(string)
0x369: Stack[-1] = "Neutral" // @poff=141
0x36a: Call2 0x2b2

0x36b: Pop(1)
0x36c: Push((int) 509685)
0x36d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x36e: Pop(1)
0x36f: @@@ ClearReplies(); Obj=0 // @poff=168
0x370: Pop(0)
0x371: Push((int) 509687)
0x372: Push((int) 10665)
0x373: Push((int) 10664)
0x374: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x375: Pop(3)
0x376: Push((int) 509686)
0x377: Push((int) -1)
0x378: Push((int) 10663)
0x379: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x37a: Pop(3)
0x37b: Return(); Pop(0)

0x37c: Push((int) 10665)
0x37d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x37f: PushEmpty(string)
0x380: Stack[-1] = "Neutral" // @poff=141
0x381: Call2 0x2b2

0x382: Pop(1)
0x383: Push((int) 509688)
0x384: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x385: Pop(1)
0x386: @@@ ClearReplies(); Obj=0 // @poff=168
0x387: Pop(0)
0x388: Push((int) 509689)
0x389: Push((int) -1)
0x38a: Push((int) 10666)
0x38b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x38c: Pop(3)
0x38d: Push((int) 509690)
0x38e: Push((int) 10668)
0x38f: Push((int) 10667)
0x390: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 10668)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Neutral" // @poff=141
0x398: Call2 0x2b2

0x399: Pop(1)
0x39a: Push((int) 509691)
0x39b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x39c: Pop(1)
0x39d: @@@ ClearReplies(); Obj=0 // @poff=168
0x39e: Pop(0)
0x39f: Push((int) 509692)
0x3a0: Push((int) -1)
0x3a1: Push((int) 10669)
0x3a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3a3: Pop(3)
0x3a4: Push((int) 509693)
0x3a5: Push((int) -1)
0x3a6: Push((int) 10670)
0x3a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3a8: Pop(3)
0x3a9: Push((int) 538762)
0x3aa: Push((int) -1)
0x3ab: Push((int) 40678)
0x3ac: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 10653)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Neutral" // @poff=141
0x3b4: Call2 0x2b2

0x3b5: Pop(1)
0x3b6: Push((int) 509678)
0x3b7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x3b8: Pop(1)
0x3b9: @@@ ClearReplies(); Obj=0 // @poff=168
0x3ba: Pop(0)
0x3bb: Push((int) 509679)
0x3bc: Push((int) 10643)
0x3bd: Push((int) 10654)
0x3be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3bf: Pop(3)
0x3c0: Push((int) 509680)
0x3c1: Push((int) 10643)
0x3c2: Push((int) 10656)
0x3c3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3c4: Pop(3)
0x3c5: Return(); Pop(0)

0x3c6: Push((int) 10643)
0x3c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3c9: PushEmpty(string)
0x3ca: Stack[-1] = "Neutral" // @poff=141
0x3cb: Call2 0x2b2

0x3cc: Pop(1)
0x3cd: Push((int) 509669)
0x3ce: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x3cf: Pop(1)
0x3d0: @@@ ClearReplies(); Obj=0 // @poff=168
0x3d1: Pop(0)
0x3d2: Push((int) 509670)
0x3d3: Push((int) 10645)
0x3d4: Push((int) 10644)
0x3d5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3d6: Pop(3)
0x3d7: Return(); Pop(0)

0x3d8: Push((int) 10645)
0x3d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3ef; Pop(1)

0x3db: PushEmpty(string)
0x3dc: Stack[-1] = "Neutral" // @poff=141
0x3dd: Call2 0x2b2

0x3de: Pop(1)
0x3df: Push((int) 509671)
0x3e0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x3e1: Pop(1)
0x3e2: @@@ ClearReplies(); Obj=0 // @poff=168
0x3e3: Pop(0)
0x3e4: Push((int) 509672)
0x3e5: Push((int) 10647)
0x3e6: Push((int) 10646)
0x3e7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3e8: Pop(3)
0x3e9: Push((int) 509676)
0x3ea: Push((int) 10647)
0x3eb: Push((int) 10650)
0x3ec: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3ed: Pop(3)
0x3ee: Return(); Pop(0)

0x3ef: Push((int) 10647)
0x3f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3f2: PushEmpty(string)
0x3f3: Stack[-1] = "Neutral" // @poff=141
0x3f4: Call2 0x2b2

0x3f5: Pop(1)
0x3f6: Push((int) 509673)
0x3f7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=157
0x3f8: Pop(1)
0x3f9: @@@ ClearReplies(); Obj=0 // @poff=168
0x3fa: Pop(0)
0x3fb: Push((int) 509674)
0x3fc: Push((int) -1)
0x3fd: Push((int) 10648)
0x3fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x3ff: Pop(3)
0x400: Push((int) 509675)
0x401: Push((int) -1)
0x402: Push((int) 10649)
0x403: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=181
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x407: PushEmpty(bool)
0x408: Call2 0x653

0x409: Pop(0)
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: @ lshStopAnimation()
0x40c: Pop(0)
0x40d: GOTO 0x410

0x40e: @ StopAnimation()
0x40f: Pop(0)
0x410: Return(); Pop(0)

0x411: GOTO 0x2c9

0x412: Return(); Pop(0)

0x413: PushEmpty()
0x414: PushEmpty(int, object)
0x415: Stack[-3] = Stack[-1]
0x416: Push(-2, 1); TaskCall(4)
0x417: Call2 0x215

0x418: Pop(-2, 1); TaskReturn
0x419: Stack[-2] = Stack[-4]
0x41a: Pop(2)
0x41b: Return(); Pop(0)

0x41c: Push(GlobalVars[0])
0x41d: PushEmpty(int)
0x41e: Call2 0x4d2

0x41f: Stack[-1] = Stack[-2]
0x420: Pop(1)
0x421: GlobalVars[0] = Stack[-1]; Pop(1)
0x422: Push((int) 3)
0x423: @ Sleep(Stack[-1])
0x424: Pop(1)
0x425: PushEmpty()
0x426: Call2 0x461

0x427: Pop(0)
0x428: GOTO 0x422

0x429: Return(); Pop(0)

0x42a: PushEmpty(int, int)
0x42b: PushEmpty()
0x42c: Call2 0x4b2

0x42d: Pop(0)
0x42e: PushEmpty(int, object)
0x42f: Stack[-5] = Stack[-1]
0x430: Call2 0x413

0x431: Stack[-2] = Stack[-3]
0x432: Pop(2)
0x433: Push((int) 0)
0x434: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x436: PushEmpty(bool, string, string)
0x437: Stack[-2] = "quest_d4_01" // @poff=200
0x438: Stack[-1] = "key1_done" // @poff=224
0x439: Call2 0x5d3

0x43a: Pop(3)
0x43b: PushEmpty(object)
0x43c: Stack[-4] = Stack[-1]
0x43d: Push(-1, 2); TaskCall(0)
0x43e: Call2 0x0

0x43f: Pop(-1, 2); TaskReturn
0x440: Pop(1)
0x441: PushEmpty(object)
0x442: Stack[-4] = Stack[-1]
0x443: Push(-1, 2); TaskCall(1)
0x444: Call2 0xb6

0x445: Pop(-1, 2); TaskReturn
0x446: Pop(1)
0x447: PushEmpty(object)
0x448: Stack[-4] = Stack[-1]
0x449: Push(-1, 0); TaskCall(7)
0x44a: Call2 0x4bf

0x44b: Pop(-1, 0); TaskReturn
0x44c: Pop(1)
0x44d: PushEmpty()
0x44e: Push(-0, 2); TaskCall(2)
0x44f: Call2 0x15d

0x450: Pop(-0, 2); TaskReturn
0x451: Pop(0)
0x452: GOTO 0x460

0x453: Push((int) 1)
0x454: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x456: PushEmpty(bool, string, string)
0x457: Stack[-2] = "quest_d4_01" // @poff=200
0x458: Stack[-1] = "key1_done" // @poff=224
0x459: Call2 0x5d3

0x45a: Pop(3)
0x45b: PushEmpty()
0x45c: Push(-0, 2); TaskCall(2)
0x45d: Call2 0x15d

0x45e: Pop(-0, 2); TaskReturn
0x45f: Pop(0)
0x460: Return(); Pop(2)

0x461: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x462: @ WaitForAnimEnd()
0x463: Pop(0)
0x464: PushEmpty(bool)
0x465: Call2 0x52a

0x466: Pop(0)
0x467: Pop(1); Push((bool) Stack[-1] == 0)
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: Return(); Pop(14)

0x46a: PushEmpty(int)
0x46b: Call2 0x5e6

0x46c: Stack[-1] = Stack[-8]
0x46d: Pop(1)
0x46e: Stack[-6] = (int) 0
0x46f: PushEmpty(bool)
0x470: Stack[-1] = (bool) 0
0x471: Push((int) 5)
0x472: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x473: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x474: PushEmpty(bool)
0x475: Call2 0x52a

0x476: Pop(0)
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: Stack[-1] = (bool) 1
0x479: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x47a: Push((int) 3)
0x47b: @ irand(Stack[-6], Stack[-1])
0x47c: Pop(1)
0x47d: Push((int) 0)
0x47e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x480: Push(Stack[-7])
0x481: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x482: @ irand(Stack[-4], Stack[-7])
0x483: Pop(0)
0x484: Push("all") // @poff=44
0x485: PushEmpty(string, int)
0x486: Stack[-7] = Stack[-1]
0x487: Call2 0x5df

0x488: Pop(1)
0x489: @ PlayAnimation(Stack[-2], Stack[-1])
0x48a: Pop(2)
0x48b: @ WaitForAnimEnd(Stack[-3])
0x48c: Pop(0)
0x48d: Pop(0); Push((bool) Stack[-3] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48f: GOTO 0x4ad

0x490: GOTO 0x4a2

0x491: Push((int) 1)
0x492: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x494: Push((int) 4)
0x495: @ rand(Stack[-3], Stack[-1])
0x496: Pop(1)
0x497: Push((int) 1)
0x498: Pop(1); Push(Stack[-3] + Stack[-1]);
0x499: @ Sleep(Stack[-1], Stack[-2])
0x49a: Pop(1)
0x49b: Pop(0); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x49d: GOTO 0x4ad

0x49e: GOTO 0x4a2

0x49f: Push(Stack[-6])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x4a1: GOTO 0x4ad

0x4a2: PushEmpty(bool)
0x4a3: Call2 0x4b0

0x4a4: Pop(0)
0x4a5: Pop(1); Push((bool) Stack[-1] == 0)
0x4a6: IF (Stack[-1] == 0) GOTO 0x4a8; Pop(1)

0x4a7: GOTO 0x4ad

0x4a8: @ ResetAAS()
0x4a9: Pop(0)
0x4aa: Push((int) 1)
0x4ab: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x4ac: GOTO 0x46f

0x4ad: @ ResetAAS()
0x4ae: Pop(0)
0x4af: Return(); Pop(14)

0x4b0: Stack[-1] = (bool) 1
0x4b1: Return(); Pop(0)

0x4b2: @ StopAnimation()
0x4b3: Pop(0)
0x4b4: @ StopGroup0()
0x4b5: Pop(0)
0x4b6: Return(); Pop(0)

0x4b7: PushEmpty()
0x4b8: PushEmpty(int, object)
0x4b9: Stack[-3] = Stack[-1]
0x4ba: Push(-2, 1); TaskCall(4)
0x4bb: Call2 0x215

0x4bc: Pop(-2, 1); TaskReturn
0x4bd: Pop(2)
0x4be: Return(); Pop(0)

0x4bf: PushEmpty(bool, bool)
0x4c0: @ IsOverrideActive(Stack[-1])
0x4c1: Pop(0)
0x4c2: Pop(0); Push((bool) Stack[-1] == 0)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c4: GOTO 0x4c6

0x4c5: GOTO 0x4c0

0x4c6: PushEmpty(object)
0x4c7: Stack[-4] = Stack[-1]
0x4c8: Call2 0x4b7

0x4c9: Pop(1)
0x4ca: @ Hold()
0x4cb: Pop(0)
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(cvector, cvector)
0x4ce: @ GetPosition(Stack[-1])
0x4cf: Pop(0)
0x4d0: Stack[-1] = Stack[-3]
0x4d1: Return(); Pop(2)

0x4d2: PushEmpty(object, int, object, int)
0x4d3: @ GetScene(Stack[-2])
0x4d4: Pop(0)
0x4d5: PushEmpty(cvector)
0x4d6: Call2 0x4cd

0x4d7: Pop(0)
0x4d8: @@ GetRegionByPt(Stack[-2], Stack[-1]); Obj=3 // @poff=244
0x4d9: Pop(1)
0x4da: Stack[-1] = Stack[-5]
0x4db: Return(); Pop(4)

0x4dc: Stack[-2] = 0
0x4dd: PushEmpty(bool, bool)
0x4de: Push("HasProperty") // @poff=258
0x4df: Push((int) 2)
0x4e0: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x4e1: Pop(1); Push((bool) Stack[-1] == 0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e5; Pop(1)

0x4e3: Stack[-5] = (bool) 0
0x4e4: Return(); Pop(2)

0x4e5: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=282
0x4e6: Pop(0)
0x4e7: Stack[-1] = Stack[-5]
0x4e8: Return(); Pop(2)

0x4e9: PushEmpty(bool, bool)
0x4ea: @@ IsDead(Stack[-1]); Obj=3 // @poff=294
0x4eb: Pop(0)
0x4ec: Stack[-1] = Stack[-4]
0x4ed: Return(); Pop(2)

0x4ee: PushEmpty(object, object, object, object)
0x4ef: Pop(0); PushNull((bool) Stack[-5] == 0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: Stack[-6] = (bool) 0
0x4f2: Return(); Pop(4)

0x4f3: PushEmpty(bool)
0x4f4: Stack[-1] = (bool) 0
0x4f5: Push("IsDead") // @poff=301
0x4f6: Push((int) 1)
0x4f7: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x4f8: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f9: PushEmpty(bool, object)
0x4fa: Stack[-8] = Stack[-1]
0x4fb: Call2 0x4e9

0x4fc: Pop(1)
0x4fd: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fe: Stack[-1] = (bool) 1
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-6] = (bool) 0
0x501: Return(); Pop(4)

0x502: @ GetScene(Stack[-2])
0x503: Pop(0)
0x504: Pop(0); PushNull((bool) Stack[-2] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x506: Stack[-6] = (bool) 0
0x507: Return(); Pop(4)

0x508: @@ GetScene(Stack[-1]); Obj=5 // @poff=315
0x509: Pop(0)
0x50a: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x50b: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50c: Stack[-6] = (bool) 0
0x50d: Return(); Pop(4)

0x50e: Stack[-6] = (bool) 1
0x50f: Return(); Pop(4)

0x510: Stack[-1] = 0
0x511: Stack[-2] = 0
0x512: PushEmpty(int, int)
0x513: PushEmpty(bool, object)
0x514: Stack[-5] = Stack[-1]
0x515: Call2 0x4ee

0x516: Pop(1)
0x517: Pop(1); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-4] = (bool) 0
0x51a: Return(); Pop(2)

0x51b: PushEmpty(bool, object, string)
0x51c: Stack[-6] = Stack[-2]
0x51d: Stack[-1] = "noaccess" // @poff=324
0x51e: Call2 0x4dd

0x51f: Pop(2)
0x520: Pop(1); Push((bool) Stack[-1] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x522: Stack[-4] = (bool) 1
0x523: Return(); Pop(2)

0x524: Push("noaccess") // @poff=324
0x525: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=342
0x526: Pop(1)
0x527: Push((int) 0)
0x528: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x529: Return(); Pop(2)

0x52a: PushEmpty(bool, bool)
0x52b: @ IsLoaded(Stack[-1])
0x52c: Pop(0)
0x52d: Stack[-1] = Stack[-3]
0x52e: Return(); Pop(2)

0x52f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x530: @@ GetPosition(Stack[-8]); Obj=20 // @poff=0
0x531: Pop(0)
0x532: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=354
0x533: Pop(0)
0x534: Push(CvectorIndex(Stack[-8], 1))
0x535: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x536: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x537: @ GetPosition(Stack[-7])
0x538: Pop(0)
0x539: @ GetEyesHeight(Stack[-9])
0x53a: Pop(0)
0x53b: Push(CvectorIndex(Stack[-7], 1))
0x53c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x53d: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x53e: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x53f: Push(CvectorIndex(Stack[-6], 1))
0x540: Stack[-1] = (int) 0
0x541: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x542: Pop(0); Push(Stack[-6] | Stack[-6]);
0x543: Pop(1); Push(Sqrt(Stack[-1]))
0x544: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x545: Stack[-5] = -Stack[-6]; Pop(0);
0x546: Pop(0); Push(Stack[-6] * Stack[-19]);
0x547: PushEmpty(cvector, cvector)
0x548: Push([0.0, 1.0, 0.0])
0x549: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x54a: Call2 0x598

0x54b: Pop(1)
0x54c: Push((int) 25)
0x54d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x54e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x54f: Push([0.0, 10.0, 0.0])
0x550: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x551: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x552: @ IsOverrideActive(Stack[-2])
0x553: Pop(0)
0x554: Push(Stack[-2])
0x555: IF (Stack[-1] == 0) GOTO 0x558; Pop(1)

0x556: Stack[-21] = (bool) 0
0x557: Return(); Pop(18)

0x558: @ StopWorld()
0x559: Pop(0)
0x55a: @ CameraTransit(Stack[-3], Stack[-5])
0x55b: Pop(0)
0x55c: Push(CvectorIndex(Stack[-4], 0))
0x55d: Push(CvectorIndex(Stack[-5], 2))
0x55e: @ Rotate(Stack[-2], Stack[-1])
0x55f: Pop(2)
0x560: PushEmpty(bool)
0x561: Call2 0x653

0x562: Pop(0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: GOTO 0x56d

0x565: Push("head") // @poff=368
0x566: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x567: Pop(1)
0x568: Push(Stack[-1])
0x569: IF (Stack[-1] == 0) GOTO 0x56d; Pop(1)

0x56a: Push("head") // @poff=368
0x56b: @ LookAsyncCamera(Stack[-1])
0x56c: Pop(1)
0x56d: @ CameraWaitForPlayFinish()
0x56e: Pop(0)
0x56f: @ ResumeWorld()
0x570: Pop(0)
0x571: Stack[-21] = (bool) 1
0x572: Return(); Pop(18)

0x573: PushEmpty(bool, bool)
0x574: @ CameraSwitchToNormal()
0x575: Pop(0)
0x576: PushEmpty(bool)
0x577: Call2 0x653

0x578: Pop(0)
0x579: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x57a: GOTO 0x583

0x57b: Push("head") // @poff=368
0x57c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x57d: Pop(1)
0x57e: Push(Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x580: Push("head") // @poff=368
0x581: @ UnlookAsync(Stack[-1])
0x582: Pop(1)
0x583: Return(); Pop(2)

0x584: PushEmpty(float, float, float, float)
0x585: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x586: Pop(0)
0x587: Push((bool) 0)
0x588: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x589: Pop(1)
0x58a: Return(); Pop(4)

0x58b: PushEmpty(float, float, float, float)
0x58c: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x58d: Pop(0)
0x58e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x58f: Pop(0)
0x590: Return(); Pop(4)

0x591: PushEmpty(bool)
0x592: Call2 0x653

0x593: Pop(0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: @ lshStopSpeech()
0x596: Pop(0)
0x597: Return(); Pop(0)

0x598: PushEmpty(float, float)
0x599: Pop(0); Push(Stack[-3] | Stack[-3]);
0x59a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x59b: Push((float)9.999999974752427e-07)
0x59c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x59d: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59e: Stack[-4] = [0.0, 0.0, 0.0]
0x59f: Return(); Pop(2)

0x5a0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5a1: Return(); Pop(2)

0x5a2: PushEmpty(int, int)
0x5a3: @ GetVariable(Stack[-3], Stack[-1])
0x5a4: Pop(0)
0x5a5: Stack[-1] = Stack[-4]
0x5a6: Return(); Pop(2)

0x5a7: PushEmpty(object, object)
0x5a8: @ CreateIntVector(Stack[-1])
0x5a9: Pop(0)
0x5aa: @@ add(Stack[-4]); Obj=1 // @poff=378
0x5ab: Pop(0)
0x5ac: @@ add(Stack[-3]); Obj=1 // @poff=378
0x5ad: Pop(0)
0x5ae: Push((int) 3)
0x5af: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x5b0: Pop(1)
0x5b1: Return(); Pop(2)

0x5b2: Stack[-1] = 0
0x5b3: PushEmpty(int, int, bool, int, int, bool)
0x5b4: @@ GetItemID(Stack[-3]); Obj=8 // @poff=382
0x5b5: Pop(0)
0x5b6: Push("Category") // @poff=392
0x5b7: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x5b8: Pop(1)
0x5b9: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=410
0x5ba: Pop(0)
0x5bb: Pop(0); Push((bool) Stack[-1] == 0)
0x5bc: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bd: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=418
0x5be: Pop(0)
0x5bf: GOTO 0x5c5

0x5c0: PushEmpty(int, int)
0x5c1: Stack[-5] = Stack[-2]
0x5c2: Stack[-9] = Stack[-1]
0x5c3: Call2 0x5a7

0x5c4: Pop(2)
0x5c5: Return(); Pop(6)

0x5c6: PushEmpty(object, object)
0x5c7: @ CreateInvItem(Stack[-1])
0x5c8: Pop(0)
0x5c9: @@ SetItemName(Stack[-4]); Obj=1 // @poff=428
0x5ca: Pop(0)
0x5cb: PushEmpty(object, object, int)
0x5cc: Stack[-8] = Stack[-3]
0x5cd: Stack[-4] = Stack[-2]
0x5ce: Stack[-6] = Stack[-1]
0x5cf: Call2 0x5b3

0x5d0: Pop(3)
0x5d1: Return(); Pop(2)

0x5d2: Stack[-1] = 0
0x5d3: PushEmpty(object, object)
0x5d4: @ FindActor(Stack[-1], Stack[-4])
0x5d5: Pop(0)
0x5d6: Pop(0); PushNull((bool) Stack[-1] == 0)
0x5d7: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d8: Stack[-5] = (bool) 0
0x5d9: Return(); Pop(2)

0x5da: @ Trigger(Stack[-1], Stack[-3])
0x5db: Pop(0)
0x5dc: Stack[-5] = (bool) 1
0x5dd: Return(); Pop(2)

0x5de: Stack[-1] = 0
0x5df: PushEmpty(string, string)
0x5e0: Stack[-1] = "idle" // @poff=190
0x5e1: Push(Stack[-3])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5e4: Stack[-1] = Stack[-4]
0x5e5: Return(); Pop(2)

0x5e6: PushEmpty(int, bool, int, bool)
0x5e7: Stack[-2] = (int) 0
0x5e8: Push("all") // @poff=44
0x5e9: PushEmpty(string, int)
0x5ea: Stack[-5] = Stack[-1]
0x5eb: Call2 0x5df

0x5ec: Pop(1)
0x5ed: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(2)
0x5ef: Pop(0); Push((bool) Stack[-1] == 0)
0x5f0: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f1: GOTO 0x5f5

0x5f2: Push((int) 1)
0x5f3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5f4: GOTO 0x5e8

0x5f5: Stack[-2] = Stack[-5]
0x5f6: Return(); Pop(4)

0x5f7: PushEmpty()
0x5f8: Return(); Pop(0)

0x5f9: PushEmpty()
0x5fa: Push("playsound") // @poff=440
0x5fb: Push("giveitem") // @poff=460
0x5fc: @ TriggerWorld(Stack[-2], Stack[-1])
0x5fd: Pop(2)
0x5fe: Return(); Pop(0)

0x5ff: PushEmpty()
0x600: Push("ood4WhiteMask1") // @poff=478
0x601: Push((int) 1)
0x602: @ SetVariable(Stack[-2], Stack[-1])
0x603: Pop(2)
0x604: Return(); Pop(0)

0x605: PushEmpty()
0x606: Push("d4q01KeyWhite") // @poff=508
0x607: Push((int) 1)
0x608: @ SetVariable(Stack[-2], Stack[-1])
0x609: Pop(2)
0x60a: Push("theaterkey is given") // @poff=536
0x60b: @ Trace(Stack[-1])
0x60c: Pop(1)
0x60d: PushEmpty(object, string, int)
0x60e: Stack[-5] = Stack[-3]
0x60f: Stack[-2] = "d4q01_theater_key" // @poff=576
0x610: Stack[-1] = (int) 1
0x611: Call2 0x5c6

0x612: Pop(3)
0x613: PushEmpty(bool, string, string)
0x614: Stack[-2] = "quest_d4_01" // @poff=200
0x615: Stack[-1] = "init_theater" // @poff=612
0x616: Call2 0x5d3

0x617: Pop(3)
0x618: Return(); Pop(0)

0x619: PushEmpty()
0x61a: Push("tvirin is given") // @poff=638
0x61b: @ Trace(Stack[-1])
0x61c: Pop(1)
0x61d: PushEmpty(object, string, int)
0x61e: Stack[-5] = Stack[-3]
0x61f: Stack[-2] = "tvirin" // @poff=670
0x620: Stack[-1] = (int) 1
0x621: Call2 0x5c6

0x622: Pop(3)
0x623: Return(); Pop(0)

0x624: PushEmpty()
0x625: Push((int) 0)
0x626: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=684
0x627: Pop(1)
0x628: Return(); Pop(0)

0x629: PushEmpty()
0x62a: Push((int) 1)
0x62b: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=684
0x62c: Pop(1)
0x62d: Return(); Pop(0)

0x62e: PushEmpty()
0x62f: PushEmpty(int, string)
0x630: Stack[-1] = "ood4WhiteMask1" // @poff=478
0x631: Call2 0x5a2

0x632: Pop(1)
0x633: Push((int) 0)
0x634: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x636: Stack[-2] = (bool) 1
0x637: Return(); Pop(0)

0x638: Stack[-2] = (bool) 0
0x639: Return(); Pop(0)

0x63a: PushEmpty(int, int)
0x63b: Push("branch") // @poff=699
0x63c: @ GetVariable(Stack[-1], Stack[-2])
0x63d: Pop(1)
0x63e: Push((int) 0)
0x63f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x644; Pop(1)

0x641: Stack[-3] = (int) 1
0x642: Return(); Pop(2)

0x643: GOTO 0x649

0x644: Push((int) 1)
0x645: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x646: IF (Stack[-1] == 0) GOTO 0x649; Pop(1)

0x647: Stack[-3] = (int) 2
0x648: Return(); Pop(2)

0x649: Stack[-3] = (int) 3
0x64a: Return(); Pop(2)

0x64b: Stack[-1] = (int) 515569
0x64c: Return(); Pop(0)

0x64d: Stack[-1] = (int) 503354
0x64e: Return(); Pop(0)

0x64f: Stack[-1] = "ui/NPC_wmask.png" // @poff=713
0x650: Return(); Pop(0)

0x651: Stack[-1] = "ui/NPC_wmask_b.png" // @poff=747
0x652: Return(); Pop(0)

0x653: Stack[-1] = (bool) 0
0x654: Return(); Pop(0)

