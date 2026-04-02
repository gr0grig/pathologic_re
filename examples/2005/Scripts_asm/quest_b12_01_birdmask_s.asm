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
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:ui/NPC_bmask.png
	W:ui/NPC_bmask_b.png
	W:oob12BirdmaskS1
	W:quest_b12_01
	W:init_sobor
	W:oob12BirdmaskS2
	W:oob12BirdmaskS3
	W:oob12BirdmaskS4
	W:sobor@door1
	W:branch
	A:add
	W:vol_
	A:size
	A:get
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c006500000070006c006100790065007200000068006500610064000000476574506f736974696f6e00476574457965734865696768740044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900750069002f004e00500043005f0062006d00610073006b002e0070006e0067000000750069002f004e00500043005f0062006d00610073006b005f0062002e0070006e00670000006f006f0062003100320042006900720064006d00610073006b00530031000000710075006500730074005f006200310032005f0030003100000069006e00690074005f0073006f0062006f00720000006f006f0062003100320042006900720064006d00610073006b005300320000006f006f0062003100320042006900720064006d00610073006b005300330000006f006f0062003100320042006900720064006d00610073006b0053003400000073006f0062006f007200400064006f006f007200310000006200720061006e006300680000006164640076006f006c005f00000073697a650067657400
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
	Trace (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x2a1
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xff Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2ad Vars = (object)
		EVENT_7 Op = 0x2e2 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x36a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x42c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x42a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x42e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x430

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4af

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
0x41: Call2 0x3ae

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
0x4f: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x45a

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral" // @poff=89
0x58: Call2 0xe9

0x59: Pop(1)
0x5a: Push((int) 522134)
0x5b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x5c: Pop(1)
0x5d: @@@ ClearReplies(); Obj=0 // @poff=116
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x486

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 522135)
0x65: Push((int) 23323)
0x66: Push((int) 23302)
0x67: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x68: Pop(3)
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x492

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6e: Push((int) 522157)
0x6f: Push((int) 23325)
0x70: Push((int) 23324)
0x71: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x72: Pop(3)
0x73: Push((int) 522166)
0x74: Push((int) -1)
0x75: Push((int) 23333)
0x76: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x77: Pop(3)
0x78: GOTO 0xcb

0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x464

0x7c: Pop(1)
0x7d: Pop(1); Push((bool) Stack[-1] == 0)
0x7e: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x7f: PushEmpty(string)
0x80: Stack[-1] = "Neutral" // @poff=89
0x81: Call2 0xe9

0x82: Pop(1)
0x83: Push((int) 522130)
0x84: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x85: Pop(1)
0x86: @@@ ClearReplies(); Obj=0 // @poff=116
0x87: Pop(0)
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x47a

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8d: Push((int) 522132)
0x8e: Push((int) 23308)
0x8f: Push((int) 23299)
0x90: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x91: Pop(3)
0x92: Push((int) 522140)
0x93: Push((int) -1)
0x94: Push((int) 23307)
0x95: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x96: Pop(3)
0x97: GOTO 0xcb

0x98: PushEmpty(bool)
0x99: Stack[-1] = (bool) 0
0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x46e

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0x45a

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Stack[-1] = (bool) 1
0xa5: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xa6: PushEmpty(object, object)
0xa7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9: Call2 0x434

0xaa: Pop(2)
0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral" // @poff=89
0xad: Call2 0xe9

0xae: Pop(1)
0xaf: Push((int) 522136)
0xb0: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xb1: Pop(1)
0xb2: @@@ ClearReplies(); Obj=0 // @poff=116
0xb3: Pop(0)
0xb4: Push((int) 522137)
0xb5: Push((int) -1)
0xb6: Push((int) 23304)
0xb7: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xb8: Pop(3)
0xb9: GOTO 0xcb

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral" // @poff=89
0xbc: Call2 0xe9

0xbd: Pop(1)
0xbe: Push((int) 522138)
0xbf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc0: Pop(1)
0xc1: @@@ ClearReplies(); Obj=0 // @poff=116
0xc2: Pop(0)
0xc3: Push((int) 522139)
0xc4: Push((int) -1)
0xc5: Push((int) 23306)
0xc6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xc7: Pop(3)
0xc8: GOTO 0xcb

0xc9: Return(); Pop(0)

0xca: GOTO 0x4e

0xcb: PushEmpty(bool)
0xcc: Call2 0x432

0xcd: Pop(0)
0xce: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xcf: @ lshWaitForAnimEnd()
0xd0: Pop(0)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: GOTO 0xd9

0xd4: PushEmpty(string)
0xd5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd6: Call2 0x3bf

0xd7: Pop(1)
0xd8: GOTO 0xcf

0xd9: GOTO 0xe8

