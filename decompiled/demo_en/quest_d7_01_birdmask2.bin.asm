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
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	dreport is given
	d7q01_dreport
	ood7DBirdmask1
	quest_d7_01
	kill_player
	d7q01
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	branch
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

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
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)

RunOp = 0x2cd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe3 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x2d1 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2d9

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x42a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x428

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x42c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x42e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x417

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
0x41: Call2 0x31d

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
0x4f: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x3db

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3c5

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call2 0xcd

0x61: Pop(1)
0x62: Push((int) 513261)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: Push((int) 513262)
0x68: Push((int) 14492)
0x69: Push((int) 14491)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: GOTO 0xaf

0x6d: PushEmpty(bool)
0x6e: Stack[-1] = (bool) 0
0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x3b9

0x72: Pop(1)
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x3d1

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call2 0xcd

0x7e: Pop(1)
0x7f: Push((int) 513279)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 513280)
0x85: Push((int) 14511)
0x86: Push((int) 14510)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 513284)
0x8a: Push((int) 14515)
0x8b: Push((int) 14514)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: GOTO 0xaf

0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x3b9

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0x94: PushEmpty(string)
0x95: Stack[-1] = "Neutral"
0x96: Call2 0xcd

0x97: Pop(1)
0x98: Push((int) 513289)
0x99: @@ SetMessage(Stack[-1])
0x9a: Pop(1)
0x9b: @@ ClearReplies()
0x9c: Pop(0)
0x9d: Push((int) 513290)
0x9e: Push((int) 14522)
0x9f: Push((int) 14521)
0xa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1: Pop(3)
0xa2: Push((int) 513304)
0xa3: Push((int) 14538)
0xa4: Push((int) 14535)
0xa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6: Pop(3)
0xa7: Push((int) 513305)
0xa8: Push((int) -1)
0xa9: Push((int) 14536)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: GOTO 0xaf

0xad: Return(); Pop(0)

0xae: GOTO 0x4e

0xaf: PushEmpty(bool)
0xb0: Call2 0x430

0xb1: Pop(0)
0xb2: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb3: @ lshWaitForAnimEnd()
0xb4: Pop(0)
0xb5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: GOTO 0xbd

0xb8: PushEmpty(string)
0xb9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xba: Call2 0x32e

0xbb: Pop(1)
0xbc: GOTO 0xb3

0xbd: GOTO 0xcc

0xbe: Push("all")
0xbf: Push("idle")
0xc0: @ PlayAnimation(Stack[-2], Stack[-1])
0xc1: Pop(2)
0xc2: @ WaitForAnimEnd()
0xc3: Pop(0)
0xc4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: GOTO 0xcc

0xc7: Push("all")
0xc8: Push("idle")
0xc9: @ PlayAnimation(Stack[-2], Stack[-1])
0xca: Pop(2)
0xcb: GOTO 0xc2

0xcc: Return(); Pop(0)

0xcd: PushEmpty()
0xce: PushEmpty(bool)
0xcf: Call2 0x430

0xd0: Pop(0)
0xd1: Pop(1); Push((bool) Stack[-1] == 0)
0xd2: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xd3: Return(); Pop(0)

0xd4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd5: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd6: Return(); Pop(0)

0xd7: PushEmpty(string, bool)
0xd8: Stack[-2] = Stack[-3]
0xd9: Push("")
0xda: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdc: Stack[-1] = (bool) 0
0xdd: GOTO 0xdf

0xde: Stack[-1] = (bool) 1
0xdf: Call2 0x33e

0xe0: Pop(2)
0xe1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: Push((int) 1)
0xe5: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0xe6: PushEmpty()
0xe7: Call2 0x34d

0xe8: Pop(0)
0xe9: Push((int) 14497)
0xea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(object, object)
0xed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xef: Call2 0x3a1

0xf0: Pop(2)
0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0x3ac

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0x39b

0xfa: Pop(2)
0xfb: Push((int) 14502)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0x39b

0x102: Pop(2)
0x103: PushEmpty(object, object)
0x104: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x105: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x106: Call2 0x3ac

0x107: Pop(2)
0x108: PushEmpty(object, object)
0x109: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10b: Call2 0x3a1

