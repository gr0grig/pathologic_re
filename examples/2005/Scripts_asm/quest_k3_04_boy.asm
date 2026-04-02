GlobalVarCount = 1
	G_VAR_0 object 

Strings:
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
	W:all
	W:idle
	W:quest_d3_03
	W:boy_free
	W:noaccess
	A:GetPosition
	W:Can't retreat, distance: 
	W:fdie
	W:bdie
	W:GetScriptProperty
	W:Owner
	A:HasScriptProperty
	A:GetScriptProperty
	W:@GetEyesHeight
	A:GetEyesHeight
	W:head
	W:HasProperty
	A:HasProperty
	A:IsDead
	W:IsDead
	A:GetScene
	A:GetProperty
	W:fhit
	W:bhit
	W:hit_react
	W:1
	W:2
	A:add
	A:size
	A:get
	W:scripted
	W:blood_dir.xml
	A:GetItemID
	W:Category
	A:AddItem
	A:DropItems
	A:SetItemName
	W:powder is given
	W:powder
	W:branch
	W:ui/NPC_Citizen3.png
	W:ui/NPC_Citizen3_b.png
	A:RemoveStationaryActor
	W:health
	W:quest_k3_04
	W:boy_attacked
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c0065000000710075006500730074005f00640033005f0030003300000062006f0079005f00660072006500650000006e006f006100630063006500730073000000476574506f736974696f6e00430061006e0027007400200072006500740072006500610074002c002000640069007300740061006e00630065003a00200000006600640069006500000062006400690065000000470065007400530063007200690070007400500072006f007000650072007400790000004f0077006e0065007200000048617353637269707450726f70657274790047657453637269707450726f706572747900400047006500740045007900650073004800650069006700680074000000476574457965734865696768740068006500610064000000480061007300500072006f0070006500720074007900000048617350726f7065727479004973446561640049007300440065006100640000004765745363656e650047657450726f70657274790066006800690074000000620068006900740000006800690074005f0072006500610063007400000031000000320000006164640073697a65006765740073006300720069007000740065006400000062006c006f006f0064005f006400690072002e0078006d006c0000004765744974656d494400430061007400650067006f007200790000004164644974656d0044726f704974656d73005365744974656d4e616d650070006f007700640065007200200069007300200067006900760065006e00000070006f00770064006500720000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0033002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0033005f0062002e0070006e006700000052656d6f766553746174696f6e6172794163746f72006800650061006c00740068000000710075006500730074005f006b0033005f0030003400000062006f0079005f00610074007400610063006b00650064000000
// @pool_encoding:utf8

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	SetProperty (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0xe3
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0xe7 Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_17 Op = 0x105 Vars = (object)
		EVENT_10 Op = 0x153 Vars = (object)
		EVENT_28 Op = 0x157 Vars = ()
		EVENT_41 Op = 0x161 Vars = (object)
	GTASK_4  Params = 0
		EVENT_17 Op = 0x172 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x23d Vars = (int)
		EVENT_41 Op = 0x278 Vars = (object)
	GTASK_6  Params = 1
		EVENT_22 Op = 0x30f Vars = (object, int, float, float)
		EVENT_16 Op = 0x311 Vars = (object, string)
		EVENT_41 Op = 0x313 Vars = (object)

Events:
EVENT_22 Op = 0x526 Vars = (object, int, float, float)
EVENT_43 Op = 0x52e Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x538 Vars = (object, string)
EVENT_41 Op = 0x545 Vars = (object)
EVENT_17 Op = 0x55a Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3f1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x509

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x507

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x50b

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x50d

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4f6

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x435

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 525646)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 525647)
0x5a: Push((int) 26990)
0x5b: Push((int) 26989)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 539057)
0x5f: Push((int) 26990)
0x60: Push((int) 41004)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x50f

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x446

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x50f

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x44d

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x453

0x9f: Pop(0)
0xa0: Push((int) 26991)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x4eb

0xa7: Pop(2)
0xa8: Push((int) 26988)
0xa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0x84

0xae: Pop(1)
0xaf: Push((int) 525646)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 525647)
0xb5: Push((int) 26990)
0xb6: Push((int) 26989)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: Push((int) 539057)
0xba: Push((int) 26990)
0xbb: Push((int) 41004)
0xbc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xbd: Pop(3)
0xbe: Return(); Pop(0)

0xbf: Push((int) 26990)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral" // @poff=89
0xc4: Call2 0x84

0xc5: Pop(1)
0xc6: Push((int) 525648)
0xc7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc8: Pop(1)
0xc9: @@@ ClearReplies(); Obj=0 // @poff=116
0xca: Pop(0)
0xcb: Push((int) 525649)
0xcc: Push((int) -1)
0xcd: Push((int) 26991)
0xce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcf: Pop(3)
0xd0: Push((int) 539058)
0xd1: Push((int) -1)
0xd2: Push((int) 41005)
0xd3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xd4: Pop(3)
0xd5: Return(); Pop(0)

0xd6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd7: PushEmpty(bool)
0xd8: Call2 0x50f

0xd9: Pop(0)
0xda: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdb: @ lshStopAnimation()
0xdc: Pop(0)
0xdd: GOTO 0xe0

0xde: @ StopAnimation()
0xdf: Pop(0)
0xe0: Return(); Pop(0)

0xe1: GOTO 0x9b

0xe2: Return(); Pop(0)

0xe3: @ Hold()
0xe4: Pop(0)
0xe5: GOTO 0xe3

0xe6: Return(); Pop(0)

0xe7: PushEmpty()
0xe8: PushEmpty(int, object)
0xe9: Stack[-3] = Stack[-1]
0xea: Push(-2, 1); TaskCall(0)
0xeb: Call2 0x0

0xec: Pop(-2, 1); TaskReturn
0xed: Pop(2)
0xee: PushEmpty()
0xef: Call2 0x511

