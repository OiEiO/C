/* 雇佣兵的体力最大值为 M，初始体力值为 0、战斗力为 N、拥有 X 个能量元素。

当雇佣兵的体力值恰好为 M 时，才可以参加一个为期 M 天的战斗期，战斗期结束体力值
将为 00。在同一个战斗期内，雇佣兵每连续战斗 n 天，战斗力就会上升 1 点，n 为当
前战斗期开始时的战斗力。

一个战斗期结束后，雇佣兵需要用若干个能量元素使其体力恢复到最大值 M，从而参加下一
个战斗期。每个能量元素恢复的体力值不超过当前的战斗力。每个能量元素只能使用一次。

请问：雇佣兵的战斗力最大可以到达多少。

说明：只在战斗期结束后可以使用能量元素，可以使用多个能量元素。 */