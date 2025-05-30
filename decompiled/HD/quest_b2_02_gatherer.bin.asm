GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png
	oob2Gatherer1
	b2q02
	quest_b2_02
	completed
	oob2Gatherer2
	playsound
	giveitem
	recipe9 is given
	recipe9
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x22c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd5 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x235 Vars = (object)
		EVENT_7 Op = 0x26a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 110.0
0x5: Call2 0x2f2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3db

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d9

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3dd

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3df

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4a2

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
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
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x337

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x416

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3e3

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xbf

0x5d: Pop(1)
0x5e: Push((int) 527753)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 527848)
0x64: Push((int) 29192)
0x65: Push((int) 29191)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0xa1

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0xbf

0x6c: Pop(1)
0x6d: Push((int) 527756)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: PushEmpty(bool, object)
0x73: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74: Call2 0x422

0x75: Pop(1)
0x76: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x77: Push((int) 527757)
0x78: Push((int) 29115)
0x79: Push((int) 29114)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x42e

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 527766)
0x82: Push((int) 29124)
0x83: Push((int) 29123)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: PushEmpty(bool)
0x87: Stack[-1] = (bool) 0
0x88: PushEmpty(bool, object)
0x89: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a: Call2 0x43a

0x8b: Pop(1)
0x8c: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x446

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Stack[-1] = (bool) 1
0x93: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x94: Push((int) 527769)
0x95: Push((int) 29127)
0x96: Push((int) 29126)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: Push((int) 527760)
0x9a: Push((int) -1)
0x9b: Push((int) 29117)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: GOTO 0xa1

0x9f: Return(); Pop(0)

0xa0: GOTO 0x4e

0xa1: PushEmpty(bool)
0xa2: Call2 0x3e1

0xa3: Pop(0)
0xa4: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa5: @ lshWaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: PushEmpty(string)
0xab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xac: Call2 0x349

0xad: Pop(1)
0xae: GOTO 0xa5

0xaf: GOTO 0xbe

0xb0: Push("all")
0xb1: Push("idle")
0xb2: @ PlayAnimation(Stack[-2], Stack[-1])
0xb3: Pop(2)
0xb4: @ WaitForAnimEnd()
0xb5: Pop(0)
0xb6: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: GOTO 0xbe

0xb9: Push("all")
0xba: Push("idle")
0xbb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc: Pop(2)
0xbd: GOTO 0xb4

0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: PushEmpty(bool)
0xc1: Call2 0x3e1

0xc2: Pop(0)
0xc3: Pop(1); Push((bool) Stack[-1] == 0)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Return(); Pop(0)

0xc6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc7: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc8: Return(); Pop(0)

0xc9: PushEmpty(string, bool)
0xca: Stack[-2] = Stack[-3]
0xcb: Push("")
0xcc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcd: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xce: Stack[-1] = (bool) 0
0xcf: GOTO 0xd1

0xd0: Stack[-1] = (bool) 1
0xd1: Call2 0x359

0xd2: Pop(2)
0xd3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd4: Return(); Pop(0)

0xd5: PushEmpty()
0xd6: Push((int) 1)
0xd7: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0xd8: PushEmpty()
0xd9: Call2 0x373

0xda: Pop(0)
0xdb: Push((int) 29111)
0xdc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xde: PushEmpty(object, object)
0xdf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe1: Call2 0x3e9

0xe2: Pop(2)
0xe3: Push((int) 29116)
0xe4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe5: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x3e9

0xea: Pop(2)
0xeb: Push((int) 29125)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x3f5

0xf2: Pop(2)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x40b

0xf7: Pop(2)
0xf8: PushEmpty(object, object)
0xf9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfb: Call2 0x405

0xfc: Pop(2)
0xfd: Push((int) 29126)
0xfe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: PushEmpty(object, object)
0x101: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x102: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x103: Call2 0x3ff

0x104: Pop(2)
0x105: Push((int) 29110)
0x106: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x107: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x108: PushEmpty(bool, object)
0x109: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Call2 0x416