0xda: Push("all") // @poff=138
0xdb: Push("idle") // @poff=146
0xdc: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd: Pop(2)
0xde: @ WaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: Push("all") // @poff=138
0xe4: Push("idle") // @poff=146
0xe5: @ PlayAnimation(Stack[-2], Stack[-1])
0xe6: Pop(2)
0xe7: GOTO 0xde

0xe8: Return(); Pop(0)

0xe9: PushEmpty()
0xea: PushEmpty(bool)
0xeb: Call2 0x432

0xec: Pop(0)
0xed: Pop(1); Push((bool) Stack[-1] == 0)
0xee: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xef: Return(); Pop(0)

0xf0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf1: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf2: Return(); Pop(0)

0xf3: PushEmpty(string, bool)
0xf4: Stack[-3] = Stack[-2]
0xf5: Push("") // @poff=102
0xf6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf8: Stack[-1] = (bool) 0
0xf9: GOTO 0xfb

0xfa: Stack[-1] = (bool) 1
0xfb: Call2 0x3c6

0xfc: Pop(2)
0xfd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xfe: Return(); Pop(0)

0xff: PushEmpty()
0x100: Push((int) 1)
0x101: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x102: PushEmpty()
0x103: Call2 0x3d7

0x104: Pop(0)
0x105: Push((int) 23302)
0x106: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x447

0x10c: Pop(2)
0x10d: Push((int) 23324)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x44d

0x114: Pop(2)
0x115: Push((int) 23299)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x441

0x11c: Pop(2)
0x11d: Push((int) 23304)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x453

0x124: Pop(2)
0x125: PushEmpty(object, object)
0x126: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x127: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x128: Call2 0x43a

0x129: Pop(2)
0x12a: Push((int) 23301)
0x12b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x45a

0x130: Pop(1)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral" // @poff=89
0x135: Call2 0xe9

0x136: Pop(1)
0x137: Push((int) 522134)
0x138: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x139: Pop(1)
0x13a: @@@ ClearReplies(); Obj=0 // @poff=116
0x13b: Pop(0)
0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x486

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: Push((int) 522135)
0x142: Push((int) 23323)
0x143: Push((int) 23302)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x492

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14b: Push((int) 522157)
0x14c: Push((int) 23325)
0x14d: Push((int) 23324)
0x14e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x14f: Pop(3)
0x150: Push((int) 522166)
0x151: Push((int) -1)
0x152: Push((int) 23333)
0x153: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x154: Pop(3)
0x155: Return(); Pop(0)

0x156: PushEmpty(bool, object)
0x157: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x158: Call2 0x464

0x159: Pop(1)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral" // @poff=89
0x15e: Call2 0xe9

0x15f: Pop(1)
0x160: Push((int) 522130)
0x161: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x162: Pop(1)
0x163: @@@ ClearReplies(); Obj=0 // @poff=116
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x47a

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16a: Push((int) 522132)
0x16b: Push((int) 23308)
0x16c: Push((int) 23299)
0x16d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x16e: Pop(3)
0x16f: Push((int) 522140)
0x170: Push((int) -1)
0x171: Push((int) 23307)
0x172: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: PushEmpty(bool)
0x176: Stack[-1] = (bool) 0
0x177: PushEmpty(bool, object)
0x178: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x179: Call2 0x46e

0x17a: Pop(1)
0x17b: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x17c: PushEmpty(bool, object)
0x17d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17e: Call2 0x45a

0x17f: Pop(1)
0x180: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x181: Stack[-1] = (bool) 1
0x182: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x183: PushEmpty(object, object)
0x184: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x185: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x186: Call2 0x434

0x187: Pop(2)
0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral" // @poff=89
0x18a: Call2 0xe9

0x18b: Pop(1)
0x18c: Push((int) 522136)
0x18d: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18e: Pop(1)
0x18f: @@@ ClearReplies(); Obj=0 // @poff=116
0x190: Pop(0)
0x191: Push((int) 522137)
0x192: Push((int) -1)
0x193: Push((int) 23304)
0x194: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral" // @poff=89
0x199: Call2 0xe9

0x19a: Pop(1)
0x19b: Push((int) 522138)
0x19c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x19d: Pop(1)
0x19e: @@@ ClearReplies(); Obj=0 // @poff=116
0x19f: Pop(0)
0x1a0: Push((int) 522139)
0x1a1: Push((int) -1)
0x1a2: Push((int) 23306)
0x1a3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 23308)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral" // @poff=89
0x1ab: Call2 0xe9