0x10c: Pop(2)
0x10d: Push((int) 14513)
0x10e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x110: PushEmpty(object, object)
0x111: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x112: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x113: Call2 0x3b2

0x114: Pop(2)
0x115: Push((int) 14517)
0x116: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11b: Call2 0x3b2

0x11c: Pop(2)
0x11d: Push((int) 14539)
0x11e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x120: PushEmpty(object, object)
0x121: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x122: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x123: Call2 0x3b2

0x124: Pop(2)
0x125: Push((int) 14490)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x128: PushEmpty(bool)
0x129: Stack[-1] = (bool) 0
0x12a: PushEmpty(bool, object)
0x12b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12c: Call2 0x3db

0x12d: Pop(1)
0x12e: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x12f: PushEmpty(bool, object)
0x130: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x131: Call2 0x3c5

0x132: Pop(1)
0x133: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x134: Stack[-1] = (bool) 1
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0xcd

0x139: Pop(1)
0x13a: Push((int) 513261)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 513262)
0x140: Push((int) 14492)
0x141: Push((int) 14491)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: PushEmpty(bool)
0x146: Stack[-1] = (bool) 0
0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x3b9

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x3d1

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Stack[-1] = (bool) 1
0x152: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0xcd

0x156: Pop(1)
0x157: Push((int) 513279)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 513280)
0x15d: Push((int) 14511)
0x15e: Push((int) 14510)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Push((int) 513284)
0x162: Push((int) 14515)
0x163: Push((int) 14514)
0x164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x165: Pop(3)
0x166: Return(); Pop(0)

0x167: PushEmpty(bool, object)
0x168: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x169: Call2 0x3b9

0x16a: Pop(1)
0x16b: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x16c: PushEmpty(string)
0x16d: Stack[-1] = "Neutral"
0x16e: Call2 0xcd

0x16f: Pop(1)
0x170: Push((int) 513289)
0x171: @@ SetMessage(Stack[-1])
0x172: Pop(1)
0x173: @@ ClearReplies()
0x174: Pop(0)
0x175: Push((int) 513290)
0x176: Push((int) 14522)
0x177: Push((int) 14521)
0x178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x179: Pop(3)
0x17a: Push((int) 513304)
0x17b: Push((int) 14538)
0x17c: Push((int) 14535)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 513305)
0x180: Push((int) -1)
0x181: Push((int) 14536)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 14522)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xcd

0x18b: Pop(1)
0x18c: Push((int) 513291)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 513292)
0x192: Push((int) 14524)
0x193: Push((int) 14523)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 513296)
0x197: Push((int) 14528)
0x198: Push((int) 14527)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Push((int) 513300)
0x19c: Push((int) 14532)
0x19d: Push((int) 14531)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Return(); Pop(0)

0x1a1: Push((int) 14532)
0x1a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a3: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a4: PushEmpty(string)
0x1a5: Stack[-1] = "Neutral"
0x1a6: Call2 0xcd

0x1a7: Pop(1)
0x1a8: Push((int) 513301)
0x1a9: @@ SetMessage(Stack[-1])
0x1aa: Pop(1)
0x1ab: @@ ClearReplies()
0x1ac: Pop(0)
0x1ad: Push((int) 513302)
0x1ae: Push((int) 14540)
0x1af: Push((int) 14533)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Push((int) 513303)
0x1b3: Push((int) 14538)
0x1b4: Push((int) 14534)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 14540)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Neutral"
0x1bd: Call2 0xcd

0x1be: Pop(1)
0x1bf: Push((int) 513309)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 513310)
0x1c5: Push((int) 14524)
0x1c6: Push((int) 14541)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 14528)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call2 0xcd

0x1d0: Pop(1)
0x1d1: Push((int) 513297)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 513298)
0x1d7: Push((int) -1)
0x1d8: Push((int) 14529)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Push((int) 513299)
0x1dc: Push((int) 14538)
0x1dd: Push((int) 14530)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 14524)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call2 0xcd

0x1e7: Pop(1)
0x1e8: Push((int) 513293)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 513295)
0x1ee: Push((int) -1)
0x1ef: Push((int) 14526)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 513306)
0x1f3: Push((int) 14538)
0x1f4: Push((int) 14537)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Push((int) 14538)
0x1f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fa: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1fb: PushEmpty(string)
0x1fc: Stack[-1] = "Neutral"
0x1fd: Call2 0xcd