0x10b: Pop(1)
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x3e3

0x111: Pop(2)
0x112: PushEmpty(string)
0x113: Stack[-1] = "Neutral"
0x114: Call2 0xbf

0x115: Pop(1)
0x116: Push((int) 527753)
0x117: @@ SetMessage(Stack[-1])
0x118: Pop(1)
0x119: @@ ClearReplies()
0x11a: Pop(0)
0x11b: Push((int) 527848)
0x11c: Push((int) 29192)
0x11d: Push((int) 29191)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0xbf

0x124: Pop(1)
0x125: Push((int) 527756)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x422

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12f: Push((int) 527757)
0x130: Push((int) 29115)
0x131: Push((int) 29114)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0x42e

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: Push((int) 527766)
0x13a: Push((int) 29124)
0x13b: Push((int) 29123)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x43a

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0x446

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x14c: Push((int) 527769)
0x14d: Push((int) 29127)
0x14e: Push((int) 29126)
0x14f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x150: Pop(3)
0x151: Push((int) 527760)
0x152: Push((int) -1)
0x153: Push((int) 29117)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 29127)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0xbf

0x15d: Pop(1)
0x15e: Push((int) 527770)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 527771)
0x164: Push((int) 29188)
0x165: Push((int) 29128)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 527844)
0x169: Push((int) -1)
0x16a: Push((int) 29187)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 29188)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Neutral"
0x173: Call2 0xbf

0x174: Pop(1)
0x175: Push((int) 527845)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 527846)
0x17b: Push((int) -1)
0x17c: Push((int) 29189)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 527847)
0x180: Push((int) -1)
0x181: Push((int) 29190)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 29124)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xbf

0x18b: Pop(1)
0x18c: Push((int) 527767)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 527842)
0x192: Push((int) 29186)
0x193: Push((int) 29185)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 29186)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0xbf

0x19d: Pop(1)
0x19e: Push((int) 527843)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 527768)
0x1a4: Push((int) -1)
0x1a5: Push((int) 29125)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 29115)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0xbf

0x1af: Pop(1)
0x1b0: Push((int) 527758)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 527840)
0x1b6: Push((int) 29184)
0x1b7: Push((int) 29183)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Return(); Pop(0)

0x1bb: Push((int) 29184)
0x1bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bd: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1be: PushEmpty(string)
0x1bf: Stack[-1] = "Neutral"
0x1c0: Call2 0xbf

0x1c1: Pop(1)
0x1c2: Push((int) 527841)
0x1c3: @@ SetMessage(Stack[-1])
0x1c4: Pop(1)
0x1c5: @@ ClearReplies()
0x1c6: Pop(0)
0x1c7: Push((int) 527759)
0x1c8: Push((int) -1)
0x1c9: Push((int) 29116)
0x1ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cb: Pop(3)
0x1cc: Return(); Pop(0)

0x1cd: Push((int) 29192)
0x1ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cf: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d0: PushEmpty(string)
0x1d1: Stack[-1] = "Neutral"
0x1d2: Call2 0xbf

0x1d3: Pop(1)
0x1d4: Push((int) 527849)
0x1d5: @@ SetMessage(Stack[-1])
0x1d6: Pop(1)
0x1d7: @@ ClearReplies()
0x1d8: Pop(0)
0x1d9: Push((int) 527850)
0x1da: Push((int) 29195)
0x1db: Push((int) 29193)
0x1dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dd: Pop(3)
0x1de: Return(); Pop(0)

0x1df: Push((int) 29195)
0x1e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e1: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1e2: PushEmpty(string)
0x1e3: Stack[-1] = "Neutral"
0x1e4: Call2 0xbf

0x1e5: Pop(1)
0x1e6: Push((int) 527852)
0x1e7: @@ SetMessage(Stack[-1])
0x1e8: Pop(1)
0x1e9: @@ ClearReplies()
0x1ea: Pop(0)
0x1eb: Push((int) 527853)
0x1ec: Push((int) 29194)
0x1ed: Push((int) 29196)
0x1ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ef: Pop(3)
0x1f0: Push((int) 527854)
0x1f1: Push((int) -1)
0x1f2: Push((int) 29197)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: Return(); Pop(0)