0x1ac: Pop(1)
0x1ad: Push((int) 522141)
0x1ae: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1af: Pop(1)
0x1b0: @@@ ClearReplies(); Obj=0 // @poff=116
0x1b1: Pop(0)
0x1b2: Push((int) 522142)
0x1b3: Push((int) 23311)
0x1b4: Push((int) 23309)
0x1b5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1b6: Pop(3)
0x1b7: Push((int) 522143)
0x1b8: Push((int) -1)
0x1b9: Push((int) 23310)
0x1ba: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 23311)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral" // @poff=89
0x1c2: Call2 0xe9

0x1c3: Pop(1)
0x1c4: Push((int) 522144)
0x1c5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1c6: Pop(1)
0x1c7: @@@ ClearReplies(); Obj=0 // @poff=116
0x1c8: Pop(0)
0x1c9: Push((int) 522145)
0x1ca: Push((int) 23314)
0x1cb: Push((int) 23312)
0x1cc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1cd: Pop(3)
0x1ce: Push((int) 522146)
0x1cf: Push((int) -1)
0x1d0: Push((int) 23313)
0x1d1: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 23314)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral" // @poff=89
0x1d9: Call2 0xe9

0x1da: Pop(1)
0x1db: Push((int) 522147)
0x1dc: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1dd: Pop(1)
0x1de: @@@ ClearReplies(); Obj=0 // @poff=116
0x1df: Pop(0)
0x1e0: Push((int) 522148)
0x1e1: Push((int) 23317)
0x1e2: Push((int) 23315)
0x1e3: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e4: Pop(3)
0x1e5: Push((int) 522149)
0x1e6: Push((int) -1)
0x1e7: Push((int) 23316)
0x1e8: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 23317)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Neutral" // @poff=89
0x1f0: Call2 0xe9

0x1f1: Pop(1)
0x1f2: Push((int) 522150)
0x1f3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x1f4: Pop(1)
0x1f5: @@@ ClearReplies(); Obj=0 // @poff=116
0x1f6: Pop(0)
0x1f7: Push((int) 522151)
0x1f8: Push((int) 23320)
0x1f9: Push((int) 23318)
0x1fa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x1fb: Pop(3)
0x1fc: Push((int) 522152)
0x1fd: Push((int) -1)
0x1fe: Push((int) 23319)
0x1ff: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 23320)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Neutral" // @poff=89
0x207: Call2 0xe9

0x208: Pop(1)
0x209: Push((int) 522153)
0x20a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x20b: Pop(1)
0x20c: @@@ ClearReplies(); Obj=0 // @poff=116
0x20d: Pop(0)
0x20e: Push((int) 522154)
0x20f: Push((int) -1)
0x210: Push((int) 23321)
0x211: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x212: Pop(3)
0x213: Push((int) 522155)
0x214: Push((int) -1)
0x215: Push((int) 23322)
0x216: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 23325)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Neutral" // @poff=89
0x21e: Call2 0xe9

0x21f: Pop(1)
0x220: Push((int) 522158)
0x221: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x222: Pop(1)
0x223: @@@ ClearReplies(); Obj=0 // @poff=116
0x224: Pop(0)
0x225: Push((int) 522159)
0x226: Push((int) 23327)
0x227: Push((int) 23326)
0x228: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x229: Pop(3)
0x22a: Push((int) 522161)
0x22b: Push((int) 23997)
0x22c: Push((int) 23328)
0x22d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Push((int) 23997)
0x231: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x233: PushEmpty(string)
0x234: Stack[-1] = "Neutral" // @poff=89
0x235: Call2 0xe9

0x236: Pop(1)
0x237: Push((int) 522814)
0x238: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x239: Pop(1)
0x23a: @@@ ClearReplies(); Obj=0 // @poff=116
0x23b: Pop(0)
0x23c: Push((int) 522815)
0x23d: Push((int) -1)
0x23e: Push((int) 23998)
0x23f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x240: Pop(3)
0x241: Return(); Pop(0)

0x242: Push((int) 23327)
0x243: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x245: PushEmpty(string)
0x246: Stack[-1] = "Neutral" // @poff=89
0x247: Call2 0xe9

0x248: Pop(1)
0x249: Push((int) 522160)
0x24a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x24b: Pop(1)
0x24c: @@@ ClearReplies(); Obj=0 // @poff=116
0x24d: Pop(0)
0x24e: Push((int) 522162)
0x24f: Push((int) 23330)
0x250: Push((int) 23329)
0x251: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 23330)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral" // @poff=89
0x259: Call2 0xe9

0x25a: Pop(1)
0x25b: Push((int) 522163)
0x25c: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x25d: Pop(1)
0x25e: @@@ ClearReplies(); Obj=0 // @poff=116
0x25f: Pop(0)
0x260: Push((int) 522164)
0x261: Push((int) -1)
0x262: Push((int) 23331)
0x263: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x264: Pop(3)
0x265: Push((int) 522165)
0x266: Push((int) -1)
0x267: Push((int) 23332)
0x268: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 23323)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Neutral" // @poff=89
0x270: Call2 0xe9

