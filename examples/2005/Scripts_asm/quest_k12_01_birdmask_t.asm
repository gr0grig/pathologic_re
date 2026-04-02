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
	W:player
	W:head
	A:GetPosition
	A:GetEyesHeight
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:ook12BirdmaskT1
	W:quest_k12_01
	W:init_theater
	W:ook12BirdmaskT2
	W:k12q01ChildsAreVisited
	W:branch
	A:add
	W:vol_
	A:size
	A:get
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e004765744579657348656967687400750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e00670000006f006f006b003100320042006900720064006d00610073006b00540031000000710075006500730074005f006b00310032005f0030003100000069006e00690074005f00740068006500610074006500720000006f006f006b003100320042006900720064006d00610073006b005400320000006b00310032007100300031004300680069006c0064007300410072006500560069007300690074006500640000006200720061006e006300680000006164640076006f006c005f00000073697a650067657400
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
	Sleep (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x1ce
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1da Vars = (object)
		EVENT_7 Op = 0x20f Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x297

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x340

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x33e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x342

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x344

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x38f

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
0x41: Call2 0x2db

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
0x4f: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x35b

0x55: Pop(1)
0x56: Pop(1); Push((bool) Stack[-1] == 0)
0x57: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x58: PushEmpty(bool, object)
0x59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a: Call2 0x365

0x5b: Pop(1)
0x5c: Pop(1); Push((bool) Stack[-1] == 0)
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: Stack[-1] = (bool) 1
0x5f: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x60: PushEmpty(string)
0x61: Stack[-1] = "Neutral" // @poff=89
0x62: Call2 0xd3

0x63: Pop(1)
0x64: Push((int) 539228)
0x65: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x66: Pop(1)
0x67: @@@ ClearReplies(); Obj=0 // @poff=116
0x68: Pop(0)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x37d

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 539229)
0x6f: Push((int) 41173)
0x70: Push((int) 41172)
0x71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72: Pop(3)
0x73: Push((int) 539242)
0x74: Push((int) -1)
0x75: Push((int) 41185)
0x76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77: Pop(3)
0x78: GOTO 0xb5

0x79: PushEmpty(bool)
0x7a: Stack[-1] = (bool) 0
0x7b: PushEmpty(bool)
0x7c: Stack[-1] = (bool) 0
0x7d: PushEmpty(bool, object)
0x7e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f: Call2 0x365

0x80: Pop(1)
0x81: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x35b

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Stack[-1] = (bool) 1
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x371

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 1
0x8f: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0x90: PushEmpty(object, object)
0x91: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x92: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x93: Call2 0x348

0x94: Pop(2)
0x95: PushEmpty(string)
0x96: Stack[-1] = "Neutral" // @poff=89
0x97: Call2 0xd3

0x98: Pop(1)
0x99: Push((int) 539243)
0x9a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x9b: Pop(1)
0x9c: @@@ ClearReplies(); Obj=0 // @poff=116
0x9d: Pop(0)
0x9e: Push((int) 539244)
0x9f: Push((int) -1)
0xa0: Push((int) 41187)
0xa1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xa2: Pop(3)
0xa3: GOTO 0xb5

0xa4: PushEmpty(string)
0xa5: Stack[-1] = "Neutral" // @poff=89
0xa6: Call2 0xd3

0xa7: Pop(1)
0xa8: Push((int) 539245)
0xa9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xaa: Pop(1)
0xab: @@@ ClearReplies(); Obj=0 // @poff=116
0xac: Pop(0)
0xad: Push((int) 539246)
0xae: Push((int) -1)
0xaf: Push((int) 41189)
0xb0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb1: Pop(3)
0xb2: GOTO 0xb5

0xb3: Return(); Pop(0)

0xb4: GOTO 0x4e

0xb5: PushEmpty(bool)
0xb6: Call2 0x346

0xb7: Pop(0)
0xb8: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xb9: @ lshWaitForAnimEnd()
0xba: Pop(0)
0xbb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: GOTO 0xc3

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc0: Call2 0x2ec

0xc1: Pop(1)
0xc2: GOTO 0xb9

0xc3: GOTO 0xd2