0x1f6: Push((int) 29194)
0x1f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f8: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x1f9: PushEmpty(string)
0x1fa: Stack[-1] = "Neutral"
0x1fb: Call2 0xbf

0x1fc: Pop(1)
0x1fd: Push((int) 527851)
0x1fe: @@ SetMessage(Stack[-1])
0x1ff: Pop(1)
0x200: @@ ClearReplies()
0x201: Pop(0)
0x202: Push((int) 527855)
0x203: Push((int) 29199)
0x204: Push((int) 29198)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: Return(); Pop(0)

0x208: Push((int) 29199)
0x209: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20a: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Neutral"
0x20d: Call2 0xbf

0x20e: Pop(1)
0x20f: Push((int) 527856)
0x210: @@ SetMessage(Stack[-1])
0x211: Pop(1)
0x212: @@ ClearReplies()
0x213: Pop(0)
0x214: Push((int) 527754)
0x215: Push((int) -1)
0x216: Push((int) 29111)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Push((int) 527755)
0x21a: Push((int) -1)
0x21b: Push((int) 29112)
0x21c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21d: Pop(3)
0x21e: Return(); Pop(0)

0x21f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x220: PushEmpty(bool)
0x221: Call2 0x3e1

0x222: Pop(0)
0x223: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x224: @ lshStopAnimation()
0x225: Pop(0)
0x226: GOTO 0x229

0x227: @ StopAnimation()
0x228: Pop(0)
0x229: Return(); Pop(0)

0x22a: GOTO 0xd6

0x22b: Return(); Pop(0)

0x22c: Push((bool) 1)
0x22d: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22e: PushEmpty(float, float)
0x22f: Stack[-2] = (int) 300
0x230: Stack[-1] = (int) 100
0x231: Call2 0x240

0x232: Pop(2)
0x233: GOTO 0x22c

0x234: Return(); Pop(0)

0x235: PushEmpty()
0x236: PushEmpty()
0x237: Call2 0x281

0x238: Pop(0)
0x239: PushEmpty(int, object)
0x23a: Stack[-1] = Stack[-3]
0x23b: Push(-2, 1); TaskCall(0)
0x23c: Call2 0x0

0x23d: Pop(-2, 1); TaskReturn
0x23e: Pop(2)
0x23f: Return(); Pop(0)

0x240: PushEmpty()
0x241: PushEmpty(bool)
0x242: Call2 0x2ed

0x243: Pop(0)
0x244: Pop(1); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Return(); Pop(0)

0x247: Push("player")
0x248: @ FindActor(Stack[-4], Stack[-1])
0x249: Pop(1)
0x24a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x24d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x24e: Push((int) 10)
0x24f: Push((float)1.0)
0x250: @ SetTimer(Stack[-2], Stack[-1])
0x251: Pop(2)
0x252: PushEmpty()
0x253: Call2 0x28f

0x254: Pop(0)
0x255: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x257: Push((int) 10)
0x258: @ KillTimer(Stack[-1])
0x259: Pop(1)
0x25a: Return(); Pop(0)

0x25b: PushEmpty(float, float)
0x25c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x25d: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25e: Stack[-3] = (bool) 0
0x25f: Return(); Pop(2)

0x260: PushEmpty(float, object)
0x261: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x262: Call2 0x2e5

0x263: Pop(1)
0x264: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x265: Push( Stack[2 + Tasks[-1].StackPointer] )
0x266: IF (Stack[-1] == 0) GOTO 0x268; Pop(1)

0x267: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x268: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x269: Return(); Pop(2)

0x26a: PushEmpty()
0x26b: Push((int) 10)
0x26c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x26e: PushEmpty(bool)
0x26f: Call2 0x25b

0x270: Pop(0)
0x271: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x272: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: PushEmpty(object)
0x275: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x276: Call2 0x368

0x277: Pop(1)
0x278: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x279: GOTO 0x280