0x1fe: Pop(1)
0x1ff: Push((int) 513307)
0x200: @@ SetMessage(Stack[-1])
0x201: Pop(1)
0x202: @@ ClearReplies()
0x203: Pop(0)
0x204: Push((int) 513308)
0x205: Push((int) -1)
0x206: Push((int) 14539)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Push((int) 14515)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Neutral"
0x20f: Call2 0xcd

0x210: Pop(1)
0x211: Push((int) 513285)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 513286)
0x217: Push((int) -1)
0x218: Push((int) 14516)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 513287)
0x21c: Push((int) -1)
0x21d: Push((int) 14517)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 14511)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Neutral"
0x226: Call2 0xcd

0x227: Pop(1)
0x228: Push((int) 513281)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 513282)
0x22e: Push((int) -1)
0x22f: Push((int) 14512)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 513283)
0x233: Push((int) -1)
0x234: Push((int) 14513)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 14492)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call2 0xcd

0x23e: Pop(1)
0x23f: Push((int) 513263)
0x240: @@ SetMessage(Stack[-1])
0x241: Pop(1)
0x242: @@ ClearReplies()
0x243: Pop(0)
0x244: Push((int) 513264)
0x245: Push((int) 14494)
0x246: Push((int) 14493)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Push((int) 513269)
0x24a: Push((int) 14506)
0x24b: Push((int) 14498)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 513274)
0x24f: Push((int) 14504)
0x250: Push((int) 14503)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 14504)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Neutral"
0x259: Call2 0xcd

0x25a: Pop(1)
0x25b: Push((int) 513275)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 513276)
0x261: Push((int) 14499)
0x262: Push((int) 14505)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Return(); Pop(0)

0x266: Push((int) 14506)
0x267: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x268: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x269: PushEmpty(string)
0x26a: Stack[-1] = "Neutral"
0x26b: Call2 0xcd

0x26c: Pop(1)
0x26d: Push((int) 513277)
0x26e: @@ SetMessage(Stack[-1])
0x26f: Pop(1)
0x270: @@ ClearReplies()
0x271: Pop(0)
0x272: Push((int) 513278)
0x273: Push((int) 14499)
0x274: Push((int) 14507)
0x275: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x276: Pop(3)
0x277: Return(); Pop(0)

0x278: Push((int) 14499)
0x279: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x27b: PushEmpty(string)
0x27c: Stack[-1] = "Neutral"
0x27d: Call2 0xcd

0x27e: Pop(1)
0x27f: Push((int) 513270)
0x280: @@ SetMessage(Stack[-1])
0x281: Pop(1)
0x282: @@ ClearReplies()
0x283: Pop(0)
0x284: Push((int) 513271)
0x285: Push((int) 14501)
0x286: Push((int) 14500)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Return(); Pop(0)

0x28a: Push((int) 14501)
0x28b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x28d: PushEmpty(string)
0x28e: Stack[-1] = "Neutral"
0x28f: Call2 0xcd

0x290: Pop(1)
0x291: Push((int) 513272)
0x292: @@ SetMessage(Stack[-1])
0x293: Pop(1)
0x294: @@ ClearReplies()
0x295: Pop(0)
0x296: Push((int) 513273)
0x297: Push((int) -1)
0x298: Push((int) 14502)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 14494)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Neutral"
0x2a1: Call2 0xcd

0x2a2: Pop(1)
0x2a3: Push((int) 513265)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 513266)
0x2a9: Push((int) 14496)
0x2aa: Push((int) 14495)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Push((int) 14496)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral"
0x2b3: Call2 0xcd

0x2b4: Pop(1)
0x2b5: Push((int) 513267)
0x2b6: @@ SetMessage(Stack[-1])
0x2b7: Pop(1)
0x2b8: @@ ClearReplies()
0x2b9: Pop(0)
0x2ba: Push((int) 513268)
0x2bb: Push((int) -1)
0x2bc: Push((int) 14497)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Return(); Pop(0)

0x2c0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c1: PushEmpty(bool)
0x2c2: Call2 0x430