0x271: Pop(1)
0x272: Push((int) 522156)
0x273: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x274: Pop(1)
0x275: @@@ ClearReplies(); Obj=0 // @poff=116
0x276: Pop(0)
0x277: Push((int) 522808)
0x278: Push((int) 23992)
0x279: Push((int) 23991)
0x27a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x27b: Pop(3)
0x27c: Push((int) 522807)
0x27d: Push((int) -1)
0x27e: Push((int) 23990)
0x27f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x280: Pop(3)
0x281: Return(); Pop(0)

0x282: Push((int) 23992)
0x283: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x284: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x285: PushEmpty(string)
0x286: Stack[-1] = "Neutral" // @poff=89
0x287: Call2 0xe9

0x288: Pop(1)
0x289: Push((int) 522809)
0x28a: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x28b: Pop(1)
0x28c: @@@ ClearReplies(); Obj=0 // @poff=116
0x28d: Pop(0)
0x28e: Push((int) 522810)
0x28f: Push((int) -1)
0x290: Push((int) 23993)
0x291: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x295: PushEmpty(bool)
0x296: Call2 0x432

0x297: Pop(0)
0x298: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x299: @ lshStopAnimation()
0x29a: Pop(0)
0x29b: GOTO 0x29e

0x29c: @ StopAnimation()
0x29d: Pop(0)
0x29e: Return(); Pop(0)

0x29f: GOTO 0x100

0x2a0: Return(); Pop(0)