0xc4: Push("all") // @poff=138
0xc5: Push("idle") // @poff=146
0xc6: @ PlayAnimation(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: @ WaitForAnimEnd()
0xc9: Pop(0)
0xca: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcc: GOTO 0xd2

0xcd: Push("all") // @poff=138
0xce: Push("idle") // @poff=146
0xcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0: Pop(2)
0xd1: GOTO 0xc8

0xd2: Return(); Pop(0)

0xd3: PushEmpty()
0xd4: PushEmpty(bool)
0xd5: Call2 0x346

0xd6: Pop(0)
0xd7: Pop(1); Push((bool) Stack[-1] == 0)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Return(); Pop(0)

0xda: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: Return(); Pop(0)

0xdd: PushEmpty(string, bool)
0xde: Stack[-3] = Stack[-2]
0xdf: Push("") // @poff=102
0xe0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe2: Stack[-1] = (bool) 0
0xe3: GOTO 0xe5

0xe4: Stack[-1] = (bool) 1
0xe5: Call2 0x2f3

0xe6: Pop(2)
0xe7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: Push((int) 1)
0xeb: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0xec: PushEmpty()
0xed: Call2 0x304

0xee: Pop(0)
0xef: Push((int) 41172)
0xf0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xf2: PushEmpty(object, object)
0xf3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf5: Call2 0x355

0xf6: Pop(2)
0xf7: Push((int) 41187)
0xf8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x34e

0xfe: Pop(2)
0xff: Push((int) 41171)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: PushEmpty(bool, object)
0x105: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x106: Call2 0x35b

0x107: Pop(1)
0x108: Pop(1); Push((bool) Stack[-1] == 0)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x365

0x10d: Pop(1)
0x10e: Pop(1); Push((bool) Stack[-1] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral" // @poff=89
0x114: Call2 0xd3

0x115: Pop(1)
0x116: Push((int) 539228)
0x117: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x118: Pop(1)
0x119: @@@ ClearReplies(); Obj=0 // @poff=116
0x11a: Pop(0)
0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x37d

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: Push((int) 539229)
0x121: Push((int) 41173)
0x122: Push((int) 41172)
0x123: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x124: Pop(3)
0x125: Push((int) 539242)
0x126: Push((int) -1)
0x127: Push((int) 41185)
0x128: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: PushEmpty(bool)
0x12c: Stack[-1] = (bool) 0
0x12d: PushEmpty(bool)
0x12e: Stack[-1] = (bool) 0
0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x365

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x35b

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x139: Stack[-1] = (bool) 1
0x13a: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0x371

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: Stack[-1] = (bool) 1
0x141: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x142: PushEmpty(object, object)
0x143: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x144: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x145: Call2 0x348

0x146: Pop(2)
0x147: PushEmpty(string)
0x148: Stack[-1] = "Neutral" // @poff=89
0x149: Call2 0xd3

0x14a: Pop(1)
0x14b: Push((int) 539243)
0x14c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x14d: Pop(1)
0x14e: @@@ ClearReplies(); Obj=0 // @poff=116
0x14f: Pop(0)
0x150: Push((int) 539244)
0x151: Push((int) -1)
0x152: Push((int) 41187)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral" // @poff=89
0x158: Call2 0xd3

0x159: Pop(1)
0x15a: Push((int) 539245)
0x15b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x15c: Pop(1)
0x15d: @@@ ClearReplies(); Obj=0 // @poff=116
0x15e: Pop(0)
0x15f: Push((int) 539246)
0x160: Push((int) -1)
0x161: Push((int) 41189)
0x162: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x163: Pop(3)
0x164: Return(); Pop(0)

0x165: Push((int) 41173)
0x166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x167: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x168: PushEmpty(string)
0x169: Stack[-1] = "Neutral" // @poff=89
0x16a: Call2 0xd3

0x16b: Pop(1)
0x16c: Push((int) 539230)
0x16d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x16e: Pop(1)
0x16f: @@@ ClearReplies(); Obj=0 // @poff=116
0x170: Pop(0)
0x171: Push((int) 539231)
0x172: Push((int) 41175)
0x173: Push((int) 41174)
0x174: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x175: Pop(3)
0x176: Push((int) 539235)
0x177: Push((int) 41179)
0x178: Push((int) 41178)
0x179: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Push((int) 41179)
0x17d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17e: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x17f: PushEmpty(string)
0x180: Stack[-1] = "Neutral" // @poff=89
0x181: Call2 0xd3

0x182: Pop(1)
0x183: Push((int) 539236)
0x184: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x185: Pop(1)
0x186: @@@ ClearReplies(); Obj=0 // @poff=116
0x187: Pop(0)
0x188: Push((int) 539237)
0x189: Push((int) 41181)
0x18a: Push((int) 41180)
0x18b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x18c: Pop(3)
0x18d: Push((int) 539241)
0x18e: Push((int) -1)
0x18f: Push((int) 41184)
0x190: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x191: Pop(3)
0x192: Return(); Pop(0)

0x193: Push((int) 41181)
0x194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x195: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x196: PushEmpty(string)
0x197: Stack[-1] = "Neutral" // @poff=89
0x198: Call2 0xd3

0x199: Pop(1)
0x19a: Push((int) 539238)
0x19b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19c: Pop(1)
0x19d: @@@ ClearReplies(); Obj=0 // @poff=116
0x19e: Pop(0)
0x19f: Push((int) 539239)
0x1a0: Push((int) -1)
0x1a1: Push((int) 41182)
0x1a2: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a3: Pop(3)
0x1a4: Push((int) 539240)
0x1a5: Push((int) -1)
0x1a6: Push((int) 41183)
0x1a7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a8: Pop(3)
0x1a9: Return(); Pop(0)

0x1aa: Push((int) 41175)
0x1ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ad: PushEmpty(string)
0x1ae: Stack[-1] = "Neutral" // @poff=89
0x1af: Call2 0xd3

0x1b0: Pop(1)
0x1b1: Push((int) 539232)
0x1b2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1b3: Pop(1)
0x1b4: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b5: Pop(0)
0x1b6: Push((int) 539233)
0x1b7: Push((int) -1)
0x1b8: Push((int) 41176)
0x1b9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1ba: Pop(3)
0x1bb: Push((int) 539234)
0x1bc: Push((int) -1)
0x1bd: Push((int) 41177)
0x1be: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bf: Pop(3)
0x1c0: Return(); Pop(0)

0x1c1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1c2: PushEmpty(bool)
0x1c3: Call2 0x346

0x1c4: Pop(0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c6: @ lshStopAnimation()
0x1c7: Pop(0)
0x1c8: GOTO 0x1cb

0x1c9: @ StopAnimation()
0x1ca: Pop(0)
0x1cb: Return(); Pop(0)

0x1cc: GOTO 0xea

0x1cd: Return(); Pop(0)

0x1ce: Push((bool) 1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d0: PushEmpty(float, float)
0x1d1: Stack[-2] = (int) 300
0x1d2: Stack[-1] = (int) 100
0x1d3: Call2 0x1e5

0x1d4: Pop(2)
0x1d5: Push((int) 1)
0x1d6: @ Sleep(Stack[-1])
0x1d7: Pop(1)
0x1d8: GOTO 0x1ce

0x1d9: Return(); Pop(0)

0x1da: PushEmpty()
0x1db: PushEmpty()
0x1dc: Call2 0x226

0x1dd: Pop(0)
0x1de: PushEmpty(int, object)
0x1df: Stack[-3] = Stack[-1]
0x1e0: Push(-2, 1); TaskCall(0)
0x1e1: Call2 0x0

0x1e2: Pop(-2, 1); TaskReturn
0x1e3: Pop(2)
0x1e4: Return(); Pop(0)

0x1e5: PushEmpty()
0x1e6: PushEmpty(bool)
0x1e7: Call2 0x292

0x1e8: Pop(0)
0x1e9: Pop(1); Push((bool) Stack[-1] == 0)
0x1ea: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1eb: Return(); Pop(0)

0x1ec: Push("player") // @poff=156
0x1ed: @ FindActor(Stack[-4]T, Stack[-1])
0x1ee: Pop(1)
0x1ef: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1f1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1f2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1f3: Push((int) 10)
0x1f4: Push((float)1.0)
0x1f5: @ SetTimer(Stack[-2], Stack[-1])
0x1f6: Pop(2)
0x1f7: PushEmpty()
0x1f8: Call2 0x234

0x1f9: Pop(0)
0x1fa: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fc: Push((int) 10)
0x1fd: @ KillTimer(Stack[-1])
0x1fe: Pop(1)
0x1ff: Return(); Pop(0)

0x200: PushEmpty(float, float)
0x201: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-3] = (bool) 0
0x204: Return(); Pop(2)

0x205: PushEmpty(float, object)
0x206: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x207: Call2 0x28a

0x208: Pop(1)
0x209: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x20a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x20d: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x20e: Return(); Pop(2)

0x20f: PushEmpty()
0x210: Push((int) 10)
0x211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x213: PushEmpty(bool)
0x214: Call2 0x200

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x217: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x219: PushEmpty(object)
0x21a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x21b: Call2 0x2f9

0x21c: Pop(1)
0x21d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x21e: GOTO 0x225

0x21f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x220: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x221: Push("head") // @poff=170
0x222: @ UnlookAsync(Stack[-1])
0x223: Pop(1)
0x224: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x225: Return(); Pop(0)

0x226: PushEmpty()
0x227: Call2 0x285

0x228: Pop(0)
0x229: Push((int) 10)
0x22a: @ KillTimer(Stack[-1])
0x22b: Pop(1)
0x22c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x22d: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22e: Push("head") // @poff=170
0x22f: @ UnlookAsync(Stack[-1])
0x230: Pop(1)
0x231: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x232: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x233: Return(); Pop(0)

0x234: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x235: @ WaitForAnimEnd()
0x236: Pop(0)
0x237: PushEmpty(bool)
0x238: Call2 0x292

0x239: Pop(0)
0x23a: Pop(1); Push((bool) Stack[-1] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: Return(); Pop(14)

0x23d: PushEmpty(int)
0x23e: Call2 0x32d

0x23f: Stack[-1] = Stack[-8]
0x240: Pop(1)
0x241: Stack[-6] = (int) 0
0x242: PushEmpty(bool)
0x243: Stack[-1] = (bool) 0
0x244: Push((int) 5)
0x245: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: PushEmpty(bool)
0x248: Call2 0x292

0x249: Pop(0)
0x24a: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24b: Stack[-1] = (bool) 1
0x24c: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x24d: Push((int) 3)
0x24e: @ irand(Stack[-6], Stack[-1])
0x24f: Pop(1)
0x250: Push((int) 0)
0x251: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x253: Push(Stack[-7])
0x254: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x255: @ irand(Stack[-4], Stack[-7])
0x256: Pop(0)
0x257: Push("all") // @poff=138
0x258: PushEmpty(string, int)
0x259: Stack[-7] = Stack[-1]
0x25a: Call2 0x326

0x25b: Pop(1)
0x25c: @ PlayAnimation(Stack[-2], Stack[-1])
0x25d: Pop(2)
0x25e: @ WaitForAnimEnd(Stack[-3])
0x25f: Pop(0)
0x260: Pop(0); Push((bool) Stack[-3] == 0)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: GOTO 0x280

0x263: GOTO 0x275

0x264: Push((int) 1)
0x265: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x267: Push((int) 4)
0x268: @ rand(Stack[-3], Stack[-1])
0x269: Pop(1)
0x26a: Push((int) 1)
0x26b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x26c: @ Sleep(Stack[-1], Stack[-2])
0x26d: Pop(1)
0x26e: Pop(0); Push((bool) Stack[-1] == 0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: GOTO 0x280

0x271: GOTO 0x275

0x272: Push(Stack[-6])
0x273: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x274: GOTO 0x280

0x275: PushEmpty(bool)
0x276: Call2 0x283

0x277: Pop(0)
0x278: Pop(1); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x280

0x27b: @ ResetAAS()
0x27c: Pop(0)
0x27d: Push((int) 1)
0x27e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x27f: GOTO 0x242

0x280: @ ResetAAS()
0x281: Pop(0)
0x282: Return(); Pop(14)

0x283: Stack[-1] = (bool) 1
0x284: Return(); Pop(0)

0x285: @ StopAnimation()
0x286: Pop(0)
0x287: @ StopGroup0()
0x288: Pop(0)
0x289: Return(); Pop(0)

0x28a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x28b: @ GetPosition(Stack[-3])
0x28c: Pop(0)
0x28d: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x28e: Pop(0)
0x28f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x290: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x291: Return(); Pop(6)

0x292: PushEmpty(bool, bool)
0x293: @ IsLoaded(Stack[-1])
0x294: Pop(0)
0x295: Stack[-1] = Stack[-3]
0x296: Return(); Pop(2)

0x297: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x298: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x299: Pop(0)
0x29a: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x29b: Pop(0)
0x29c: Push(CvectorIndex(Stack[-8], 1))
0x29d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x29e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x29f: @ GetPosition(Stack[-7])
0x2a0: Pop(0)
0x2a1: @ GetEyesHeight(Stack[-9])
0x2a2: Pop(0)
0x2a3: Push(CvectorIndex(Stack[-7], 1))
0x2a4: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a6: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a7: Push(CvectorIndex(Stack[-6], 1))
0x2a8: Stack[-1] = (int) 0
0x2a9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2aa: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ab: Pop(1); Push(Sqrt(Stack[-1]))
0x2ac: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ad: Stack[-5] = -Stack[-6]; Pop(0);
0x2ae: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2af: PushEmpty(cvector, cvector)
0x2b0: Push([0.0, 1.0, 0.0])
0x2b1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b2: Call2 0x30b

0x2b3: Pop(1)
0x2b4: Push((int) 25)
0x2b5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b7: Push([0.0, 10.0, 0.0])
0x2b8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2b9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2ba: @ IsOverrideActive(Stack[-2])
0x2bb: Pop(0)
0x2bc: Push(Stack[-2])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[-21] = (bool) 0
0x2bf: Return(); Pop(18)

0x2c0: @ StopWorld()
0x2c1: Pop(0)
0x2c2: @ CameraTransit(Stack[-3], Stack[-5])
0x2c3: Pop(0)
0x2c4: Push(CvectorIndex(Stack[-4], 0))
0x2c5: Push(CvectorIndex(Stack[-5], 2))
0x2c6: @ Rotate(Stack[-2], Stack[-1])
0x2c7: Pop(2)
0x2c8: PushEmpty(bool)
0x2c9: Call2 0x346

0x2ca: Pop(0)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: GOTO 0x2d5

0x2cd: Push("head") // @poff=170
0x2ce: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2cf: Pop(1)
0x2d0: Push(Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d2: Push("head") // @poff=170
0x2d3: @ LookAsyncCamera(Stack[-1])
0x2d4: Pop(1)
0x2d5: @ CameraWaitForPlayFinish()
0x2d6: Pop(0)
0x2d7: @ ResumeWorld()
0x2d8: Pop(0)
0x2d9: Stack[-21] = (bool) 1
0x2da: Return(); Pop(18)

0x2db: PushEmpty(bool, bool)
0x2dc: @ CameraSwitchToNormal()
0x2dd: Pop(0)
0x2de: PushEmpty(bool)
0x2df: Call2 0x346

0x2e0: Pop(0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: GOTO 0x2eb

0x2e3: Push("head") // @poff=170
0x2e4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e5: Pop(1)
0x2e6: Push(Stack[-1])
0x2e7: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e8: Push("head") // @poff=170
0x2e9: @ UnlookAsync(Stack[-1])
0x2ea: Pop(1)
0x2eb: Return(); Pop(2)

0x2ec: PushEmpty(float, float, float, float)
0x2ed: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2ee: Pop(0)
0x2ef: Push((bool) 0)
0x2f0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(1)
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty(float, float, float, float)
0x2f4: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x2f5: Pop(0)
0x2f6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x2f7: Pop(0)
0x2f8: Return(); Pop(4)

0x2f9: PushEmpty(float, cvector, float, cvector)
0x2fa: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x2fb: Pop(0)
0x2fc: Stack[-1] = [0.0, 0.0, 0.0]
0x2fd: Push(CvectorIndex(Stack[-1], 1))
0x2fe: Stack[-3] = Stack[-1]
0x2ff: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x300: Push("head") // @poff=170
0x301: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x302: Pop(1)
0x303: Return(); Pop(4)

0x304: PushEmpty(bool)
0x305: Call2 0x346

0x306: Pop(0)
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: @ lshStopSpeech()
0x309: Pop(0)
0x30a: Return(); Pop(0)

0x30b: PushEmpty(float, float)
0x30c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x30d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x30e: Push((float)9.999999974752427e-07)
0x30f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x310: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x311: Stack[-4] = [0.0, 0.0, 0.0]
0x312: Return(); Pop(2)

0x313: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x314: Return(); Pop(2)

0x315: PushEmpty(int, int)
0x316: @ GetVariable(Stack[-3], Stack[-1])
0x317: Pop(0)
0x318: Stack[-1] = Stack[-4]
0x319: Return(); Pop(2)

0x31a: PushEmpty(object, object)
0x31b: @ FindActor(Stack[-1], Stack[-4])
0x31c: Pop(0)
0x31d: Pop(0); PushNull((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: Stack[-5] = (bool) 0
0x320: Return(); Pop(2)

0x321: @ Trigger(Stack[-1], Stack[-3])
0x322: Pop(0)
0x323: Stack[-5] = (bool) 1
0x324: Return(); Pop(2)

0x325: Stack[-1] = 0
0x326: PushEmpty(string, string)
0x327: Stack[-1] = "idle" // @poff=146
0x328: Push(Stack[-3])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x32b: Stack[-1] = Stack[-4]
0x32c: Return(); Pop(2)

0x32d: PushEmpty(int, bool, int, bool)
0x32e: Stack[-2] = (int) 0
0x32f: Push("all") // @poff=138
0x330: PushEmpty(string, int)
0x331: Stack[-5] = Stack[-1]
0x332: Call2 0x326

0x333: Pop(1)
0x334: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x335: Pop(2)
0x336: Pop(0); Push((bool) Stack[-1] == 0)
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: GOTO 0x33c

0x339: Push((int) 1)
0x33a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x33b: GOTO 0x32f

0x33c: Stack[-2] = Stack[-5]
0x33d: Return(); Pop(4)

0x33e: Stack[-1] = (int) 515571
0x33f: Return(); Pop(0)

0x340: Stack[-1] = (int) 504029
0x341: Return(); Pop(0)

0x342: Stack[-1] = "ui/NPC_bmask.png" // @poff=206
0x343: Return(); Pop(0)

0x344: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=240
0x345: Return(); Pop(0)

0x346: Stack[-1] = (bool) 0
0x347: Return(); Pop(0)

0x348: PushEmpty()
0x349: Push("ook12BirdmaskT1") // @poff=278
0x34a: Push((int) 1)
0x34b: @ SetVariable(Stack[-2], Stack[-1])
0x34c: Pop(2)
0x34d: Return(); Pop(0)

0x34e: PushEmpty()
0x34f: PushEmpty(bool, string, string)
0x350: Stack[-2] = "quest_k12_01" // @poff=310
0x351: Stack[-1] = "init_theater" // @poff=336
0x352: Call2 0x31a

0x353: Pop(3)
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: Push("ook12BirdmaskT2") // @poff=362
0x357: Push((int) 1)
0x358: @ SetVariable(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: Return(); Pop(0)

0x35b: PushEmpty()
0x35c: PushEmpty(bool, object)
0x35d: Stack[-3] = Stack[-1]
0x35e: Call2 0x389

0x35f: Pop(1)
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-2] = (bool) 1
0x362: Return(); Pop(0)

0x363: Stack[-2] = (bool) 0
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty(int, string)
0x367: Stack[-1] = "k12q01ChildsAreVisited" // @poff=394
0x368: Call2 0x315

0x369: Pop(1)
0x36a: Push((int) 0)
0x36b: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: Stack[-2] = (bool) 1
0x36e: Return(); Pop(0)

0x36f: Stack[-2] = (bool) 0
0x370: Return(); Pop(0)

0x371: PushEmpty()
0x372: PushEmpty(int, string)
0x373: Stack[-1] = "ook12BirdmaskT1" // @poff=278
0x374: Call2 0x315

0x375: Pop(1)
0x376: Push((int) 0)
0x377: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-2] = (bool) 1
0x37a: Return(); Pop(0)

0x37b: Stack[-2] = (bool) 0
0x37c: Return(); Pop(0)

0x37d: PushEmpty()
0x37e: PushEmpty(int, string)
0x37f: Stack[-1] = "ook12BirdmaskT2" // @poff=362
0x380: Call2 0x315

0x381: Pop(1)
0x382: Push((int) 0)
0x383: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-2] = (bool) 1
0x386: Return(); Pop(0)

0x387: Stack[-2] = (bool) 0
0x388: Return(); Pop(0)

0x389: PushEmpty()
0x38a: PushEmpty(bool)
0x38b: Call2 0x48b

0x38c: Stack[-1] = Stack[-3]
0x38d: Pop(1)
0x38e: Return(); Pop(0)

0x38f: PushEmpty(int, int)
0x390: Push("branch") // @poff=440
0x391: @ GetVariable(Stack[-1], Stack[-2])
0x392: Pop(1)
0x393: Push((int) 0)
0x394: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x399; Pop(1)

0x396: Stack[-3] = (int) 1
0x397: Return(); Pop(2)

0x398: GOTO 0x39e

0x399: Push((int) 1)
0x39a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39c: Stack[-3] = (int) 2
0x39d: Return(); Pop(2)

0x39e: Stack[-3] = (int) 3
0x39f: Return(); Pop(2)

0x3a0: PushEmpty()
0x3a1: Push((int) 18)
0x3a2: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3a3: Pop(1)
0x3a4: Push((int) 24)
0x3a5: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3a6: Pop(1)
0x3a7: Push((int) 20)
0x3a8: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3a9: Pop(1)
0x3aa: Push((int) 14)
0x3ab: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3ac: Pop(1)
0x3ad: Push((bool) 0)
0x3ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b0: Push((int) 10)
0x3b1: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3b2: Pop(1)
0x3b3: Push((int) 17)
0x3b4: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3b5: Pop(1)
0x3b6: Push((int) 8)
0x3b7: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3b8: Pop(1)
0x3b9: GOTO 0x3c0

0x3ba: Push((int) 1)
0x3bb: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bd: Push((int) 10)
0x3be: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3bf: Pop(1)
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty()
0x3c2: Push((int) 6)
0x3c3: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3c4: Pop(1)
0x3c5: Push((int) 26)
0x3c6: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3c7: Pop(1)
0x3c8: Push((int) 2)
0x3c9: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3ca: Pop(1)
0x3cb: Push((int) 22)
0x3cc: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3cd: Pop(1)
0x3ce: Push((bool) 0)
0x3cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d0: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d1: Push((int) 15)
0x3d2: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3d3: Pop(1)
0x3d4: Push((int) 5)
0x3d5: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3d6: Pop(1)
0x3d7: Push((int) 16)
0x3d8: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3d9: Pop(1)
0x3da: Push((int) 19)
0x3db: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3dc: Pop(1)
0x3dd: GOTO 0x3e4

0x3de: Push((int) 0)
0x3df: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3e1: Push((int) 15)
0x3e2: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3e3: Pop(1)
0x3e4: Return(); Pop(0)

0x3e5: PushEmpty()
0x3e6: Push((int) 7)
0x3e7: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3e8: Pop(1)
0x3e9: Push((int) 23)
0x3ea: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3eb: Pop(1)
0x3ec: Push((int) 21)
0x3ed: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3ee: Pop(1)
0x3ef: Push((int) 9)
0x3f0: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3f1: Pop(1)
0x3f2: Push((int) 3)
0x3f3: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3f4: Pop(1)
0x3f5: Push((int) 1)
0x3f6: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3f7: Pop(1)
0x3f8: Push((int) 11)
0x3f9: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3fa: Pop(1)
0x3fb: Push((int) 13)
0x3fc: @@ add(Stack[-1]); Obj=4 // @poff=454
0x3fd: Pop(1)
0x3fe: Push((bool) 0)
0x3ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x400: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x401: Push((int) 25)
0x402: @@ add(Stack[-1]); Obj=4 // @poff=454
0x403: Pop(1)
0x404: Return(); Pop(0)

0x405: PushEmpty(int, int)
0x406: Push("vol_") // @poff=458
0x407: Pop(1); Push(Stack[-1] + Stack[-4]);
0x408: @ GetVariable(Stack[-1], Stack[-2])
0x409: Pop(1)
0x40a: Push((int) 4)
0x40b: Pop(1); Push(Stack[-2] & Stack[-1]);
0x40c: Push((int) 0)
0x40d: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x40e: Return(); Pop(2)

0x40f: PushEmpty(int, int)
0x410: Push("vol_") // @poff=458
0x411: Pop(1); Push(Stack[-1] + Stack[-4]);
0x412: @ GetVariable(Stack[-1], Stack[-2])
0x413: Pop(1)
0x414: Push((int) 16)
0x415: Pop(1); Push(Stack[-2] & Stack[-1]);
0x416: Push((int) 0)
0x417: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x418: Return(); Pop(2)

0x419: PushEmpty(object, int, int, int, object, int, int, int)
0x41a: @ CreateIntVector(Stack[-4])
0x41b: Pop(0)
0x41c: PushEmpty(object, bool, int)
0x41d: Stack[-7] = Stack[-3]
0x41e: Stack[-2] = (bool) 0
0x41f: Stack[-1] = (int) -1
0x420: Call2 0x3a0

0x421: Pop(3)
0x422: @@ size(Stack[-3]); Obj=4 // @poff=468
0x423: Pop(0)
0x424: Stack[-2] = (int) 0
0x425: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x426: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x427: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=473
0x428: Pop(0)
0x429: PushEmpty(bool)
0x42a: Stack[-1] = (bool) 1
0x42b: PushEmpty(bool, int)
0x42c: Stack[-4] = Stack[-1]
0x42d: Call2 0x40f

0x42e: Pop(1)
0x42f: IF (Stack[-1] == 1) GOTO 0x436; Pop(1)

0x430: PushEmpty(bool, int)
0x431: Stack[-4] = Stack[-1]
0x432: Call2 0x405

0x433: Pop(1)
0x434: IF (Stack[-1] == 1) GOTO 0x436; Pop(1)

0x435: Stack[-1] = (bool) 0
0x436: IF (Stack[-1] == 0) GOTO 0x439; Pop(1)

0x437: Stack[-9] = (bool) 0
0x438: Return(); Pop(8)

0x439: Push((int) 1)
0x43a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x43b: GOTO 0x425

0x43c: Stack[-9] = (bool) 1
0x43d: Return(); Pop(8)

0x43e: Stack[-4] = 0
0x43f: PushEmpty(object, int, int, int, object, int, int, int)
0x440: @ CreateIntVector(Stack[-4])
0x441: Pop(0)
0x442: PushEmpty(object, bool, int)
0x443: Stack[-7] = Stack[-3]
0x444: Stack[-2] = (bool) 0
0x445: Stack[-1] = (int) -1
0x446: Call2 0x3c1

0x447: Pop(3)
0x448: @@ size(Stack[-3]); Obj=4 // @poff=468
0x449: Pop(0)
0x44a: Stack[-2] = (int) 0
0x44b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x44c: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x44d: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=473
0x44e: Pop(0)
0x44f: PushEmpty(bool)
0x450: Stack[-1] = (bool) 1
0x451: PushEmpty(bool, int)
0x452: Stack[-4] = Stack[-1]
0x453: Call2 0x40f

0x454: Pop(1)
0x455: IF (Stack[-1] == 1) GOTO 0x45c; Pop(1)

0x456: PushEmpty(bool, int)
0x457: Stack[-4] = Stack[-1]
0x458: Call2 0x405

0x459: Pop(1)
0x45a: IF (Stack[-1] == 1) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 0
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-9] = (bool) 0
0x45e: Return(); Pop(8)

0x45f: Push((int) 1)
0x460: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x461: GOTO 0x44b

0x462: Stack[-9] = (bool) 1
0x463: Return(); Pop(8)

0x464: Stack[-4] = 0
0x465: PushEmpty(object, int, int, int, object, int, int, int)
0x466: @ CreateIntVector(Stack[-4])
0x467: Pop(0)
0x468: PushEmpty(object, bool, int)
0x469: Stack[-7] = Stack[-3]
0x46a: Stack[-2] = (bool) 0
0x46b: Stack[-1] = (int) -1
0x46c: Call2 0x3e5

0x46d: Pop(3)
0x46e: @@ size(Stack[-3]); Obj=4 // @poff=468
0x46f: Pop(0)
0x470: Stack[-2] = (int) 0
0x471: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x472: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x473: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=473
0x474: Pop(0)
0x475: PushEmpty(bool)
0x476: Stack[-1] = (bool) 1
0x477: PushEmpty(bool, int)
0x478: Stack[-4] = Stack[-1]
0x479: Call2 0x40f

0x47a: Pop(1)
0x47b: IF (Stack[-1] == 1) GOTO 0x482; Pop(1)

0x47c: PushEmpty(bool, int)
0x47d: Stack[-4] = Stack[-1]
0x47e: Call2 0x405

0x47f: Pop(1)
0x480: IF (Stack[-1] == 1) GOTO 0x482; Pop(1)

0x481: Stack[-1] = (bool) 0
0x482: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x483: Stack[-9] = (bool) 0
0x484: Return(); Pop(8)

0x485: Push((int) 1)
0x486: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x487: GOTO 0x471

0x488: Stack[-9] = (bool) 1
0x489: Return(); Pop(8)

0x48a: Stack[-4] = 0
0x48b: Stack[-1] = (bool) 0
0x48c: PushEmpty(bool)
0x48d: Stack[-1] = (bool) 0
0x48e: PushEmpty(bool)
0x48f: Call2 0x465

0x490: Pop(0)
0x491: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x492: PushEmpty(bool)
0x493: Call2 0x43f

0x494: Pop(0)
0x495: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x496: Stack[-1] = (bool) 1
0x497: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x498: PushEmpty(bool)
0x499: Call2 0x419

0x49a: Pop(0)
0x49b: IF (Stack[-1] == 0) GOTO 0x49d; Pop(1)

0x49c: Stack[-1] = (bool) 1
0x49d: Return(); Pop(0)