0xf0: Pop(0)
0xf1: PushEmpty()
0xf2: Push(-0, 2); TaskCall(3)
0xf3: Call2 0xf7

0xf4: Pop(-0, 2); TaskReturn
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: PushEmpty(bool, string, string)
0xf8: Stack[-2] = "quest_d3_03" // @poff=156
0xf9: Stack[-1] = "boy_free" // @poff=180
0xfa: Call2 0x4c7

0xfb: Pop(3)
0xfc: Push("noaccess") // @poff=198
0xfd: Push((int) 0)
0xfe: @ SetProperty(Stack[-2], Stack[-1])
0xff: Pop(2)
0x100: PushEmpty()
0x101: Call2 0x113

0x102: Pop(0)
0x103: GOTO 0x100

0x104: Return(); Pop(0)

0x105: PushEmpty()
0x106: PushEmpty(bool, object)
0x107: Stack[-3] = Stack[-1]
0x108: Call2 0x54b

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10b: PushEmpty()
0x10c: Call2 0x15a

0x10d: Pop(0)
0x10e: PushEmpty(object)
0x10f: Stack[-2] = Stack[-1]
0x110: Call2 0x552

0x111: Pop(1)
0x112: Return(); Pop(0)

0x113: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x114: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x115: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x116: Push((float)0.5)
0x117: @ rand(Stack[-7], Stack[-1])
0x118: Pop(1)
0x119: @ Sleep(Stack[-6])
0x11a: Pop(0)
0x11b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x11c: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x11d: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x11e: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x11f: @ GetPosition(Stack[-4])
0x120: Pop(0)
0x121: PushEmpty(float)
0x122: Call2 0x14e

0x123: Pop(0)
0x124: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x125: Pop(1)
0x126: Push(Stack[-3])
0x127: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x128: GOTO 0x12d

0x129: Push((int) 1)
0x12a: @ Sleep(Stack[-1])
0x12b: Pop(1)
0x12c: GOTO 0x11f

0x12d: GOTO 0x12f

0x12e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x12f: PushEmpty(object, cvector)
0x130: Stack[-7] = Stack[-1]
0x131: Call2 0x16c