0x2c3: Pop(0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: @ lshStopAnimation()
0x2c6: Pop(0)
0x2c7: GOTO 0x2ca

0x2c8: @ StopAnimation()
0x2c9: Pop(0)
0x2ca: Return(); Pop(0)

0x2cb: GOTO 0xe4

0x2cc: Return(); Pop(0)

0x2cd: @ Hold()
0x2ce: Pop(0)
0x2cf: GOTO 0x2cd

0x2d0: Return(); Pop(0)

0x2d1: PushEmpty()
0x2d2: PushEmpty(int, object)
0x2d3: Stack[-1] = Stack[-3]
0x2d4: Push(-2, 1); TaskCall(0)
0x2d5: Call2 0x0

0x2d6: Pop(-2, 1); TaskReturn
0x2d7: Pop(2)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2da: @@ GetPosition(Stack[-8])
0x2db: Pop(0)
0x2dc: @@ GetEyesHeight(Stack[-9])
0x2dd: Pop(0)
0x2de: Push(CvectorIndex(Stack[-8], 1))
0x2df: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2e1: @ GetPosition(Stack[-7])
0x2e2: Pop(0)
0x2e3: @ GetEyesHeight(Stack[-9])
0x2e4: Pop(0)
0x2e5: Push(CvectorIndex(Stack[-7], 1))
0x2e6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e9: Push(CvectorIndex(Stack[-6], 1))
0x2ea: Stack[-1] = (int) 0
0x2eb: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ec: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ed: Pop(1); Push(Sqrt(Stack[-1]))
0x2ee: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2ef: Stack[-5] = -Stack[-6]; Pop(0);
0x2f0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2f1: PushEmpty(cvector, cvector)
0x2f2: Push(CVector(0.0, 1.0, 0.0))
0x2f3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2f4: Call2 0x354

0x2f5: Pop(1)
0x2f6: Push((int) 25)
0x2f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f9: Push(CVector(0.0, 10.0, 0.0))
0x2fa: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2fb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2fc: @ IsOverrideActive(Stack[-2])
0x2fd: Pop(0)
0x2fe: Push(Stack[-2])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: Stack[-21] = (bool) 0
0x301: Return(); Pop(18)

0x302: @ StopWorld()
0x303: Pop(0)
0x304: @ CameraTransit(Stack[-3], Stack[-5])
0x305: Pop(0)
0x306: Push(CvectorIndex(Stack[-4], 0))
0x307: Push(CvectorIndex(Stack[-5], 2))
0x308: @ Rotate(Stack[-2], Stack[-1])
0x309: Pop(2)
0x30a: PushEmpty(bool)
0x30b: Call2 0x430

0x30c: Pop(0)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: GOTO 0x317

0x30f: Push("head")
0x310: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x311: Pop(1)
0x312: Push(Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x314: Push("head")
0x315: @ LookAsyncCamera(Stack[-1])
0x316: Pop(1)
0x317: @ CameraWaitForPlayFinish()
0x318: Pop(0)
0x319: @ ResumeWorld()
0x31a: Pop(0)
0x31b: Stack[-21] = (bool) 1
0x31c: Return(); Pop(18)

0x31d: PushEmpty(bool, bool)
0x31e: @ CameraSwitchToNormal()
0x31f: Pop(0)
0x320: PushEmpty(bool)
0x321: Call2 0x430

0x322: Pop(0)
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: GOTO 0x32d

0x325: Push("head")
0x326: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x327: Pop(1)
0x328: Push(Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32a: Push("head")
0x32b: @ UnlookAsync(Stack[-1])
0x32c: Pop(1)
0x32d: Return(); Pop(2)

0x32e: PushEmpty(bool, float, float, bool, float, float)
0x32f: @ lshHasAnimation(Stack[-3], Stack[-7])
0x330: Pop(0)
0x331: Push(Stack[-3])
0x332: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x333: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x334: Pop(0)
0x335: Push((bool) 0)
0x336: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x337: Pop(1)
0x338: GOTO 0x33d

0x339: Push("Can't find lsh animation : ")
0x33a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x33b: @ Trace(Stack[-1])
0x33c: Pop(1)
0x33d: Return(); Pop(6)

0x33e: PushEmpty(bool, float, float, bool, float, float)
0x33f: @ lshHasAnimation(Stack[-3], Stack[-8])
0x340: Pop(0)
0x341: Push(Stack[-3])
0x342: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x343: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x344: Pop(0)
0x345: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x346: Pop(0)
0x347: GOTO 0x34c

0x348: Push("Can't find lsh animation : ")
0x349: Pop(1); Push(Stack[-1] + Stack[-9]);
0x34a: @ Trace(Stack[-1])
0x34b: Pop(1)
0x34c: Return(); Pop(6)

0x34d: PushEmpty(bool)
0x34e: Call2 0x430

0x34f: Pop(0)
0x350: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x351: @ lshStopSpeech()
0x352: Pop(0)
0x353: Return(); Pop(0)

0x354: PushEmpty(float, float)
0x355: Pop(0); Push(Stack[-3] | Stack[-3]);
0x356: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x357: Push((float)0.0)
0x358: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x35a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x35b: Return(); Pop(2)

0x35c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x35d: Return(); Pop(2)

0x35e: PushEmpty(int, int)
0x35f: @ GetVariable(Stack[-3], Stack[-1])
0x360: Pop(0)
0x361: Stack[-4] = Stack[-1]
0x362: Return(); Pop(2)

0x363: PushEmpty(object, object)
0x364: @ CreateIntVector(Stack[-1])
0x365: Pop(0)
0x366: @@ add(Stack[-4])
0x367: Pop(0)
0x368: @@ add(Stack[-3])
0x369: Pop(0)
0x36a: Push((int) 3)
0x36b: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x36c: Pop(1)
0x36d: Return(); Pop(2)

0x36e: Stack[-1] = 0
0x36f: PushEmpty(int, int, bool, int, int, bool)
0x370: @@ GetItemID(Stack[-3])
0x371: Pop(0)
0x372: Push("Category")
0x373: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x374: Pop(1)
0x375: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x376: Pop(0)
0x377: Pop(0); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x379: @@ DropItems(Stack[-8], Stack[-7])
0x37a: Pop(0)
0x37b: GOTO 0x381

0x37c: PushEmpty(int, int)
0x37d: Stack[-2] = Stack[-5]
0x37e: Stack[-1] = Stack[-9]
0x37f: Call2 0x363

0x380: Pop(2)
0x381: Return(); Pop(6)

0x382: PushEmpty(object, object)
0x383: @ CreateInvItem(Stack[-1])
0x384: Pop(0)
0x385: @@ SetItemName(Stack[-4])
0x386: Pop(0)
0x387: PushEmpty(object, object, int)
0x388: Stack[-3] = Stack[-8]
0x389: Stack[-2] = Stack[-4]
0x38a: Stack[-1] = Stack[-6]
0x38b: Call2 0x36f

0x38c: Pop(3)
0x38d: Return(); Pop(2)

0x38e: Stack[-1] = 0
0x38f: PushEmpty(object, object)
0x390: @ FindActor(Stack[-1], Stack[-4])
0x391: Pop(0)
0x392: Pop(0); Push((bool) Stack[-1] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-5] = (bool) 0
0x395: Return(); Pop(2)

0x396: @ Trigger(Stack[-1], Stack[-3])
0x397: Pop(0)
0x398: Stack[-5] = (bool) 1
0x399: Return(); Pop(2)

0x39a: Stack[-1] = 0
0x39b: PushEmpty()
0x39c: Push("playsound")
0x39d: Push("giveitem")
0x39e: @ TriggerWorld(Stack[-2], Stack[-1])
0x39f: Pop(2)
0x3a0: Return(); Pop(0)

0x3a1: PushEmpty()
0x3a2: Push("dreport is given")
0x3a3: @ Trace(Stack[-1])
0x3a4: Pop(1)
0x3a5: PushEmpty(object, string, int)
0x3a6: Stack[-3] = Stack[-5]
0x3a7: Stack[-2] = "d7q01_dreport"
0x3a8: Stack[-1] = (int) 1
0x3a9: Call2 0x382

0x3aa: Pop(3)
0x3ab: Return(); Pop(0)

0x3ac: PushEmpty()
0x3ad: Push("ood7DBirdmask1")
0x3ae: Push((int) 1)
0x3af: @ SetVariable(Stack[-2], Stack[-1])
0x3b0: Pop(2)
0x3b1: Return(); Pop(0)

0x3b2: PushEmpty()
0x3b3: PushEmpty(bool, string, string)
0x3b4: Stack[-2] = "quest_d7_01"
0x3b5: Stack[-1] = "kill_player"
0x3b6: Call2 0x38f

0x3b7: Pop(3)
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: PushEmpty(int, string)
0x3bb: Stack[-1] = "d7q01"
0x3bc: Call2 0x35e

0x3bd: Pop(1)
0x3be: Push((int) 2)
0x3bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-2] = (bool) 1
0x3c2: Return(); Pop(0)

0x3c3: Stack[-2] = (bool) 0
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: PushEmpty(int, string)
0x3c7: Stack[-1] = "d7q01"
0x3c8: Call2 0x35e

0x3c9: Pop(1)
0x3ca: Push((int) 1)
0x3cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-2] = (bool) 1
0x3ce: Return(); Pop(0)

0x3cf: Stack[-2] = (bool) 0
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: PushEmpty(bool, object)
0x3d3: Stack[-1] = Stack[-3]
0x3d4: Call2 0x3e7

0x3d5: Pop(1)
0x3d6: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3d7: Stack[-2] = (bool) 1
0x3d8: Return(); Pop(0)

0x3d9: Stack[-2] = (bool) 0
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: PushEmpty(int, string)
0x3dd: Stack[-1] = "ood7DBirdmask1"
0x3de: Call2 0x35e

0x3df: Pop(1)
0x3e0: Push((int) 0)
0x3e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: Stack[-2] = (bool) 1
0x3e4: Return(); Pop(0)

0x3e5: Stack[-2] = (bool) 0
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x3e8: Push((int) 1)
0x3e9: @@ GetItemCount(Stack[-11], Stack[-1])
0x3ea: Pop(1)
0x3eb: Push("bird_mask")
0x3ec: @ GetInvItemByName(Stack[-10], Stack[-1])
0x3ed: Pop(1)
0x3ee: Push("bird_balahon")
0x3ef: @ GetInvItemByName(Stack[-9], Stack[-1])
0x3f0: Pop(1)
0x3f1: Stack[-7] = (bool) 0
0x3f2: Stack[-6] = (bool) 0
0x3f3: Stack[-5] = (int) 0
0x3f4: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x3f5: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3f6: Push((int) 1)
0x3f7: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x3f8: Pop(1)
0x3f9: @@ GetItemID(Stack[-3])
0x3fa: Pop(0)
0x3fb: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x3fc: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fd: Push((int) 1)
0x3fe: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x3ff: Pop(1)
0x400: Push(Stack[-2])
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-7] = (bool) 1
0x403: GOTO 0x40c