0x2a1: Push((bool) 1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a3: PushEmpty(float, float)
0x2a4: Stack[-2] = (int) 300
0x2a5: Stack[-1] = (int) 100
0x2a6: Call2 0x2b8

0x2a7: Pop(2)
0x2a8: Push((int) 1)
0x2a9: @ Sleep(Stack[-1])
0x2aa: Pop(1)
0x2ab: GOTO 0x2a1

0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: PushEmpty()
0x2af: Call2 0x2f9

0x2b0: Pop(0)
0x2b1: PushEmpty(int, object)
0x2b2: Stack[-3] = Stack[-1]
0x2b3: Push(-2, 1); TaskCall(0)
0x2b4: Call2 0x0

0x2b5: Pop(-2, 1); TaskReturn
0x2b6: Pop(2)
0x2b7: Return(); Pop(0)

0x2b8: PushEmpty()
0x2b9: PushEmpty(bool)
0x2ba: Call2 0x365

0x2bb: Pop(0)
0x2bc: Pop(1); Push((bool) Stack[-1] == 0)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2be: Return(); Pop(0)

0x2bf: Push("player") // @poff=156
0x2c0: @ FindActor(Stack[-4]T, Stack[-1])
0x2c1: Pop(1)
0x2c2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2c3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x2c5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x2c6: Push((int) 10)
0x2c7: Push((float)1.0)
0x2c8: @ SetTimer(Stack[-2], Stack[-1])
0x2c9: Pop(2)
0x2ca: PushEmpty()
0x2cb: Call2 0x307

0x2cc: Pop(0)
0x2cd: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2cf: Push((int) 10)
0x2d0: @ KillTimer(Stack[-1])
0x2d1: Pop(1)
0x2d2: Return(); Pop(0)

0x2d3: PushEmpty(float, float)
0x2d4: Pop(0); PushNull((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-3] = (bool) 0
0x2d7: Return(); Pop(2)

0x2d8: PushEmpty(float, object)
0x2d9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2da: Call2 0x35d

0x2db: Pop(1)
0x2dc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2dd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x2e0: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x2e1: Return(); Pop(2)

0x2e2: PushEmpty()
0x2e3: Push((int) 10)
0x2e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2e6: PushEmpty(bool)
0x2e7: Call2 0x2d3

0x2e8: Pop(0)
0x2e9: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ea: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: PushEmpty(object)
0x2ed: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x2ee: Call2 0x3cc

0x2ef: Pop(1)
0x2f0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2f1: GOTO 0x2f8

0x2f2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f4: Push("head") // @poff=170
0x2f5: @ UnlookAsync(Stack[-1])
0x2f6: Pop(1)
0x2f7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2f8: Return(); Pop(0)

0x2f9: PushEmpty()
0x2fa: Call2 0x358

0x2fb: Pop(0)
0x2fc: Push((int) 10)
0x2fd: @ KillTimer(Stack[-1])
0x2fe: Pop(1)
0x2ff: Push( Stack[2 + Tasks[-1].StackPointer] )
0x300: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x301: Push("head") // @poff=170
0x302: @ UnlookAsync(Stack[-1])
0x303: Pop(1)
0x304: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x305: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x306: Return(); Pop(0)

0x307: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x308: @ WaitForAnimEnd()
0x309: Pop(0)
0x30a: PushEmpty(bool)
0x30b: Call2 0x365

0x30c: Pop(0)
0x30d: Pop(1); Push((bool) Stack[-1] == 0)
0x30e: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30f: Return(); Pop(14)

0x310: PushEmpty(int)
0x311: Call2 0x419

0x312: Stack[-1] = Stack[-8]
0x313: Pop(1)
0x314: Stack[-6] = (int) 0
0x315: PushEmpty(bool)
0x316: Stack[-1] = (bool) 0
0x317: Push((int) 5)
0x318: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31a: PushEmpty(bool)
0x31b: Call2 0x365

0x31c: Pop(0)
0x31d: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x31e: Stack[-1] = (bool) 1
0x31f: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x320: Push((int) 3)
0x321: @ irand(Stack[-6], Stack[-1])
0x322: Pop(1)
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x326: Push(Stack[-7])
0x327: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x328: @ irand(Stack[-4], Stack[-7])
0x329: Pop(0)
0x32a: Push("all") // @poff=138
0x32b: PushEmpty(string, int)
0x32c: Stack[-7] = Stack[-1]
0x32d: Call2 0x412

0x32e: Pop(1)
0x32f: @ PlayAnimation(Stack[-2], Stack[-1])
0x330: Pop(2)
0x331: @ WaitForAnimEnd(Stack[-3])
0x332: Pop(0)
0x333: Pop(0); Push((bool) Stack[-3] == 0)
0x334: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x335: GOTO 0x353

0x336: GOTO 0x348

0x337: Push((int) 1)
0x338: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33a: Push((int) 4)
0x33b: @ rand(Stack[-3], Stack[-1])
0x33c: Pop(1)
0x33d: Push((int) 1)
0x33e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x33f: @ Sleep(Stack[-1], Stack[-2])
0x340: Pop(1)
0x341: Pop(0); Push((bool) Stack[-1] == 0)
0x342: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x343: GOTO 0x353

0x344: GOTO 0x348

0x345: Push(Stack[-6])
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x353

0x348: PushEmpty(bool)
0x349: Call2 0x356

0x34a: Pop(0)
0x34b: Pop(1); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)

0x34d: GOTO 0x353

0x34e: @ ResetAAS()
0x34f: Pop(0)
0x350: Push((int) 1)
0x351: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x352: GOTO 0x315

0x353: @ ResetAAS()
0x354: Pop(0)
0x355: Return(); Pop(14)

0x356: Stack[-1] = (bool) 1
0x357: Return(); Pop(0)

0x358: @ StopAnimation()
0x359: Pop(0)
0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: Return(); Pop(0)

0x35d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x35e: @ GetPosition(Stack[-3])
0x35f: Pop(0)
0x360: @@ GetPosition(Stack[-2]); Obj=7 // @poff=180
0x361: Pop(0)
0x362: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x363: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x364: Return(); Pop(6)

0x365: PushEmpty(bool, bool)
0x366: @ IsLoaded(Stack[-1])
0x367: Pop(0)
0x368: Stack[-1] = Stack[-3]
0x369: Return(); Pop(2)

0x36a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x36b: @@ GetPosition(Stack[-8]); Obj=20 // @poff=180
0x36c: Pop(0)
0x36d: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=192
0x36e: Pop(0)
0x36f: Push(CvectorIndex(Stack[-8], 1))
0x370: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x371: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x372: @ GetPosition(Stack[-7])
0x373: Pop(0)
0x374: @ GetEyesHeight(Stack[-9])
0x375: Pop(0)
0x376: Push(CvectorIndex(Stack[-7], 1))
0x377: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x378: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x379: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x37a: Push(CvectorIndex(Stack[-6], 1))
0x37b: Stack[-1] = (int) 0
0x37c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x37d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x37e: Pop(1); Push(Sqrt(Stack[-1]))
0x37f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x380: Stack[-5] = -Stack[-6]; Pop(0);
0x381: Pop(0); Push(Stack[-6] * Stack[-19]);
0x382: PushEmpty(cvector, cvector)
0x383: Push([0.0, 1.0, 0.0])
0x384: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x385: Call2 0x3de

0x386: Pop(1)
0x387: Push((int) 25)
0x388: Pop(2); Push(Stack[-2] * Stack[-1]);
0x389: Pop(2); Push(Stack[-2] + Stack[-1]);
0x38a: Push([0.0, 10.0, 0.0])
0x38b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x38c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x38d: @ IsOverrideActive(Stack[-2])
0x38e: Pop(0)
0x38f: Push(Stack[-2])
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-21] = (bool) 0
0x392: Return(); Pop(18)