0x132: Stack[-2] = Stack[-4]
0x133: Pop(2)
0x134: Pop(0); Push(( Stack[-2] != 0 )
0x135: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x136: @ RotatePath(Stack[-2], Stack[-1])
0x137: Pop(0)
0x138: Push(Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13a: PushEmpty(bool)
0x13b: Call2 0x16a

0x13c: Pop(0)
0x13d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x13e: Pop(1)
0x13f: Stack[-2] = 0
0x140: Push(Stack[-1])
0x141: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x142: PushEmpty()
0x143: Push(-0, 0); TaskCall(4)
0x144: Call2 0x180

0x145: Pop(-0, 0); TaskReturn
0x146: Pop(0)
0x147: GOTO 0x14b

0x148: Push((int) 1)
0x149: @ Sleep(Stack[-1])
0x14a: Pop(1)
0x14b: Stack[-2] = 0
0x14c: GOTO 0x11b

0x14d: Return(); Pop(12)

0x14e: PushEmpty(float, float)
0x14f: @ GetCameraFarDistance(Stack[-1])
0x150: Pop(0)
0x151: Stack[-1] = Stack[-3]
0x152: Return(); Pop(2)

0x153: PushEmpty()
0x154: @ RequestClearPath(Stack[-1])
0x155: Pop(0)
0x156: Return(); Pop(0)

0x157: @ Stop()
0x158: Pop(0)
0x159: Return(); Pop(0)

0x15a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x15b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x15c: @ Stop()
0x15d: Pop(0)
0x15e: @ StopGroup0()
0x15f: Pop(0)
0x160: Return(); Pop(0)

0x161: PushEmpty()
0x162: PushEmpty()
0x163: Call2 0x15a

0x164: Pop(0)
0x165: PushEmpty(object)
0x166: Stack[-2] = Stack[-1]
0x167: Call2 0x545

0x168: Pop(1)
0x169: Return(); Pop(0)

0x16a: Stack[-1] = (bool) 0
0x16b: Return(); Pop(0)

0x16c: PushEmpty(object, object)
0x16d: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x16e: Pop(0)
0x16f: Stack[-1] = Stack[-4]
0x170: Return(); Pop(2)

0x171: Stack[-1] = 0
0x172: PushEmpty()
0x173: PushEmpty(bool, object)
0x174: Stack[-3] = Stack[-1]
0x175: Call2 0x54b

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x178: PushEmpty()
0x179: Call2 0x1d1

0x17a: Pop(0)
0x17b: PushEmpty(object)
0x17c: Stack[-2] = Stack[-1]
0x17d: Call2 0x552

0x17e: Pop(1)
0x17f: Return(); Pop(0)

0x180: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x181: @ WaitForAnimEnd()
0x182: Pop(0)
0x183: PushEmpty(bool)
0x184: Call2 0x3ec

0x185: Pop(0)
0x186: Pop(1); Push((bool) Stack[-1] == 0)
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: Return(); Pop(14)

0x189: PushEmpty(int)
0x18a: Call2 0x4da

0x18b: Stack[-1] = Stack[-8]
0x18c: Pop(1)
0x18d: Stack[-6] = (int) 0
0x18e: PushEmpty(bool)
0x18f: Stack[-1] = (bool) 0
0x190: Push((int) 5)
0x191: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x193: PushEmpty(bool)
0x194: Call2 0x3ec

0x195: Pop(0)
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Stack[-1] = (bool) 1
0x198: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x199: Push((int) 3)
0x19a: @ irand(Stack[-6], Stack[-1])
0x19b: Pop(1)
0x19c: Push((int) 0)
0x19d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x19f: Push(Stack[-7])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a1: @ irand(Stack[-4], Stack[-7])
0x1a2: Pop(0)
0x1a3: Push("all") // @poff=138
0x1a4: PushEmpty(string, int)
0x1a5: Stack[-7] = Stack[-1]
0x1a6: Call2 0x4d3

0x1a7: Pop(1)
0x1a8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1a9: Pop(2)
0x1aa: @ WaitForAnimEnd(Stack[-3])
0x1ab: Pop(0)
0x1ac: Pop(0); Push((bool) Stack[-3] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: GOTO 0x1cc

0x1af: GOTO 0x1c1

0x1b0: Push((int) 1)
0x1b1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b3: Push((int) 4)
0x1b4: @ rand(Stack[-3], Stack[-1])
0x1b5: Pop(1)
0x1b6: Push((int) 1)
0x1b7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b8: @ Sleep(Stack[-1], Stack[-2])
0x1b9: Pop(1)
0x1ba: Pop(0); Push((bool) Stack[-1] == 0)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: GOTO 0x1cc

0x1bd: GOTO 0x1c1

0x1be: Push(Stack[-6])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: GOTO 0x1cc

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x1cf

0x1c3: Pop(0)
0x1c4: Pop(1); Push((bool) Stack[-1] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c6: GOTO 0x1cc

0x1c7: @ ResetAAS()
0x1c8: Pop(0)
0x1c9: Push((int) 1)
0x1ca: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1cb: GOTO 0x18e

0x1cc: @ ResetAAS()
0x1cd: Pop(0)
0x1ce: Return(); Pop(14)

0x1cf: Stack[-1] = (bool) 1
0x1d0: Return(); Pop(0)

0x1d1: @ StopAnimation()
0x1d2: Pop(0)
0x1d3: @ StopGroup0()
0x1d4: Pop(0)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1d7: @ GetPosition(Stack[-6])
0x1d8: Pop(0)
0x1d9: @@@ GetPosition(Stack[-5]); Obj=0 // @poff=216
0x1da: Pop(0)
0x1db: @ GetDirection(Stack[-4])
0x1dc: Pop(0)
0x1dd: PushEmpty(cvector, cvector)
0x1de: PushEmpty(cvector, cvector)
0x1df: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x1e0: Call2 0x489

0x1e1: Pop(1)
0x1e2: Push((float)0.75)
0x1e3: Pop(1); Push(Stack[-8] * Stack[-1]);
0x1e4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1e5: Call2 0x489

0x1e6: Stack[-2] = Stack[-5]
0x1e7: Pop(2)
0x1e8: Push((int) 32)
0x1e9: Push((float)7000.0)
0x1ea: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1eb: Pop(2)
0x1ec: Push((int) 100)
0x1ed: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1ee: Push((int) 0)
0x1ef: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (int) 0
0x1f2: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x1f3: Return(); Pop(12)

0x1f4: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1f5: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x1f6: PushEmpty(cvector, float)
0x1f7: Stack[-1] = (float) 1.7453293800354004
0x1f8: Call2 0x1d6

0x1f9: Stack[-2] = Stack[-7]
0x1fa: Pop(2)
0x1fb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x1fc: Push((float)2500.0)
0x1fd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1ff: PushEmpty(cvector, float)
0x200: Stack[-1] = (float) 2.6179938316345215
0x201: Call2 0x1d6

0x202: Stack[-2] = Stack[-7]
0x203: Pop(2)
0x204: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x205: Push((float)2500.0)
0x206: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x208: Push("Can't retreat, distance: ") // @poff=228
0x209: Pop(0); Push(Sqrt(Stack[-5]))
0x20a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20b: @ Trace(Stack[-1])
0x20c: Pop(1)
0x20d: Push((float)0.5)
0x20e: @ Sleep(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(10)

0x211: Push(CvectorIndex(Stack[-5], 0))
0x212: Push(CvectorIndex(Stack[-6], 2))
0x213: @ Rotate(Stack[-2], Stack[-1])
0x214: Pop(2)
0x215: PushEmpty(cvector)
0x216: Call2 0x315

0x217: Pop(0)
0x218: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x219: Push((int) 120)
0x21a: Push((float)0.5)
0x21b: @ SetTimer(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21e: Push((int) 1)
0x21f: @ MovePoint(Stack[-1]T, Stack[-1], Stack[-4])
0x220: Pop(1)
0x221: Push(Stack[-3])
0x222: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x223: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: GOTO 0x23c

0x226: GOTO 0x23a

0x227: PushEmpty(cvector, float)
0x228: Stack[-1] = (float) 2.6179938316345215
0x229: Call2 0x1d6

0x22a: Stack[-2] = Stack[-4]
0x22b: Pop(2)
0x22c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x22d: Push((float)2500.0)
0x22e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x230: PushEmpty(cvector)
0x231: Call2 0x315

0x232: Pop(0)
0x233: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x234: Push((int) 120)
0x235: Push((float)0.5)
0x236: @ SetTimer(Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: GOTO 0x23a

0x239: GOTO 0x23c

0x23a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x23b: IF (Stack[-1] == 1) GOTO 0x21e; Pop(1)

0x23c: Return(); Pop(10)

0x23d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x23e: Push((int) 120)
0x23f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Return(); Pop(8)

0x242: Pop(0); PushNull((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x244: @ Stop()
0x245: Pop(0)
0x246: Push((int) 1)
0x247: @ KillTimer(Stack[-1])
0x248: Pop(1)
0x249: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x24a: GOTO 0x270

0x24b: @ GetDirection(Stack[-4])
0x24c: Pop(0)
0x24d: Push((float)7000.0)
0x24e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x24f: Pop(1)
0x250: PushEmpty(cvector, float)
0x251: Stack[-1] = (float) 1.7453293800354004
0x252: Call2 0x1d6

0x253: Stack[-2] = Stack[-4]
0x254: Pop(2)
0x255: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: Push((float)2500.0)
0x259: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25b: PushEmpty(bool)
0x25c: Stack[-1] = (bool) 1
0x25d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x25e: Push((float)2.25)
0x25f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x260: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x261: IF (Stack[-1] == 1) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call2 0x281

0x264: Pop(0)
0x265: IF (Stack[-1] == 1) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 0
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26a: @ Stop()
0x26b: Pop(0)
0x26c: PushEmpty(cvector)
0x26d: Call2 0x315

0x26e: Pop(0)
0x26f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x270: Return(); Pop(8)

0x271: @ Stop()
0x272: Pop(0)
0x273: Push((int) 120)
0x274: @ KillTimer(Stack[-1])
0x275: Pop(1)
0x276: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x277: Return(); Pop(0)

0x278: PushEmpty()
0x279: PushEmpty()
0x27a: Call2 0x271

0x27b: Pop(0)
0x27c: PushEmpty(object)
0x27d: Stack[-2] = Stack[-1]
0x27e: Call2 0x545

0x27f: Pop(1)
0x280: Return(); Pop(0)

0x281: PushEmpty(cvector, cvector, cvector, cvector)
0x282: @ GetDirection(Stack[-2])
0x283: Pop(0)
0x284: PushEmpty(cvector, object)
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call2 0x31a

0x287: Stack[-2] = Stack[-3]
0x288: Pop(2)
0x289: PushEmpty(float, cvector, cvector)
0x28a: Stack[-5] = Stack[-2]
0x28b: Stack[-4] = Stack[-1]
0x28c: Call2 0x493

0x28d: Pop(2)
0x28e: Push((float)-0.3420201241970062)
0x28f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x290: Return(); Pop(4)

0x291: PushEmpty()
0x292: PushEmpty(object)
0x293: Stack[-2] = Stack[-1]
0x294: Call2 0x29a

0x295: Pop(1)
0x296: @ Hold()
0x297: Pop(0)
0x298: GOTO 0x296

0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x29b: Pop(0); PushNull((bool) Stack[-21] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29d: PushEmpty(string)
0x29e: Stack[-1] = "fdie" // @poff=280
0x29f: Call2 0x2f5

0x2a0: Pop(1)
0x2a1: GOTO 0x2f4

0x2a2: @@ GetPosition(Stack[-10]); Obj=21 // @poff=216
0x2a3: Pop(0)
0x2a4: @ GetPosition(Stack[-9])
0x2a5: Pop(0)
0x2a6: @ GetDirection(Stack[-8])
0x2a7: Pop(0)
0x2a8: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2a9: Push(CvectorIndex(Stack[-7], 0))
0x2aa: Push(CvectorIndex(Stack[-9], 0))
0x2ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ac: Push(CvectorIndex(Stack[-8], 2))
0x2ad: Push(CvectorIndex(Stack[-10], 2))
0x2ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b0: Push((int) 0)
0x2b1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-6] = "fdie" // @poff=280
0x2b4: GOTO 0x2b6

0x2b5: Stack[-6] = "bdie" // @poff=290
0x2b6: @ RemoveRTEnvelope()
0x2b7: Pop(0)
0x2b8: @ SetDeathState()
0x2b9: Pop(0)
0x2ba: @ Stop()
0x2bb: Pop(0)
0x2bc: @ StopAsync()
0x2bd: Pop(0)
0x2be: Stack[-21] = Stack[-5]
0x2bf: Push("GetScriptProperty") // @poff=300
0x2c0: Push((int) 2)
0x2c1: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2c2: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c3: Push("Owner") // @poff=336
0x2c4: @@ HasScriptProperty(Stack[-5], Stack[-1]); Obj=22 // @poff=348
0x2c5: Pop(1)
0x2c6: Push(Stack[-4])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: Push("Owner") // @poff=336
0x2c9: @@ GetScriptProperty(Stack[-6], Stack[-1]); Obj=22 // @poff=366
0x2ca: Pop(1)
0x2cb: Pop(0); PushNull((bool) Stack[-5] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-21] = Stack[-5]
0x2ce: Push("@GetEyesHeight") // @poff=384
0x2cf: Push((int) 1)
0x2d0: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2d1: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d2: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=414
0x2d3: Pop(0)
0x2d4: Stack[-1] = [0.0, 0.0, 0.0]
0x2d5: Push(CvectorIndex(Stack[-1], 1))
0x2d6: Stack[-3] = Stack[-1]
0x2d7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d8: Push("head") // @poff=428
0x2d9: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2da: Pop(1)
0x2db: Stack[-3] = (bool) 1
0x2dc: GOTO 0x2de

0x2dd: Stack[-3] = (bool) 0
0x2de: PushEmpty(string)
0x2df: Stack[-7] = Stack[-1]
0x2e0: Call2 0x45a

0x2e1: Pop(1)
0x2e2: Push("all") // @poff=138
0x2e3: @ PlayAnimation(Stack[-1], Stack[-7])
0x2e4: Pop(1)
0x2e5: @ WaitForAnimEnd()
0x2e6: Pop(0)
0x2e7: Push(Stack[-3])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: @ StopAsync()
0x2ea: Pop(0)
0x2eb: Push("head") // @poff=428
0x2ec: @ UnlookAsync(Stack[-1])
0x2ed: Pop(1)
0x2ee: Push("all") // @poff=138
0x2ef: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2f0: Pop(1)
0x2f1: @ RemoveEnvelope()
0x2f2: Pop(0)
0x2f3: Stack[-5] = 0
0x2f4: Return(); Pop(20)

0x2f5: PushEmpty()
0x2f6: @ RemoveRTEnvelope()
0x2f7: Pop(0)
0x2f8: @ SetDeathState()
0x2f9: Pop(0)
0x2fa: @ Stop()
0x2fb: Pop(0)
0x2fc: @ StopAsync()
0x2fd: Pop(0)
0x2fe: @ StopSecondaryAnimation()
0x2ff: Pop(0)
0x300: PushEmpty(string)
0x301: Stack[-2] = Stack[-1]
0x302: Call2 0x45a

0x303: Pop(1)
0x304: Push("all") // @poff=138
0x305: @ PlayAnimation(Stack[-1], Stack[-2])
0x306: Pop(1)
0x307: @ WaitForAnimEnd()
0x308: Pop(0)
0x309: Push("all") // @poff=138
0x30a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x30b: Pop(1)
0x30c: @ RemoveEnvelope()
0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: PushEmpty()
0x310: Return(); Pop(0)

0x311: PushEmpty()
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: Return(); Pop(0)

0x315: PushEmpty(cvector, cvector)
0x316: @ GetPosition(Stack[-1])
0x317: Pop(0)
0x318: Stack[-1] = Stack[-3]
0x319: Return(); Pop(2)

0x31a: PushEmpty(cvector, cvector, cvector, cvector)
0x31b: @ GetPosition(Stack[-2])
0x31c: Pop(0)
0x31d: @@ GetPosition(Stack[-1]); Obj=5 // @poff=216
0x31e: Pop(0)
0x31f: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x320: Return(); Pop(4)

0x321: PushEmpty(bool, bool)
0x322: Push("HasProperty") // @poff=438
0x323: Push((int) 2)
0x324: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-5] = (bool) 0
0x328: Return(); Pop(2)

0x329: @@ HasProperty(Stack[-3], Stack[-1]); Obj=4 // @poff=462
0x32a: Pop(0)
0x32b: Stack[-1] = Stack[-5]
0x32c: Return(); Pop(2)

0x32d: PushEmpty(bool, bool)
0x32e: @@ IsDead(Stack[-1]); Obj=3 // @poff=474
0x32f: Pop(0)
0x330: Stack[-1] = Stack[-4]
0x331: Return(); Pop(2)

0x332: PushEmpty(object, object, object, object)
0x333: Pop(0); PushNull((bool) Stack[-5] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-6] = (bool) 0
0x336: Return(); Pop(4)

0x337: PushEmpty(bool)
0x338: Stack[-1] = (bool) 0
0x339: Push("IsDead") // @poff=481
0x33a: Push((int) 1)
0x33b: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x33c: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-8] = Stack[-1]
0x33f: Call2 0x32d

0x340: Pop(1)
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: Stack[-1] = (bool) 1
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-6] = (bool) 0
0x345: Return(); Pop(4)

0x346: @ GetScene(Stack[-2])
0x347: Pop(0)
0x348: Pop(0); PushNull((bool) Stack[-2] == 0)
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-6] = (bool) 0
0x34b: Return(); Pop(4)

0x34c: @@ GetScene(Stack[-1]); Obj=5 // @poff=495
0x34d: Pop(0)
0x34e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x350: Stack[-6] = (bool) 0
0x351: Return(); Pop(4)

0x352: Stack[-6] = (bool) 1
0x353: Return(); Pop(4)

0x354: Stack[-1] = 0
0x355: Stack[-2] = 0
0x356: PushEmpty(int, int)
0x357: PushEmpty(bool, object)
0x358: Stack[-5] = Stack[-1]
0x359: Call2 0x332

0x35a: Pop(1)
0x35b: Pop(1); Push((bool) Stack[-1] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-4] = (bool) 0
0x35e: Return(); Pop(2)

0x35f: PushEmpty(bool, object, string)
0x360: Stack[-6] = Stack[-2]
0x361: Stack[-1] = "noaccess" // @poff=198
0x362: Call2 0x321

0x363: Pop(2)
0x364: Pop(1); Push((bool) Stack[-1] == 0)
0x365: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x366: Stack[-4] = (bool) 1
0x367: Return(); Pop(2)

0x368: Push("noaccess") // @poff=198
0x369: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=504
0x36a: Pop(1)
0x36b: Push((int) 0)
0x36c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x36d: Return(); Pop(2)

0x36e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x36f: Pop(0); PushNull((bool) Stack[-15] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x371: Return(); Pop(14)

0x372: @ IsDead(Stack[-7])
0x373: Pop(0)
0x374: Push(Stack[-7])
0x375: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x376: Return(); Pop(14)

0x377: @ GetSecondaryAnimationType(Stack[-6])
0x378: Pop(0)
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37c: Return(); Pop(14)

0x37d: @@ GetPosition(Stack[-5]); Obj=15 // @poff=216
0x37e: Pop(0)
0x37f: @ GetPosition(Stack[-4])
0x380: Pop(0)
0x381: @ GetDirection(Stack[-3])
0x382: Pop(0)
0x383: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x384: Push(CvectorIndex(Stack[-2], 0))
0x385: Push(CvectorIndex(Stack[-4], 0))
0x386: Pop(2); Push(Stack[-2] * Stack[-1]);
0x387: Push(CvectorIndex(Stack[-3], 2))
0x388: Push(CvectorIndex(Stack[-5], 2))
0x389: Pop(2); Push(Stack[-2] * Stack[-1]);
0x38a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38b: Push((int) 0)
0x38c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38e: Stack[-1] = "fhit" // @poff=516
0x38f: GOTO 0x391

0x390: Stack[-1] = "bhit" // @poff=526
0x391: Push("hit_react") // @poff=536
0x392: Push("1") // @poff=556
0x393: Pop(1); Push(Stack[-3] + Stack[-1]);
0x394: Push("2") // @poff=560
0x395: Pop(1); Push(Stack[-4] + Stack[-1]);
0x396: Push((int) -10)
0x397: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x398: Pop(4)
0x399: Return(); Pop(14)

0x39a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x39b: PushEmpty(bool)
0x39c: Stack[-1] = (bool) 0
0x39d: PushEmpty(bool)
0x39e: Stack[-1] = (bool) 0
0x39f: Push(Stack[-23])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a1: Push((int) 4)
0x3a2: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: Stack[-1] = (bool) 1
0x3a5: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a6: Push((int) 5)
0x3a7: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-1] = (bool) 1
0x3aa: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3ab: PushEmpty(cvector, cvector)
0x3ac: PushEmpty(cvector, object)
0x3ad: Stack[-25] = Stack[-1]
0x3ae: Call2 0x31a

0x3af: Stack[-2] = Stack[-3]
0x3b0: Pop(2)
0x3b1: Call2 0x489

0x3b2: Stack[-2] = Stack[-11]
0x3b3: Pop(2)
0x3b4: @ CreateVectorVector(Stack[-8])
0x3b5: Pop(0)
0x3b6: Stack[-7] = (int) 1
0x3b7: Push("hit") // @poff=518
0x3b8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b9: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x3ba: Pop(1)
0x3bb: Pop(0); Push((bool) Stack[-6] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bd: GOTO 0x3c7

0x3be: Pop(0); Push(Stack[-4] | Stack[-9]);
0x3bf: Push((float)0.7071067690849304)
0x3c0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c2: @@ add(Stack[-5]); Obj=8 // @poff=564
0x3c3: Pop(0)
0x3c4: Push((int) 1)
0x3c5: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x3c6: GOTO 0x3b7

0x3c7: @@ size(Stack[-3]); Obj=8 // @poff=568
0x3c8: Pop(0)
0x3c9: Push(Stack[-3])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3cb: @ irand(Stack[-2], Stack[-3])
0x3cc: Pop(0)
0x3cd: @@ get(Stack[-1], Stack[-2]); Obj=8 // @poff=573
0x3ce: Pop(0)
0x3cf: PushEmpty(object, int, float, cvector, cvector)
0x3d0: Stack[-26] = Stack[-5]
0x3d1: Stack[-25] = Stack[-4]
0x3d2: Stack[-24] = Stack[-3]
0x3d3: Stack[-6] = Stack[-2]
0x3d4: Stack[-1] = -Stack[-14]; Pop(0);
0x3d5: Call2 0x3de

0x3d6: Pop(5)
0x3d7: Return(); Pop(18)

0x3d8: Stack[-8] = 0
0x3d9: PushEmpty(object)
0x3da: Stack[-22] = Stack[-1]
0x3db: Call2 0x36e

0x3dc: Pop(1)
0x3dd: Return(); Pop(18)

0x3de: PushEmpty(object, object, object, object)
0x3df: @ GetScene(Stack[-2])
0x3e0: Pop(0)
0x3e1: Push("scripted") // @poff=577
0x3e2: Push("blood_dir.xml") // @poff=595
0x3e3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x3e4: Pop(2)
0x3e5: PushEmpty(object)
0x3e6: Stack[-10] = Stack[-1]
0x3e7: Call2 0x36e

0x3e8: Pop(1)
0x3e9: Return(); Pop(4)

0x3ea: Stack[-1] = 0
0x3eb: Stack[-2] = 0
0x3ec: PushEmpty(bool, bool)
0x3ed: @ IsLoaded(Stack[-1])
0x3ee: Pop(0)
0x3ef: Stack[-1] = Stack[-3]
0x3f0: Return(); Pop(2)

0x3f1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3f2: @@ GetPosition(Stack[-8]); Obj=20 // @poff=216
0x3f3: Pop(0)
0x3f4: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=414
0x3f5: Pop(0)
0x3f6: Push(CvectorIndex(Stack[-8], 1))
0x3f7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3f9: @ GetPosition(Stack[-7])
0x3fa: Pop(0)
0x3fb: @ GetEyesHeight(Stack[-9])
0x3fc: Pop(0)
0x3fd: Push(CvectorIndex(Stack[-7], 1))
0x3fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x400: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x401: Push(CvectorIndex(Stack[-6], 1))
0x402: Stack[-1] = (int) 0
0x403: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x404: Pop(0); Push(Stack[-6] | Stack[-6]);
0x405: Pop(1); Push(Sqrt(Stack[-1]))
0x406: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x407: Stack[-5] = -Stack[-6]; Pop(0);
0x408: Pop(0); Push(Stack[-6] * Stack[-19]);
0x409: PushEmpty(cvector, cvector)
0x40a: Push([0.0, 1.0, 0.0])
0x40b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x40c: Call2 0x489

0x40d: Pop(1)
0x40e: Push((int) 25)
0x40f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x410: Pop(2); Push(Stack[-2] + Stack[-1]);
0x411: Push([0.0, 10.0, 0.0])
0x412: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x413: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x414: @ IsOverrideActive(Stack[-2])
0x415: Pop(0)
0x416: Push(Stack[-2])
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-21] = (bool) 0
0x419: Return(); Pop(18)

0x41a: @ StopWorld()
0x41b: Pop(0)
0x41c: @ CameraTransit(Stack[-3], Stack[-5])
0x41d: Pop(0)
0x41e: Push(CvectorIndex(Stack[-4], 0))
0x41f: Push(CvectorIndex(Stack[-5], 2))
0x420: @ Rotate(Stack[-2], Stack[-1])
0x421: Pop(2)
0x422: PushEmpty(bool)
0x423: Call2 0x50f

0x424: Pop(0)
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: GOTO 0x42f

0x427: Push("head") // @poff=428
0x428: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x429: Pop(1)
0x42a: Push(Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42c: Push("head") // @poff=428
0x42d: @ LookAsyncCamera(Stack[-1])
0x42e: Pop(1)
0x42f: @ CameraWaitForPlayFinish()
0x430: Pop(0)
0x431: @ ResumeWorld()
0x432: Pop(0)
0x433: Stack[-21] = (bool) 1
0x434: Return(); Pop(18)

0x435: PushEmpty(bool, bool)
0x436: @ CameraSwitchToNormal()
0x437: Pop(0)
0x438: PushEmpty(bool)
0x439: Call2 0x50f

0x43a: Pop(0)
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: GOTO 0x445

0x43d: Push("head") // @poff=428
0x43e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x43f: Pop(1)
0x440: Push(Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x442: Push("head") // @poff=428
0x443: @ UnlookAsync(Stack[-1])
0x444: Pop(1)
0x445: Return(); Pop(2)

0x446: PushEmpty(float, float, float, float)
0x447: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x448: Pop(0)
0x449: Push((bool) 0)
0x44a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x44b: Pop(1)
0x44c: Return(); Pop(4)

0x44d: PushEmpty(float, float, float, float)
0x44e: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x44f: Pop(0)
0x450: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x451: Pop(0)
0x452: Return(); Pop(4)

0x453: PushEmpty(bool)
0x454: Call2 0x50f

0x455: Pop(0)
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: @ lshStopSpeech()
0x458: Pop(0)
0x459: Return(); Pop(0)

0x45a: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x45b: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x45c: Pop(0)
0x45d: Pop(0); Push((bool) Stack[-8] == 0)
0x45e: IF (Stack[-1] == 0) GOTO 0x473; Pop(1)

0x45f: Stack[-7] = (int) 0
0x460: Push((int) 1)
0x461: Pop(1); Push(Stack[-8] + Stack[-1]);
0x462: Pop(1); Push(Stack[-18] + Stack[-1]);
0x463: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x464: Pop(1)
0x465: Pop(0); Push((bool) Stack[-6] == 0)
0x466: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x467: GOTO 0x46b

0x468: Push((int) 1)
0x469: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x46a: GOTO 0x460

0x46b: Pop(0); Push((bool) Stack[-7] == 0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Return(); Pop(16)

0x46e: @ irand(Stack[-5], Stack[-7])
0x46f: Pop(0)
0x470: Push((int) 1)
0x471: Pop(1); Push(Stack[-6] + Stack[-1]);
0x472: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x473: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x474: Pop(0)
0x475: Push(Stack[-4])
0x476: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x477: @ GetEyesHeight(Stack[-3])
0x478: Pop(0)
0x479: @ GetDirection(Stack[-2])
0x47a: Pop(0)
0x47b: Push((int) 50)
0x47c: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x47d: Push(CvectorIndex(Stack[-1], 1))
0x47e: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x47f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x480: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x481: Pop(0)
0x482: Return(); Pop(16)

0x483: PushEmpty(object, object)
0x484: @ self(Stack[-1])
0x485: Pop(0)
0x486: Stack[-1] = Stack[-3]
0x487: Return(); Pop(2)

0x488: Stack[-1] = 0
0x489: PushEmpty(float, float)
0x48a: Pop(0); Push(Stack[-3] | Stack[-3]);
0x48b: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x48c: Push((float)9.999999974752427e-07)
0x48d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-4] = [0.0, 0.0, 0.0]
0x490: Return(); Pop(2)

0x491: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x492: Return(); Pop(2)

0x493: PushEmpty()
0x494: Pop(0); Push(Stack[-2] | Stack[-1]);
0x495: Pop(0); Push(Stack[-3] | Stack[-3]);
0x496: Pop(0); Push(Stack[-3] | Stack[-3]);
0x497: Pop(2); Push(Stack[-2] * Stack[-1]);
0x498: Pop(1); Push(Sqrt(Stack[-1]))
0x499: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x49a: Return(); Pop(0)

0x49b: PushEmpty(object, object)
0x49c: @ CreateIntVector(Stack[-1])
0x49d: Pop(0)
0x49e: @@ add(Stack[-4]); Obj=1 // @poff=564
0x49f: Pop(0)
0x4a0: @@ add(Stack[-3]); Obj=1 // @poff=564
0x4a1: Pop(0)
0x4a2: Push((int) 3)
0x4a3: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x4a4: Pop(1)
0x4a5: Return(); Pop(2)

0x4a6: Stack[-1] = 0
0x4a7: PushEmpty(int, int, bool, int, int, bool)
0x4a8: @@ GetItemID(Stack[-3]); Obj=8 // @poff=623
0x4a9: Pop(0)
0x4aa: Push("Category") // @poff=633
0x4ab: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x4ac: Pop(1)
0x4ad: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7]); Obj=9 // @poff=651
0x4ae: Pop(0)
0x4af: Pop(0); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b1: @@ DropItems(Stack[-8], Stack[-7]); Obj=9 // @poff=659
0x4b2: Pop(0)
0x4b3: GOTO 0x4b9

0x4b4: PushEmpty(int, int)
0x4b5: Stack[-5] = Stack[-2]
0x4b6: Stack[-9] = Stack[-1]
0x4b7: Call2 0x49b

0x4b8: Pop(2)
0x4b9: Return(); Pop(6)

0x4ba: PushEmpty(object, object)
0x4bb: @ CreateInvItem(Stack[-1])
0x4bc: Pop(0)
0x4bd: @@ SetItemName(Stack[-4]); Obj=1 // @poff=669
0x4be: Pop(0)
0x4bf: PushEmpty(object, object, int)
0x4c0: Stack[-8] = Stack[-3]
0x4c1: Stack[-4] = Stack[-2]
0x4c2: Stack[-6] = Stack[-1]
0x4c3: Call2 0x4a7

0x4c4: Pop(3)
0x4c5: Return(); Pop(2)

0x4c6: Stack[-1] = 0
0x4c7: PushEmpty(object, object)
0x4c8: @ FindActor(Stack[-1], Stack[-4])
0x4c9: Pop(0)
0x4ca: Pop(0); PushNull((bool) Stack[-1] == 0)
0x4cb: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4cc: Stack[-5] = (bool) 0
0x4cd: Return(); Pop(2)

0x4ce: @ Trigger(Stack[-1], Stack[-3])
0x4cf: Pop(0)
0x4d0: Stack[-5] = (bool) 1
0x4d1: Return(); Pop(2)

0x4d2: Stack[-1] = 0
0x4d3: PushEmpty(string, string)
0x4d4: Stack[-1] = "idle" // @poff=146
0x4d5: Push(Stack[-3])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4d8: Stack[-1] = Stack[-4]
0x4d9: Return(); Pop(2)

0x4da: PushEmpty(int, bool, int, bool)
0x4db: Stack[-2] = (int) 0
0x4dc: Push("all") // @poff=138
0x4dd: PushEmpty(string, int)
0x4de: Stack[-5] = Stack[-1]
0x4df: Call2 0x4d3

0x4e0: Pop(1)
0x4e1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(2)
0x4e3: Pop(0); Push((bool) Stack[-1] == 0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: GOTO 0x4e9

0x4e6: Push((int) 1)
0x4e7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4e8: GOTO 0x4dc

0x4e9: Stack[-2] = Stack[-5]
0x4ea: Return(); Pop(4)

0x4eb: PushEmpty()
0x4ec: Push("powder is given") // @poff=681
0x4ed: @ Trace(Stack[-1])
0x4ee: Pop(1)
0x4ef: PushEmpty(object, string, int)
0x4f0: Stack[-5] = Stack[-3]
0x4f1: Stack[-2] = "powder" // @poff=713
0x4f2: Stack[-1] = (int) 1
0x4f3: Call2 0x4ba

0x4f4: Pop(3)
0x4f5: Return(); Pop(0)

0x4f6: PushEmpty(int, int)
0x4f7: Push("branch") // @poff=727
0x4f8: @ GetVariable(Stack[-1], Stack[-2])
0x4f9: Pop(1)
0x4fa: Push((int) 0)
0x4fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4fc: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4fd: Stack[-3] = (int) 1
0x4fe: Return(); Pop(2)

0x4ff: GOTO 0x505

0x500: Push((int) 1)
0x501: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x503: Stack[-3] = (int) 2
0x504: Return(); Pop(2)

0x505: Stack[-3] = (int) 3
0x506: Return(); Pop(2)

0x507: Stack[-1] = (int) 515560
0x508: Return(); Pop(0)

0x509: Stack[-1] = (int) 503345
0x50a: Return(); Pop(0)

0x50b: Stack[-1] = "ui/NPC_Citizen3.png" // @poff=741
0x50c: Return(); Pop(0)

0x50d: Stack[-1] = "ui/NPC_Citizen3_b.png" // @poff=781
0x50e: Return(); Pop(0)

0x50f: Stack[-1] = (bool) 0
0x510: Return(); Pop(0)

0x511: PushEmpty(object, object)
0x512: @ GetScene(Stack[-1])
0x513: Pop(0)
0x514: PushEmpty(object)
0x515: Call2 0x483

0x516: Pop(0)
0x517: @@ RemoveStationaryActor(Stack[-1]); Obj=2 // @poff=825
0x518: Pop(1)
0x519: Return(); Pop(2)

0x51a: Stack[-1] = 0
0x51b: PushEmpty()
0x51c: PushEmpty()
0x51d: Call2 0x511

0x51e: Pop(0)
0x51f: PushEmpty(object)
0x520: Stack[-2] = Stack[-1]
0x521: Push(-1, 0); TaskCall(6)
0x522: Call2 0x291

0x523: Pop(-1, 0); TaskReturn
0x524: Pop(1)
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: PushEmpty(object, int, float)
0x528: Stack[-7] = Stack[-3]
0x529: Stack[-6] = Stack[-2]
0x52a: Stack[-5] = Stack[-1]
0x52b: Call2 0x39a

0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: PushEmpty(object, int, float, cvector, cvector)
0x530: Stack[-11] = Stack[-5]
0x531: Stack[-10] = Stack[-4]
0x532: Stack[-9] = Stack[-3]
0x533: Stack[-7] = Stack[-2]
0x534: Stack[-6] = Stack[-1]
0x535: Call2 0x3de

0x536: Pop(5)
0x537: Return(); Pop(0)

0x538: PushEmpty(float, float)
0x539: Push("health") // @poff=847
0x53a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x53b: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x53c: Push("health") // @poff=847
0x53d: @ GetProperty(Stack[-1], Stack[-2])
0x53e: Pop(1)
0x53f: Push((int) 0)
0x540: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: @ SignalDeath(Stack[-4])
0x543: Pop(0)
0x544: Return(); Pop(2)

0x545: PushEmpty()
0x546: PushEmpty(object)
0x547: Stack[-2] = Stack[-1]
0x548: Call2 0x51b

0x549: Pop(1)
0x54a: Return(); Pop(0)

0x54b: PushEmpty()
0x54c: PushEmpty(bool, object)
0x54d: Stack[-3] = Stack[-1]
0x54e: Call2 0x356

0x54f: Stack[-2] = Stack[-4]
0x550: Pop(2)
0x551: Return(); Pop(0)

0x552: PushEmpty()
0x553: PushEmpty(object)
0x554: Stack[-2] = Stack[-1]
0x555: Push(-1, 3); TaskCall(5)
0x556: Call2 0x1f4

0x557: Pop(-1, 3); TaskReturn
0x558: Pop(1)
0x559: Return(); Pop(0)

0x55a: PushEmpty(bool, bool)
0x55b: @ IsPlayerActor(Stack[-3], Stack[-1])
0x55c: Pop(0)
0x55d: Push(Stack[-1])
0x55e: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55f: PushEmpty(bool, string, string)
0x560: Stack[-2] = "quest_k3_04" // @poff=861
0x561: Stack[-1] = "boy_attacked" // @poff=885
0x562: Call2 0x4c7

0x563: Pop(3)
0x564: Return(); Pop(2)