0x404: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x405: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x406: Push((int) 1)
0x407: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x408: Pop(1)
0x409: Push(Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40b: Stack[-6] = (bool) 1
0x40c: Stack[-4] = 0
0x40d: Push((int) 1)
0x40e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x40f: GOTO 0x3f4

0x410: Stack[-22] = (bool) 0
0x411: Push(Stack[-7])
0x412: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x413: Push(Stack[-6])
0x414: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x415: Stack[-22] = (bool) 1
0x416: Return(); Pop(20)

0x417: PushEmpty(int, int)
0x418: Push("branch")
0x419: @ GetVariable(Stack[-1], Stack[-2])
0x41a: Pop(1)
0x41b: Push((int) 0)
0x41c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41e: Stack[-3] = (int) 1
0x41f: Return(); Pop(2)

0x420: GOTO 0x426

0x421: Push((int) 1)
0x422: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x423: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x424: Stack[-3] = (int) 2
0x425: Return(); Pop(2)

0x426: Stack[-3] = (int) 3
0x427: Return(); Pop(2)

0x428: Stack[-1] = (int) 515571
0x429: Return(); Pop(0)

0x42a: Stack[-1] = (int) 504029
0x42b: Return(); Pop(0)

0x42c: Stack[-1] = "ui/NPC_bmask.png"
0x42d: Return(); Pop(0)

0x42e: Stack[-1] = "ui/NPC_bmask_b.png"
0x42f: Return(); Pop(0)

0x430: Stack[-1] = (bool) 0
0x431: Return(); Pop(0)