0x27a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x27b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x27c: Push("head")
0x27d: @ UnlookAsync(Stack[-1])
0x27e: Pop(1)
0x27f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x280: Return(); Pop(0)

0x281: PushEmpty()
0x282: Call2 0x2e0

0x283: Pop(0)
0x284: Push((int) 10)
0x285: @ KillTimer(Stack[-1])
0x286: Pop(1)
0x287: Push( Stack[2 + Tasks[-1].StackPointer] )
0x288: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x289: Push("head")
0x28a: @ UnlookAsync(Stack[-1])
0x28b: Pop(1)
0x28c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x28d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x28e: Return(); Pop(0)

0x28f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x290: @ WaitForAnimEnd()
0x291: Pop(0)
0x292: PushEmpty(bool)
0x293: Call2 0x2ed

0x294: Pop(0)
0x295: Pop(1); Push((bool) Stack[-1] == 0)
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: Return(); Pop(14)

0x298: PushEmpty(int)
0x299: Call2 0x3c8

0x29a: Stack[-8] = Stack[-1]
0x29b: Pop(1)
0x29c: Stack[-6] = (int) 0
0x29d: PushEmpty(bool)
0x29e: Stack[-1] = (bool) 0
0x29f: Push((int) 5)
0x2a0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: PushEmpty(bool)
0x2a3: Call2 0x2ed