0x393: @ StopWorld()
0x394: Pop(0)
0x395: @ CameraTransit(Stack[-3], Stack[-5])
0x396: Pop(0)
0x397: Push(CvectorIndex(Stack[-4], 0))
0x398: Push(CvectorIndex(Stack[-5], 2))
0x399: @ Rotate(Stack[-2], Stack[-1])
0x39a: Pop(2)
0x39b: PushEmpty(bool)
0x39c: Call2 0x432

0x39d: Pop(0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: GOTO 0x3a8

0x3a0: Push("head") // @poff=170
0x3a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a2: Pop(1)
0x3a3: Push(Stack[-1])
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a5: Push("head") // @poff=170
0x3a6: @ LookAsyncCamera(Stack[-1])
0x3a7: Pop(1)
0x3a8: @ CameraWaitForPlayFinish()
0x3a9: Pop(0)
0x3aa: @ ResumeWorld()
0x3ab: Pop(0)
0x3ac: Stack[-21] = (bool) 1
0x3ad: Return(); Pop(18)

0x3ae: PushEmpty(bool, bool)
0x3af: @ CameraSwitchToNormal()
0x3b0: Pop(0)
0x3b1: PushEmpty(bool)
0x3b2: Call2 0x432

0x3b3: Pop(0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: GOTO 0x3be

0x3b6: Push("head") // @poff=170
0x3b7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3b8: Pop(1)
0x3b9: Push(Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bb: Push("head") // @poff=170
0x3bc: @ UnlookAsync(Stack[-1])
0x3bd: Pop(1)
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(float, float, float, float)
0x3c0: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3c1: Pop(0)
0x3c2: Push((bool) 0)
0x3c3: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3c4: Pop(1)
0x3c5: Return(); Pop(4)

0x3c6: PushEmpty(float, float, float, float)
0x3c7: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x3c8: Pop(0)
0x3c9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x3ca: Pop(0)
0x3cb: Return(); Pop(4)

0x3cc: PushEmpty(float, cvector, float, cvector)
0x3cd: @@ GetEyesHeight(Stack[-2]); Obj=5 // @poff=192
0x3ce: Pop(0)
0x3cf: Stack[-1] = [0.0, 0.0, 0.0]
0x3d0: Push(CvectorIndex(Stack[-1], 1))
0x3d1: Stack[-3] = Stack[-1]
0x3d2: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x3d3: Push("head") // @poff=170
0x3d4: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x3d5: Pop(1)
0x3d6: Return(); Pop(4)

0x3d7: PushEmpty(bool)
0x3d8: Call2 0x432

0x3d9: Pop(0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: @ lshStopSpeech()
0x3dc: Pop(0)
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(float, float)
0x3df: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3e0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3e1: Push((float)9.999999974752427e-07)
0x3e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-4] = [0.0, 0.0, 0.0]
0x3e5: Return(); Pop(2)

0x3e6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3e7: Return(); Pop(2)

0x3e8: PushEmpty(int, int)
0x3e9: @ GetVariable(Stack[-3], Stack[-1])
0x3ea: Pop(0)
0x3eb: Stack[-1] = Stack[-4]
0x3ec: Return(); Pop(2)

0x3ed: PushEmpty(object, object)
0x3ee: @ FindActor(Stack[-1], Stack[-4])
0x3ef: Pop(0)
0x3f0: Pop(0); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f2: Push("Door ") // @poff=206
0x3f3: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3f4: Push(" not found") // @poff=218
0x3f5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3f6: @ Trace(Stack[-1])
0x3f7: Pop(1)
0x3f8: GOTO 0x3fc

0x3f9: Push("locked") // @poff=240
0x3fa: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=254
0x3fb: Pop(1)
0x3fc: Return(); Pop(2)

0x3fd: Stack[-1] = 0
0x3fe: PushEmpty(object, object)
0x3ff: @ FindActor(Stack[-1], Stack[-4])
0x400: Pop(0)
0x401: Pop(0); PushNull((bool) Stack[-1] == 0)
0x402: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x403: Stack[-5] = (bool) 0
0x404: Return(); Pop(2)

0x405: @ Trigger(Stack[-1], Stack[-3])
0x406: Pop(0)
0x407: Stack[-5] = (bool) 1
0x408: Return(); Pop(2)

0x409: Stack[-1] = 0
0x40a: PushEmpty(float, float)
0x40b: @ GetGameTime(Stack[-1])
0x40c: Pop(0)
0x40d: PushEmpty(int)
0x40e: Stack[-2] = Stack[-1]
0x40f: Push((int) 24)
0x410: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x411: Return(); Pop(2)

0x412: PushEmpty(string, string)
0x413: Stack[-1] = "idle" // @poff=146
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x416: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x417: Stack[-1] = Stack[-4]
0x418: Return(); Pop(2)

0x419: PushEmpty(int, bool, int, bool)
0x41a: Stack[-2] = (int) 0
0x41b: Push("all") // @poff=138
0x41c: PushEmpty(string, int)
0x41d: Stack[-5] = Stack[-1]
0x41e: Call2 0x412

0x41f: Pop(1)
0x420: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(2)
0x422: Pop(0); Push((bool) Stack[-1] == 0)
0x423: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x424: GOTO 0x428

0x425: Push((int) 1)
0x426: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x427: GOTO 0x41b

0x428: Stack[-2] = Stack[-5]
0x429: Return(); Pop(4)

0x42a: Stack[-1] = (int) 515571
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = (int) 504029
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = "ui/NPC_bmask.png" // @poff=266
0x42f: Return(); Pop(0)

0x430: Stack[-1] = "ui/NPC_bmask_b.png" // @poff=300
0x431: Return(); Pop(0)

0x432: Stack[-1] = (bool) 0
0x433: Return(); Pop(0)

0x434: PushEmpty()
0x435: Push("oob12BirdmaskS1") // @poff=338
0x436: Push((int) 1)
0x437: @ SetVariable(Stack[-2], Stack[-1])
0x438: Pop(2)
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: PushEmpty(bool, string, string)
0x43c: Stack[-2] = "quest_b12_01" // @poff=370
0x43d: Stack[-1] = "init_sobor" // @poff=396
0x43e: Call2 0x3fe

0x43f: Pop(3)
0x440: Return(); Pop(0)

0x441: PushEmpty()
0x442: Push("oob12BirdmaskS2") // @poff=418
0x443: Push((int) 1)
0x444: @ SetVariable(Stack[-2], Stack[-1])
0x445: Pop(2)
0x446: Return(); Pop(0)

0x447: PushEmpty()
0x448: Push("oob12BirdmaskS3") // @poff=450
0x449: Push((int) 1)
0x44a: @ SetVariable(Stack[-2], Stack[-1])
0x44b: Pop(2)
0x44c: Return(); Pop(0)

0x44d: PushEmpty()
0x44e: Push("oob12BirdmaskS4") // @poff=482
0x44f: Push((int) 1)
0x450: @ SetVariable(Stack[-2], Stack[-1])
0x451: Pop(2)
0x452: Return(); Pop(0)

0x453: PushEmpty()
0x454: PushEmpty(string, bool)
0x455: Stack[-2] = "sobor@door1" // @poff=514
0x456: Stack[-1] = (bool) 0
0x457: Call2 0x3ed

0x458: Pop(2)
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: PushEmpty(bool, object)
0x45c: Stack[-3] = Stack[-1]
0x45d: Call2 0x49e

0x45e: Pop(1)
0x45f: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x460: Stack[-2] = (bool) 1
0x461: Return(); Pop(0)

0x462: Stack[-2] = (bool) 0
0x463: Return(); Pop(0)

0x464: PushEmpty()
0x465: PushEmpty(bool, object)
0x466: Stack[-3] = Stack[-1]
0x467: Call2 0x4a4

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-2] = (bool) 1
0x46b: Return(); Pop(0)

0x46c: Stack[-2] = (bool) 0
0x46d: Return(); Pop(0)

0x46e: PushEmpty()
0x46f: PushEmpty(int, string)
0x470: Stack[-1] = "oob12BirdmaskS1" // @poff=338
0x471: Call2 0x3e8

0x472: Pop(1)
0x473: Push((int) 0)
0x474: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x478; Pop(1)

0x476: Stack[-2] = (bool) 1
0x477: Return(); Pop(0)

0x478: Stack[-2] = (bool) 0
0x479: Return(); Pop(0)

0x47a: PushEmpty()
0x47b: PushEmpty(int, string)
0x47c: Stack[-1] = "oob12BirdmaskS2" // @poff=418
0x47d: Call2 0x3e8

0x47e: Pop(1)
0x47f: Push((int) 0)
0x480: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: Stack[-2] = (bool) 1
0x483: Return(); Pop(0)

0x484: Stack[-2] = (bool) 0
0x485: Return(); Pop(0)

0x486: PushEmpty()
0x487: PushEmpty(int, string)
0x488: Stack[-1] = "oob12BirdmaskS3" // @poff=450
0x489: Call2 0x3e8

0x48a: Pop(1)
0x48b: Push((int) 0)
0x48c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: Stack[-2] = (bool) 1
0x48f: Return(); Pop(0)

0x490: Stack[-2] = (bool) 0
0x491: Return(); Pop(0)

0x492: PushEmpty()
0x493: PushEmpty(int, string)
0x494: Stack[-1] = "oob12BirdmaskS4" // @poff=482
0x495: Call2 0x3e8

0x496: Pop(1)
0x497: Push((int) 0)
0x498: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x499: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x49a: Stack[-2] = (bool) 1
0x49b: Return(); Pop(0)

0x49c: Stack[-2] = (bool) 0
0x49d: Return(); Pop(0)

0x49e: PushEmpty()
0x49f: PushEmpty(bool)
0x4a0: Call2 0x4f5

0x4a1: Stack[-1] = Stack[-3]
0x4a2: Pop(1)
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty()
0x4a5: PushEmpty(int)
0x4a6: Call2 0x40a

0x4a7: Pop(0)
0x4a8: Push((int) 19)
0x4a9: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4aa: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ab: Stack[-2] = (bool) 1
0x4ac: Return(); Pop(0)

0x4ad: Stack[-2] = (bool) 0
0x4ae: Return(); Pop(0)

0x4af: PushEmpty(int, int)
0x4b0: Push("branch") // @poff=538
0x4b1: @ GetVariable(Stack[-1], Stack[-2])
0x4b2: Pop(1)
0x4b3: Push((int) 0)
0x4b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b6: Stack[-3] = (int) 1
0x4b7: Return(); Pop(2)

0x4b8: GOTO 0x4be

0x4b9: Push((int) 1)
0x4ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4bb: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bc: Stack[-3] = (int) 2
0x4bd: Return(); Pop(2)

0x4be: Stack[-3] = (int) 3
0x4bf: Return(); Pop(2)

0x4c0: PushEmpty()
0x4c1: Push((int) 18)
0x4c2: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4c3: Pop(1)
0x4c4: Push((int) 24)
0x4c5: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4c6: Pop(1)
0x4c7: Push((int) 20)
0x4c8: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4c9: Pop(1)
0x4ca: Push((int) 14)
0x4cb: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4cc: Pop(1)
0x4cd: Push((bool) 0)
0x4ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4cf: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d0: Push((int) 10)
0x4d1: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4d2: Pop(1)
0x4d3: Push((int) 17)
0x4d4: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4d5: Pop(1)
0x4d6: Push((int) 8)
0x4d7: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4d8: Pop(1)
0x4d9: GOTO 0x4e0

0x4da: Push((int) 1)
0x4db: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4dd: Push((int) 10)
0x4de: @@ add(Stack[-1]); Obj=4 // @poff=552
0x4df: Pop(1)
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty(int, int)
0x4e2: Push("vol_") // @poff=556
0x4e3: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4e4: @ GetVariable(Stack[-1], Stack[-2])
0x4e5: Pop(1)
0x4e6: Push((int) 4)
0x4e7: Pop(1); Push(Stack[-2] & Stack[-1]);
0x4e8: Push((int) 0)
0x4e9: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x4ea: Return(); Pop(2)

0x4eb: PushEmpty(int, int)
0x4ec: Push("vol_") // @poff=556
0x4ed: Pop(1); Push(Stack[-1] + Stack[-4]);
0x4ee: @ GetVariable(Stack[-1], Stack[-2])
0x4ef: Pop(1)
0x4f0: Push((int) 16)
0x4f1: Pop(1); Push(Stack[-2] & Stack[-1]);
0x4f2: Push((int) 0)
0x4f3: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x4f4: Return(); Pop(2)

0x4f5: PushEmpty(object, int, int, int, object, int, int, int)
0x4f6: @ CreateIntVector(Stack[-4])
0x4f7: Pop(0)
0x4f8: PushEmpty(object, bool, int)
0x4f9: Stack[-7] = Stack[-3]
0x4fa: Stack[-2] = (bool) 0
0x4fb: Stack[-1] = (int) -1
0x4fc: Call2 0x4c0

0x4fd: Pop(3)
0x4fe: @@ size(Stack[-3]); Obj=4 // @poff=566
0x4ff: Pop(0)
0x500: Stack[-2] = (int) 0
0x501: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x502: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x503: @@ get(Stack[-1], Stack[-2]); Obj=4 // @poff=571
0x504: Pop(0)
0x505: PushEmpty(bool)
0x506: Stack[-1] = (bool) 1
0x507: PushEmpty(bool, int)
0x508: Stack[-4] = Stack[-1]
0x509: Call2 0x4eb

0x50a: Pop(1)
0x50b: IF (Stack[-1] == 1) GOTO 0x512; Pop(1)

0x50c: PushEmpty(bool, int)
0x50d: Stack[-4] = Stack[-1]
0x50e: Call2 0x4e1

0x50f: Pop(1)
0x510: IF (Stack[-1] == 1) GOTO 0x512; Pop(1)

0x511: Stack[-1] = (bool) 0
0x512: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x513: Stack[-9] = (bool) 0
0x514: Return(); Pop(8)

0x515: Push((int) 1)
0x516: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x517: GOTO 0x501

0x518: Stack[-9] = (bool) 1
0x519: Return(); Pop(8)

0x51a: Stack[-4] = 0