0x2a4: Pop(0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: Stack[-1] = (bool) 1
0x2a7: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2a8: Push((int) 3)
0x2a9: @ irand(Stack[-6], Stack[-1])
0x2aa: Pop(1)
0x2ab: Push((int) 0)
0x2ac: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ae: Push(Stack[-7])
0x2af: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b0: @ irand(Stack[-4], Stack[-7])
0x2b1: Pop(0)
0x2b2: Push("all")
0x2b3: PushEmpty(string, int)
0x2b4: Stack[-1] = Stack[-7]
0x2b5: Call2 0x3c1

0x2b6: Pop(1)
0x2b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: @ WaitForAnimEnd(Stack[-3])
0x2ba: Pop(0)
0x2bb: Pop(0); Push((bool) Stack[-3] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: GOTO 0x2db

0x2be: GOTO 0x2d0

0x2bf: Push((int) 1)
0x2c0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c2: Push((int) 4)
0x2c3: @ rand(Stack[-3], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push((int) 1)
0x2c6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2c7: @ Sleep(Stack[-1], Stack[-2])
0x2c8: Pop(1)
0x2c9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2cb: GOTO 0x2db

0x2cc: GOTO 0x2d0

0x2cd: Push(Stack[-6])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: GOTO 0x2db

0x2d0: PushEmpty(bool)
0x2d1: Call2 0x2de

0x2d2: Pop(0)
0x2d3: Pop(1); Push((bool) Stack[-1] == 0)
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d5: GOTO 0x2db

0x2d6: @ ResetAAS()
0x2d7: Pop(0)
0x2d8: Push((int) 1)
0x2d9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2da: GOTO 0x29d

0x2db: @ ResetAAS()
0x2dc: Pop(0)
0x2dd: Return(); Pop(14)

0x2de: Stack[-1] = (bool) 1
0x2df: Return(); Pop(0)

0x2e0: @ StopAnimation()
0x2e1: Pop(0)
0x2e2: @ StopGroup0()
0x2e3: Pop(0)
0x2e4: Return(); Pop(0)

0x2e5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2e6: @ GetPosition(Stack[-3])
0x2e7: Pop(0)
0x2e8: @@ GetPosition(Stack[-2])
0x2e9: Pop(0)
0x2ea: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2eb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ec: Return(); Pop(6)

0x2ed: PushEmpty(bool, bool)
0x2ee: @ IsLoaded(Stack[-1])
0x2ef: Pop(0)
0x2f0: Stack[-3] = Stack[-1]
0x2f1: Return(); Pop(2)

0x2f2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2f3: @@ GetPosition(Stack[-8])
0x2f4: Pop(0)
0x2f5: @@ GetEyesHeight(Stack[-9])
0x2f6: Pop(0)
0x2f7: Push(CvectorIndex(Stack[-8], 1))
0x2f8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2f9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2fa: @ GetPosition(Stack[-7])
0x2fb: Pop(0)
0x2fc: @ GetEyesHeight(Stack[-9])
0x2fd: Pop(0)
0x2fe: Push(CvectorIndex(Stack[-7], 1))
0x2ff: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x300: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x301: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x302: Push(CvectorIndex(Stack[-6], 1))
0x303: Stack[-1] = (int) 0
0x304: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x305: Pop(0); Push(Stack[-6] | Stack[-6]);
0x306: Pop(1); Push(Sqrt(Stack[-1]))
0x307: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x308: Stack[-5] = -Stack[-6]; Pop(0);
0x309: Pop(0); Push(Stack[-6] * Stack[-19]);
0x30a: PushEmpty(cvector, cvector)
0x30b: Push(CVector(0.0, 1.0, 0.0))
0x30c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x30d: Call2 0x37a

0x30e: Pop(1)
0x30f: Push((int) 25)
0x310: Pop(2); Push(Stack[-2] * Stack[-1]);
0x311: Pop(2); Push(Stack[-2] + Stack[-1]);
0x312: Push(CVector(0.0, 10.0, 0.0))
0x313: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x314: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x315: @ IsOverrideActive(Stack[-2])
0x316: Pop(0)
0x317: Push(Stack[-2])
0x318: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x319: Stack[-21] = (bool) 0
0x31a: Return(); Pop(18)

0x31b: @ StopWorld()
0x31c: Pop(0)
0x31d: Push((bool) 1)
0x31e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x31f: Pop(1)
0x320: Push(CvectorIndex(Stack[-4], 0))
0x321: Push(CvectorIndex(Stack[-5], 2))
0x322: @ Rotate(Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: PushEmpty(bool)
0x325: Call2 0x3e1

0x326: Pop(0)
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: GOTO 0x331

0x329: Push("head")
0x32a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x32b: Pop(1)
0x32c: Push(Stack[-1])
0x32d: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32e: Push("head")
0x32f: @ LookAsyncCamera(Stack[-1])
0x330: Pop(1)
0x331: @ CameraWaitForPlayFinish()
0x332: Pop(0)
0x333: @ ResumeWorld()
0x334: Pop(0)
0x335: Stack[-21] = (bool) 1
0x336: Return(); Pop(18)

0x337: PushEmpty(bool, bool)
0x338: Push((bool) 1)
0x339: @ CameraSwitchToNormal(Stack[-1])
0x33a: Pop(1)
0x33b: PushEmpty(bool)
0x33c: Call2 0x3e1

0x33d: Pop(0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x348

0x340: Push("head")
0x341: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x342: Pop(1)
0x343: Push(Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x345: Push("head")
0x346: @ UnlookAsync(Stack[-1])
0x347: Pop(1)
0x348: Return(); Pop(2)

0x349: PushEmpty(bool, float, float, bool, float, float)
0x34a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x34b: Pop(0)
0x34c: Push(Stack[-3])
0x34d: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x34f: Pop(0)
0x350: Push((bool) 0)
0x351: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x352: Pop(1)
0x353: GOTO 0x358

0x354: Push("Can't find lsh animation : ")
0x355: Pop(1); Push(Stack[-1] + Stack[-8]);
0x356: @ Trace(Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(6)

0x359: PushEmpty(bool, float, float, bool, float, float)
0x35a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x35b: Pop(0)
0x35c: Push(Stack[-3])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x35f: Pop(0)
0x360: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x361: Pop(0)
0x362: GOTO 0x367

0x363: Push("Can't find lsh animation : ")
0x364: Pop(1); Push(Stack[-1] + Stack[-9]);
0x365: @ Trace(Stack[-1])
0x366: Pop(1)
0x367: Return(); Pop(6)

0x368: PushEmpty(float, cvector, float, cvector)
0x369: @@ GetEyesHeight(Stack[-2])
0x36a: Pop(0)
0x36b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x36c: Push(CvectorIndex(Stack[-1], 1))
0x36d: Stack[-1] = Stack[-3]
0x36e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x36f: Push("head")
0x370: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x371: Pop(1)
0x372: Return(); Pop(4)

0x373: PushEmpty(bool)
0x374: Call2 0x3e1

0x375: Pop(0)
0x376: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x377: @ lshStopSpeech()
0x378: Pop(0)
0x379: Return(); Pop(0)

0x37a: PushEmpty(float, float)
0x37b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x37c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x37d: Push((float)0.0)
0x37e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x381: Return(); Pop(2)

0x382: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x383: Return(); Pop(2)

0x384: PushEmpty(int, int)
0x385: @ GetVariable(Stack[-3], Stack[-1])
0x386: Pop(0)
0x387: Stack[-4] = Stack[-1]
0x388: Return(); Pop(2)

0x389: PushEmpty(object, object)
0x38a: @ CreateIntVector(Stack[-1])
0x38b: Pop(0)
0x38c: @@ add(Stack[-4])
0x38d: Pop(0)
0x38e: @@ add(Stack[-3])
0x38f: Pop(0)
0x390: Push((int) 3)
0x391: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x392: Pop(1)
0x393: Return(); Pop(2)

0x394: Stack[-1] = 0
0x395: PushEmpty(int, int, bool, int, int, bool)
0x396: @@ GetItemID(Stack[-3])
0x397: Pop(0)
0x398: Push("Category")
0x399: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x39a: Pop(1)
0x39b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x39c: Pop(0)
0x39d: Pop(0); Push((bool) Stack[-1] == 0)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x39f: @@ DropItems(Stack[-8], Stack[-7])
0x3a0: Pop(0)
0x3a1: GOTO 0x3a7

0x3a2: PushEmpty(int, int)
0x3a3: Stack[-2] = Stack[-5]
0x3a4: Stack[-1] = Stack[-9]
0x3a5: Call2 0x389

0x3a6: Pop(2)
0x3a7: Return(); Pop(6)

0x3a8: PushEmpty(object, object)
0x3a9: @ CreateInvItem(Stack[-1])
0x3aa: Pop(0)
0x3ab: @@ SetItemName(Stack[-4])
0x3ac: Pop(0)
0x3ad: PushEmpty(object, object, int)
0x3ae: Stack[-3] = Stack[-8]
0x3af: Stack[-2] = Stack[-4]
0x3b0: Stack[-1] = Stack[-6]
0x3b1: Call2 0x395

0x3b2: Pop(3)
0x3b3: Return(); Pop(2)

0x3b4: Stack[-1] = 0
0x3b5: PushEmpty(object, object)
0x3b6: @ FindActor(Stack[-1], Stack[-4])
0x3b7: Pop(0)
0x3b8: Pop(0); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ba: Stack[-5] = (bool) 0
0x3bb: Return(); Pop(2)

0x3bc: @ Trigger(Stack[-1], Stack[-3])
0x3bd: Pop(0)
0x3be: Stack[-5] = (bool) 1
0x3bf: Return(); Pop(2)

0x3c0: Stack[-1] = 0
0x3c1: PushEmpty(string, string)
0x3c2: Stack[-1] = "idle"
0x3c3: Push(Stack[-3])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c5: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3c6: Stack[-4] = Stack[-1]
0x3c7: Return(); Pop(2)

0x3c8: PushEmpty(int, bool, int, bool)
0x3c9: Stack[-2] = (int) 0
0x3ca: Push("all")
0x3cb: PushEmpty(string, int)
0x3cc: Stack[-1] = Stack[-5]
0x3cd: Call2 0x3c1

0x3ce: Pop(1)
0x3cf: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3d0: Pop(2)
0x3d1: Pop(0); Push((bool) Stack[-1] == 0)
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: GOTO 0x3d7

0x3d4: Push((int) 1)
0x3d5: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3d6: GOTO 0x3ca

0x3d7: Stack[-5] = Stack[-2]
0x3d8: Return(); Pop(4)

0x3d9: Stack[-1] = (int) 521048
0x3da: Return(); Pop(0)

0x3db: Stack[-1] = (int) 521047
0x3dc: Return(); Pop(0)

0x3dd: Stack[-1] = "ui/NPC_Morlok.png"
0x3de: Return(); Pop(0)

0x3df: Stack[-1] = "ui/NPC_Morlok_b.png"
0x3e0: Return(); Pop(0)

0x3e1: Stack[-1] = (bool) 0
0x3e2: Return(); Pop(0)

0x3e3: PushEmpty()
0x3e4: Push("oob2Gatherer1")
0x3e5: Push((int) 1)
0x3e6: @ SetVariable(Stack[-2], Stack[-1])
0x3e7: Pop(2)
0x3e8: Return(); Pop(0)

0x3e9: PushEmpty()
0x3ea: Push("b2q02")
0x3eb: Push((int) 1)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: PushEmpty()
0x3ef: Call2 0x452

0x3f0: Pop(0)
0x3f1: PushEmpty()
0x3f2: Call2 0x45f

0x3f3: Pop(0)
0x3f4: Return(); Pop(0)

0x3f5: PushEmpty()
0x3f6: PushEmpty()
0x3f7: Call2 0x46c

0x3f8: Pop(0)
0x3f9: PushEmpty(bool, string, string)
0x3fa: Stack[-2] = "quest_b2_02"
0x3fb: Stack[-1] = "completed"
0x3fc: Call2 0x3b5

0x3fd: Pop(3)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: Push("oob2Gatherer2")
0x401: Push((int) 1)
0x402: @ SetVariable(Stack[-2], Stack[-1])
0x403: Pop(2)
0x404: Return(); Pop(0)

0x405: PushEmpty()
0x406: Push("playsound")
0x407: Push("giveitem")
0x408: @ TriggerWorld(Stack[-2], Stack[-1])
0x409: Pop(2)
0x40a: Return(); Pop(0)

0x40b: PushEmpty()
0x40c: Push("recipe9 is given")
0x40d: @ Trace(Stack[-1])
0x40e: Pop(1)
0x40f: PushEmpty(object, string, int)
0x410: Stack[-3] = Stack[-5]
0x411: Stack[-2] = "recipe9"
0x412: Stack[-1] = (int) 1
0x413: Call2 0x3a8

0x414: Pop(3)
0x415: Return(); Pop(0)

0x416: PushEmpty()
0x417: PushEmpty(int, string)
0x418: Stack[-1] = "oob2Gatherer1"
0x419: Call2 0x384

0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41e: Stack[-2] = (bool) 1
0x41f: Return(); Pop(0)

0x420: Stack[-2] = (bool) 0
0x421: Return(); Pop(0)

0x422: PushEmpty()
0x423: PushEmpty(int, string)
0x424: Stack[-1] = "b2q02"
0x425: Call2 0x384

0x426: Pop(1)
0x427: Push((int) 0)
0x428: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-2] = (bool) 1
0x42b: Return(); Pop(0)

0x42c: Stack[-2] = (bool) 0
0x42d: Return(); Pop(0)

0x42e: PushEmpty()
0x42f: PushEmpty(int, string)
0x430: Stack[-1] = "b2q02"
0x431: Call2 0x384

0x432: Pop(1)
0x433: Push((int) 2)
0x434: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x435: IF (Stack[-1] == 0) GOTO 0x438; Pop(1)

0x436: Stack[-2] = (bool) 1
0x437: Return(); Pop(0)

0x438: Stack[-2] = (bool) 0
0x439: Return(); Pop(0)

0x43a: PushEmpty()
0x43b: PushEmpty(int, string)
0x43c: Stack[-1] = "b2q02"
0x43d: Call2 0x384

0x43e: Pop(1)
0x43f: Push((int) -1)
0x440: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x442: Stack[-2] = (bool) 1
0x443: Return(); Pop(0)

0x444: Stack[-2] = (bool) 0
0x445: Return(); Pop(0)

0x446: PushEmpty()
0x447: PushEmpty(int, string)
0x448: Stack[-1] = "oob2Gatherer2"
0x449: Call2 0x384

0x44a: Pop(1)
0x44b: Push((int) 0)
0x44c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-2] = (bool) 1
0x44f: Return(); Pop(0)

0x450: Stack[-2] = (bool) 0
0x451: Return(); Pop(0)

0x452: PushEmpty(object, object)
0x453: Push((int) 456)
0x454: Push((int) 2)
0x455: Push((int) 527772)
0x456: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: PushEmpty(bool, object, int)
0x459: Stack[-2] = Stack[-4]
0x45a: Stack[-1] = (int) -1
0x45b: Call2 0x486

0x45c: Pop(3)
0x45d: Return(); Pop(2)

0x45e: Stack[-1] = 0
0x45f: PushEmpty(object, object)
0x460: Push((int) 457)
0x461: Push((int) 2)
0x462: Push((int) 527773)
0x463: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: PushEmpty(bool, object, int)
0x466: Stack[-2] = Stack[-4]
0x467: Stack[-1] = (int) 456
0x468: Call2 0x486

0x469: Pop(3)
0x46a: Return(); Pop(2)

0x46b: Stack[-1] = 0
0x46c: PushEmpty(object, object)
0x46d: Push((int) 459)
0x46e: Push((int) 2)
0x46f: Push((int) 527775)
0x470: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: PushEmpty(bool, object, int)
0x473: Stack[-2] = Stack[-4]
0x474: Stack[-1] = (int) 456
0x475: Call2 0x486

0x476: Pop(3)
0x477: Return(); Pop(2)

0x478: Stack[-1] = 0
0x479: PushEmpty(object, object)
0x47a: @ GetDiaryRoot(Stack[-1])
0x47b: Pop(0)
0x47c: Pop(0); Push((bool) Stack[-1] == 0)
0x47d: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47e: Push("Can't retrieve diary root")
0x47f: @ Trace(Stack[-1])
0x480: Pop(1)
0x481: Stack[-3] = (bool) 0
0x482: Return(); Pop(2)

0x483: Stack[-3] = Stack[-1]
0x484: Return(); Pop(2)

0x485: Stack[-1] = 0
0x486: PushEmpty(object, object, int, object, object, int)
0x487: PushEmpty(object)
0x488: Call2 0x479

0x489: Stack[-4] = Stack[-1]
0x48a: Pop(1)
0x48b: @@ Find(Stack[-7], Stack[-2])
0x48c: Pop(0)
0x48d: Pop(0); Push((bool) Stack[-2] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x48f: Push("Can't find diary parent with id: ")
0x490: Pop(1); Push(Stack[-1] + Stack[-8]);
0x491: @ Trace(Stack[-1])
0x492: Pop(1)
0x493: Stack[-9] = (bool) 0
0x494: Return(); Pop(6)

0x495: @@ AddChild(Stack[-8])
0x496: Pop(0)
0x497: Push((int) 7)
0x498: @ SendWorldWndMessage(Stack[-1])
0x499: Pop(1)
0x49a: @@ GetCategory(Stack[-1])
0x49b: Pop(0)
0x49c: @ SetDiarySection(Stack[-1])
0x49d: Pop(0)
0x49e: Stack[-9] = (bool) 0
0x49f: Return(); Pop(6)

0x4a0: Stack[-2] = 0
0x4a1: Stack[-3] = 0
0x4a2: PushEmpty(int, int)
0x4a3: Push("branch")
0x4a4: @ GetVariable(Stack[-1], Stack[-2])
0x4a5: Pop(1)
0x4a6: Push((int) 0)
0x4a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4a9: Stack[-3] = (int) 1
0x4aa: Return(); Pop(2)

0x4ab: GOTO 0x4b1

0x4ac: Push((int) 1)
0x4ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4af: Stack[-3] = (int) 2
0x4b0: Return(); Pop(2)

0x4b1: Stack[-3] = (int) 3
0x4b2: Return(); Pop(2)

