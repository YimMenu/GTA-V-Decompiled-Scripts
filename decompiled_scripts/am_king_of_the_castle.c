#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<284> Local_89 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_373 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	struct<5> Local_387[32];
	bool bLocal_548 = 0;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	struct<18> Local_553[32];
	struct<3> Local_1130[32];
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	struct<68> Local_1234[1];
	struct<42> Local_1303[32];
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = -1;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 1;
	var uLocal_2685 = 0;
	var uLocal_2686 = 32;
	var uLocal_2687 = 0;
	var uLocal_2688 = -1;
	var uLocal_2689 = 0;
	var uLocal_2690 = -1;
	var uLocal_2691 = 0;
	var uLocal_2692 = -1;
	var uLocal_2693 = 0;
	var uLocal_2694 = -1;
	var uLocal_2695 = 0;
	var uLocal_2696 = -1;
	var uLocal_2697 = 0;
	var uLocal_2698 = -1;
	var uLocal_2699 = 0;
	var uLocal_2700 = -1;
	var uLocal_2701 = 0;
	var uLocal_2702 = -1;
	var uLocal_2703 = 0;
	var uLocal_2704 = -1;
	var uLocal_2705 = 0;
	var uLocal_2706 = -1;
	var uLocal_2707 = 0;
	var uLocal_2708 = -1;
	var uLocal_2709 = 0;
	var uLocal_2710 = -1;
	var uLocal_2711 = 0;
	var uLocal_2712 = -1;
	var uLocal_2713 = 0;
	var uLocal_2714 = -1;
	var uLocal_2715 = 0;
	var uLocal_2716 = -1;
	var uLocal_2717 = 0;
	var uLocal_2718 = -1;
	var uLocal_2719 = 0;
	var uLocal_2720 = -1;
	var uLocal_2721 = 0;
	var uLocal_2722 = -1;
	var uLocal_2723 = 0;
	var uLocal_2724 = -1;
	var uLocal_2725 = 0;
	var uLocal_2726 = -1;
	var uLocal_2727 = 0;
	var uLocal_2728 = -1;
	var uLocal_2729 = 0;
	var uLocal_2730 = -1;
	var uLocal_2731 = 0;
	var uLocal_2732 = -1;
	var uLocal_2733 = 0;
	var uLocal_2734 = -1;
	var uLocal_2735 = 0;
	var uLocal_2736 = -1;
	var uLocal_2737 = 0;
	var uLocal_2738 = -1;
	var uLocal_2739 = 0;
	var uLocal_2740 = -1;
	var uLocal_2741 = 0;
	var uLocal_2742 = -1;
	var uLocal_2743 = 0;
	var uLocal_2744 = -1;
	var uLocal_2745 = 0;
	var uLocal_2746 = -1;
	var uLocal_2747 = 0;
	var uLocal_2748 = -1;
	var uLocal_2749 = 0;
	var uLocal_2750 = -1;
	var uLocal_2751 = -1;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = -1;
	var uLocal_2758 = -1;
	var uLocal_2759 = -1;
	var uLocal_2760 = -1;
	var uLocal_2761 = -1;
	var uLocal_2762 = -1;
	var uLocal_2763 = 0;
	var uLocal_2764 = 32;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	int iLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	var uLocal_3189 = 0;
	bool bLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	var uLocal_3193 = 0;
	int iLocal_3194 = 0;
	var uLocal_3195 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_385 = -1;
	bLocal_3190 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_762(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_746(ScriptParam_0);
	}
	else
	{
		func_714();
	}
	while (true)
	{
		func_713();
		if (func_709())
		{
			func_714();
		}
		if (func_706(29))
		{
			func_714();
		}
		if (func_704())
		{
			func_714();
		}
		if (func_703())
		{
			func_714();
		}
		bLocal_3190 = -1;
		if (BitTest(uLocal_3182, PLAYER::PLAYER_ID()))
		{
			if (BitTest(uLocal_3183, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_701(PLAYER::PLAYER_ID()))
				{
					bLocal_3190 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (func_700() && !func_699())
				{
					iVar2 = func_697();
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
							bLocal_3190 = iVar4;
						}
					}
				}
			}
		}
		func_675();
		if (func_674() < 2)
		{
			if (func_671(2, 0, 1, 0, 0))
			{
				MISC::SET_BIT(&bLocal_548, 24);
				func_629(0, -1);
				func_714();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_628(iVar0, -1);
			func_627(iVar0, -1);
			func_626(iVar0, uVar1);
			MISC::CLEAR_BIT(&bLocal_548, false);
			iVar0++;
		}
		func_578();
		func_546();
		func_543();
		func_523();
		switch (func_522(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_521() == 1)
				{
					func_513(141, func_520(0), 0, 0);
					func_512(1);
				}
				else if (func_521() == 4)
				{
					func_512(4);
				}
				break;
			
			case 1:
				if (func_521() == 1)
				{
					func_20();
				}
				else if (func_521() == 4)
				{
					func_19(&(Local_89.f_211));
					func_512(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_89.f_211)))
				{
					if (func_17(&(Local_89.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_512(4);
				}
				break;
			
			case 2:
				func_512(4);
			
			case 4:
				func_714();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_521())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_674())
	{
		case 0:
			if (BitTest(Local_89.f_213, 0))
			{
				if (!func_18(&(Local_89.f_1.f_3)))
				{
					func_11(&(Local_89.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (BitTest(Local_89.f_213, 2))
			{
				iVar2 = Global_262145.f_11453;
				if (func_18(&(Local_89.f_1.f_1)))
				{
					if (func_9(&(Local_89.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_11454;
				if (func_18(&(Local_89.f_1.f_3)))
				{
					if (func_9(&(Local_89.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (BitTest(Local_89.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	bVar0 = false;
	while (bVar0 < 1)
	{
		func_2(bVar0);
		bVar0++;
	}
}

void func_2(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	bVar0 = func_8(bParam0);
	bVar1 = func_7(bParam0);
	bVar6 = func_18(&(Local_89.f_6[bParam0 /*204*/].f_70));
	if (bVar0 > -1)
	{
		if (BitTest(uLocal_3183, bVar0))
		{
			if (BitTest(uLocal_3182, bVar1))
			{
				if (!BitTest(uLocal_3184, bVar1))
				{
					fVar2 = func_6(bParam0, bVar0);
					if (func_18(&(Local_89.f_1.f_1)))
					{
						if (!func_18(&(Local_89.f_6[bParam0 /*204*/].f_70)))
						{
							func_11(&(Local_89.f_6[bParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_89.f_6[bParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_89.f_1.f_1), 0, 0) <= Global_262145.f_11453) && func_674() != 2)
						{
							iVar7 = func_9(&(Local_89.f_6[bParam0 /*204*/].f_70), 0, 1);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_11457 * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_262145.f_11456) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(bParam0, bVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_89.f_6[bParam0 /*204*/].f_70));
			if (bVar0 > -1)
			{
				func_11(&(Local_89.f_6[bParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(bool bParam0, bool bParam1, float fParam2)
{
	Local_89.f_6[bParam0 /*204*/].f_3[bParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

float func_6(bool bParam0, bool bParam1)
{
	return Local_89.f_6[bParam0 /*204*/].f_3[bParam1];
}

bool func_7(bool bParam0)
{
	return Local_89.f_6[bParam0 /*204*/].f_2;
}

int func_8(bool bParam0)
{
	return Local_89.f_6[bParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_10(int iParam0)
{
	Local_89.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_12()
{
	bool bVar0;
	struct<2> Var1;
	
	bVar0 = false;
	while (bVar0 < 1)
	{
		switch (func_15(bVar0))
		{
			case 0:
				if (func_14(bVar0))
				{
					if (!func_18(&(Local_89.f_1.f_1)))
					{
						Local_89.f_1.f_3 = { Var1 };
						func_11(&(Local_89.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_89.f_6[bVar0 /*204*/].f_70)))
					{
						func_11(&(Local_89.f_6[bVar0 /*204*/].f_70), 0, 1);
					}
					func_13(bVar0, 1);
					if (!BitTest(Local_89.f_213, 2))
					{
						MISC::SET_BIT(&(Local_89.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(bVar0))
				{
					func_13(bVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(bVar0))
				{
					func_13(bVar0, 1);
				}
				break;
		}
		bVar0++;
	}
}

void func_13(bool bParam0, int iParam1)
{
	Local_89.f_6[bParam0 /*204*/] = iParam1;
}

bool func_14(bool bParam0)
{
	return Local_1234[bParam0 /*68*/].f_36;
}

int func_15(bool bParam0)
{
	return Local_89.f_6[bParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_89.f_0 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_494();
	func_493();
	func_491();
	if (func_489())
	{
		func_363(bVar0);
	}
	func_347(141, func_362(0), &uLocal_3195, SYSTEM::TO_FLOAT(Global_262145.f_11762), 1148846080, iLocal_3194);
	if (func_304(0, 1))
	{
		func_303();
	}
	switch (func_674())
	{
		case 0:
			break;
		
		case 1:
			func_302();
			bVar0 = false;
			while (bVar0 < 1)
			{
				func_265(bVar0);
				func_264(bVar0);
				func_262(bVar0);
				if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (!func_260(1, 0))
					{
						if (func_259(NETWORK::PARTICIPANT_ID_TO_INT(), bVar0))
						{
							if (func_258(PLAYER::PLAYER_ID()) == 141)
							{
								if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
								{
									MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_238(1);
								}
							}
							if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
							{
								MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
							}
							if (func_8(bVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!BitTest(bLocal_548, 20))
								{
									MISC::SET_BIT(&bLocal_548, 20);
								}
							}
						}
						if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							if (func_8(bVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
						{
							MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						}
						if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
						{
							MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
						}
						if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
						}
						if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
						{
							MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
						}
						if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
						{
							MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(bVar0) == 0)
				{
					if (!BitTest(bLocal_548, 8))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_237())
							{
								if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!func_304(0, 0))
									{
										if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
											{
												func_236("KOTC_1STHELP", 30000);
												func_235(0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
												MISC::SET_BIT(&bLocal_548, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_234("KOTC_1STHELP"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (!BitTest(bLocal_548, 8))
					{
						MISC::SET_BIT(&bLocal_548, 8);
					}
				}
				if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_233(bVar0) <= 500f)
					{
						if (!BitTest(bLocal_548, 9))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							MISC::SET_BIT(&bLocal_548, 9);
						}
					}
					else if (BitTest(bLocal_548, 9))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						MISC::CLEAR_BIT(&bLocal_548, 9);
					}
				}
				if (bLocal_3190 != -1)
				{
					if (BitTest(bLocal_548, 14) && func_8(bVar0) != bLocal_3190)
					{
						if (!BitTest(bLocal_548, 21))
						{
							func_232(81);
							MISC::SET_BIT(&bLocal_548, 21);
						}
					}
					else if (BitTest(bLocal_548, 21))
					{
						MISC::CLEAR_BIT(&bLocal_548, 21);
					}
				}
				if (func_15(bVar0) != 0)
				{
					if (!BitTest(bLocal_548, 26))
					{
						func_205(141, 0f, 0f, 0, 0, 0, 0);
						MISC::SET_BIT(&bLocal_548, 26);
					}
					if (!BitTest(bLocal_548, 1))
					{
						if (bLocal_3190 != -1)
						{
							if (!func_304(0, 0))
							{
								if (BitTest(uLocal_3182, Local_553[bLocal_3190 /*18*/].f_1))
								{
									if (!BitTest(uLocal_3184, Local_553[bLocal_3190 /*18*/].f_1))
									{
										if (func_8(bVar0) != -1)
										{
											if (func_8(bVar0) != bLocal_3190)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_204(PLAYER::PLAYER_ID(), func_7(bVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_202(81, sVar1, PLAYER::GET_PLAYER_NAME(func_7(bVar0)), func_203(), -1, "KOTC_START", func_203());
											}
											else
											{
												func_201(81, "KOTC_START2", "KOTC_STRAP1", func_203(), -1, func_203(), 1, 0);
												MISC::SET_BIT(&bLocal_548, 14);
												MISC::SET_BIT(&bLocal_548, 15);
											}
										}
										else
										{
											func_201(81, "KOTC_START", "KOTC_STRAP3", func_203(), -1, func_203(), 1, 0);
										}
										MISC::SET_BIT(&bLocal_548, true);
									}
								}
							}
						}
					}
					else if (!BitTest(bLocal_548, 2))
					{
						if (func_200(81))
						{
							MISC::SET_BIT(&bLocal_548, 2);
						}
					}
					else if (bLocal_3190 != -1)
					{
						if (func_8(bVar0) == bLocal_3190)
						{
							if (!BitTest(bLocal_548, 14))
							{
								if (!func_304(0, 0))
								{
									if (BitTest(uLocal_3182, Local_553[bLocal_3190 /*18*/].f_1))
									{
										if (!BitTest(uLocal_3184, Local_553[bLocal_3190 /*18*/].f_1))
										{
											func_201(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2, 1, 0);
											MISC::SET_BIT(&bLocal_548, 14);
										}
									}
								}
							}
							else if (!BitTest(bLocal_548, 15))
							{
								if (func_200(81))
								{
									MISC::SET_BIT(&bLocal_548, 15);
								}
							}
						}
						else
						{
							if (BitTest(bLocal_548, 14))
							{
								MISC::CLEAR_BIT(&bLocal_548, 14);
							}
							if (BitTest(bLocal_548, 15))
							{
								MISC::CLEAR_BIT(&bLocal_548, 15);
							}
						}
					}
					else
					{
						if (BitTest(bLocal_548, 14))
						{
							MISC::CLEAR_BIT(&bLocal_548, 14);
						}
						if (BitTest(bLocal_548, 15))
						{
							MISC::CLEAR_BIT(&bLocal_548, 15);
						}
					}
				}
				else
				{
					func_199();
				}
				if (func_15(bVar0) == 1)
				{
					if (func_8(bVar0) != -1)
					{
						if (bLocal_3190 != -1)
						{
							if (func_8(bVar0) == bLocal_3190)
							{
								if (!func_304(1, 0))
								{
									func_196("KOTC_KINGOB1", 0);
								}
								else
								{
									func_199();
								}
								if (BitTest(bLocal_548, 10))
								{
									if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_237())
											{
												if (!func_304(0, 0))
												{
													if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (BitTest(bLocal_548, 2))
															{
																if (!func_204(PLAYER::PLAYER_ID(), func_7(bVar0)))
																{
																	if (!BitTest(bLocal_548, 10))
																	{
																		func_236("KOTC_YOUKNG", 30000);
																		func_235(1);
																		MISC::SET_BIT(&bLocal_548, 6);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!BitTest(bLocal_548, 7))
									{
										if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()))
										{
											if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												if (!func_237())
												{
													if (!func_304(0, 0))
													{
														if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
															{
																if (BitTest(bLocal_548, 2))
																{
																	if (!func_204(PLAYER::PLAYER_ID(), func_7(bVar0)))
																	{
																		if (!BitTest(bLocal_548, 7))
																		{
																			func_236("KOTC_OTHRKG", 30000);
																			func_235(1);
																			MISC::SET_BIT(&bLocal_548, 7);
																		}
																	}
																	else if (!BitTest(bLocal_548, 11))
																	{
																		func_161("KOTC_OTHRKGGN", func_194(), 1, "KOTC_KINGBLIP", func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0), -1);
																		func_235(1);
																		MISC::SET_BIT(&bLocal_548, 11);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_195(bLocal_3190) || BitTest(Local_387[bLocal_3190 /*5*/].f_4, 12)) && BitTest(uLocal_3183, func_8(bVar0))) && !func_304(1, 0))
								{
									if (func_204(PLAYER::PLAYER_ID(), func_7(bVar0)))
									{
										func_158("KOTC_PERMKNGb", func_7(bVar0), "KOTC_KINGNAME", 1, func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0), 0);
									}
									else
									{
										func_147("KOTC_PERMKNG", &(Local_553[func_8(bVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_199();
								}
							}
						}
						else
						{
							func_199();
						}
					}
					else if (bLocal_3190 != -1)
					{
						if (!func_304(1, 0))
						{
							if (func_259(NETWORK::PARTICIPANT_ID_TO_INT(), bVar0))
							{
								func_196("KOTC_KLLALL", 0);
							}
							else
							{
								func_196("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_199();
						}
						if (!BitTest(bLocal_548, 10))
						{
							if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!func_237())
										{
											if (!func_304(0, 0))
											{
												if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
												{
													if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (func_146(bVar0))
														{
															func_236("KOTC_CONTS", 30000);
															func_235(1);
															MISC::SET_BIT(&bLocal_548, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_199();
					}
				}
				if (bLocal_3190 != -1)
				{
					if (func_15(bVar0) == 2)
					{
						if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_304(1, 0))
						{
							func_196("KOTC_ENTER", 0);
						}
						else
						{
							func_199();
						}
					}
				}
				else
				{
					func_199();
				}
				func_117(bVar0);
				if (func_258(PLAYER::PLAYER_ID()) == 141)
				{
					func_90(bVar0);
				}
				func_89();
				bVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			bVar0 = false;
			while (bVar0 < 1)
			{
				func_87(bVar0);
				func_85(bVar0);
				bVar0++;
			}
			func_199();
			func_303();
			func_81();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			bVar0 = false;
			while (bVar0 < 1)
			{
				if (bLocal_3190 != -1)
				{
					if (BitTest(bLocal_548, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_89.f_6[bVar0 /*204*/].f_74[iVar2 /*4*/] == bLocal_3190)
							{
								if (Local_89.f_6[bVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_117(bVar0);
				if (Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!BitTest(uLocal_3183, Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				bVar0++;
			}
			if (bVar6)
			{
				Local_373.f_5 = 1;
			}
			if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1) && func_80())
			{
				if (!BitTest(bLocal_548, 3))
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						if (func_15(bVar0) == 0)
						{
							if (!func_304(0, 0))
							{
								func_79("KOTC_NOENTRY", 0);
							}
						}
						else if (bVar8)
						{
							if (bLocal_3190 != -1)
							{
								if (!func_304(0, 0))
								{
									if (!func_304(0, 0))
									{
										if (BitTest(uLocal_3182, Local_553[bLocal_3190 /*18*/].f_1))
										{
											if (!BitTest(uLocal_3184, Local_553[bLocal_3190 /*18*/].f_1))
											{
												if (func_195(bLocal_3190))
												{
													func_201(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2, 1, 0);
												}
												else
												{
													func_79("KOTC_NOWIN", 0);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (bLocal_3190 != -1)
							{
								if (!func_304(0, 0))
								{
									if (BitTest(uLocal_3182, Local_553[bLocal_3190 /*18*/].f_1))
									{
										if (!BitTest(uLocal_3184, Local_553[bLocal_3190 /*18*/].f_1))
										{
											if (func_195(bLocal_3190))
											{
												func_77(64, func_78(Local_89.f_6[bVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_76(sVar5, func_78(Local_89.f_6[bVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 0);
											}
										}
									}
								}
							}
						}
						else if (bLocal_3190 != -1)
						{
							if (!func_304(0, 0))
							{
								if (BitTest(uLocal_3182, Local_553[bLocal_3190 /*18*/].f_1))
								{
									if (!BitTest(uLocal_3184, Local_553[bLocal_3190 /*18*/].f_1))
									{
										if (func_195(bLocal_3190))
										{
											sVar5 = "KOTC_OVER3";
											if (func_74(Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_63(Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = PLAYER::GET_PLAYER_NAME(Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(72, func_78(Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_78(Local_89.f_6[bVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 0);
										}
									}
								}
							}
						}
						bVar0++;
					}
					if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
					{
						if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
						{
							MISC::SET_BIT(&bLocal_548, 3);
						}
					}
				}
				if (BitTest(bLocal_548, 3))
				{
					if (!BitTest(bLocal_548, 4))
					{
						if (bLocal_3190 != -1)
						{
							if (((((((func_200(64) || func_200(72)) || func_200(68)) || !func_195(bLocal_3190)) || func_304(1, 1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || func_15(0) == 0) || bLocal_3190 == -1)
							{
								MISC::SET_BIT(&bLocal_548, 4);
							}
						}
						else
						{
							MISC::SET_BIT(&bLocal_548, 4);
						}
					}
				}
				if (BitTest(bLocal_548, 4))
				{
					bVar0 = false;
					while (bVar0 < 1)
					{
						func_629(bVar0, iVar3);
						bVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_304(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (bLocal_3190 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1227, bVar10) && BitTest(bLocal_548, 4))
			{
				if (!func_237() || HUD::IS_PAUSE_MENU_ACTIVE())
				{
					MISC::SET_BIT(&bLocal_548, 17);
					if (BitTest(bLocal_548, 5))
					{
						MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), true);
						func_512(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_237()) && !(func_31(PLAYER::PLAYER_ID(), 0) && (func_30(PLAYER::PLAYER_ID()) || func_28(PLAYER::PLAYER_ID())))) && !func_25(PLAYER::PLAYER_ID()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2810701.f_4657), false);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_234("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2810701.f_4657), true);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2810701.f_4657), true);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (BitTest(Global_2810701.f_4657, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2810701.f_836, 2)) && func_762(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75027) && !Global_59877) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2810701.f_4657), true);
			func_236("AMEV_LBD_HELP", -1);
			func_235(1);
			MISC::CLEAR_BIT(&(Global_2810701.f_4657), false);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2726790 = 1;
}

int func_25(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_762(bParam0, 1, 1))
		{
			if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_26(Global_2689224[bParam0 /*451*/].f_317.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_27()
{
	return -1;
}

bool func_28(bool bParam0)
{
	return func_29(bParam0, 19);
}

var func_29(bool bParam0, int iParam1)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_10.f_4, iParam1);
}

int func_30(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return func_29(bParam0, 9);
	}
	return 0;
}

int func_31(bool bParam0, int iParam1)
{
	if (Global_1893551[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_32(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		if (!bParam6)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2783316 = { func_41(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2783246.f_22), "Leader") && Global_2783246.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2783246.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar17, false, Global_2783246, &Var1, Global_1576211, Global_1576212, Global_1576213);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar17, false, Global_2783246, Global_1576211, Global_1576212, Global_1576213);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_36(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941037.f_5[iVar0 /*53*/] = iParam0;
		Global_1941037.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941037.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941037.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941037.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941037.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941037.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941037 - 1))
	{
		if (iParam0 > Global_1941037.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941037++;
	if (Global_1941037 > 5)
	{
		Global_1941037 = 5;
		return Global_1941037;
	}
	return (Global_1941037 - 1);
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941037.f_5[iVar0 /*53*/] = { Global_1941037.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[bParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_38()
{
	return Global_1574915;
}

bool func_39()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_40(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(bool bParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703660.f_2722)
		{
			return 0;
		}
	}
	func_61(uParam0, uParam0->f_17);
	func_59(uParam0);
	if (func_58())
	{
		func_59(uParam0);
	}
	if (func_57(uParam0->f_1))
	{
		func_50();
		if (Global_2703660.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[0 /*80*/] = { *uParam0 };
			if (func_49(uParam0->f_69, 8192))
			{
				Global_1932201 = 1;
			}
			return 1;
		}
		if (((Global_2703660.f_2400[0 /*80*/].f_1 == 13 || Global_2703660.f_2400[0 /*80*/].f_1 == 53) || Global_2703660.f_2400[0 /*80*/].f_1 == 54) || Global_2703660.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703660.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703660.f_2400[iVar0 + 1 /*80*/] = { Global_2703660.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703660.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_50();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_47(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_49(uParam0->f_69, 128))
			{
				if (func_46(Global_2703660.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
					func_47(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_47(var uParam0, int iParam1)
{
	func_48(uParam0, iParam1);
}

void func_48(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_50()
{
	bool bVar0;
	
	if (Global_2703660.f_2723)
	{
		return;
	}
	if (!Global_78126)
	{
		Global_78126 = 1;
		bVar0 = true;
	}
	func_51();
	if (bVar0)
	{
		Global_78126 = 0;
	}
}

void func_51()
{
	Global_2703660.f_2724 = 0;
	Global_2703660.f_2724.f_582 = 0;
	func_55(&(Global_2703660.f_2724.f_1));
	Global_2703660.f_2724.f_1.f_1 = 0;
	func_52(&(Global_2703660.f_2724.f_1), 1);
}

void func_52(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78126)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78127)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_54(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_53(0);
}

void func_53(int iParam0)
{
	Global_78118 = iParam0;
	Global_78119 = iParam0;
}

int func_54(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_56(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_57(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return Global_2714635.f_19;
}

void func_59(var uParam0)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_72 = func_203();
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_61(var uParam0, bool bParam1)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == func_27() || !func_762(bParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_162(bParam1, -2, 0, 0, 0);
		}
	}
}

void func_62(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
	uParam1->f_19 = func_27();
	uParam1->f_20 = func_27();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

char* func_63(bool bParam0)
{
	char* sVar0;
	bool bVar1;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_73(&(Global_1893551[bParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1893551[bParam0 /*599*/].f_10.f_121 != Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_68(bParam0, 0);
		return sVar0;
	}
	if (((func_29(bParam0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_67(bParam0)) && !func_66(bParam0))
	{
		return func_68(bParam0, 0);
	}
	bVar1 = func_65(bParam0);
	if (bVar1 != func_27())
	{
		if (bVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_64() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_68(bVar1, 0);
			}
		}
	}
	if (bVar1 != func_27())
	{
		sVar0 = func_73(&(Global_1893551[bVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_68(bVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_64()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_65(bool bParam0)
{
	if (bParam0 != func_27())
	{
		return Global_1893551[bParam0 /*599*/].f_10;
	}
	return func_27();
}

int func_66(bool bParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(bParam0) };
	if (func_64())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(bool bParam0)
{
	struct<13> Var0;
	
	if (bParam0 != func_27())
	{
		Var0 = { func_41(bParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_64() || MISC::_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_68(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_70(bParam0, 1))
		{
			return func_69();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_69()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_70(bool bParam0, bool bParam1)
{
	return func_71(bParam0, bParam1, 1);
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_72(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_27() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(bool bParam0, int iParam1)
{
	if (bParam0 != func_27())
	{
		if (Global_1893551[bParam0 /*599*/].f_10 != func_27())
		{
			if (Global_1893551[bParam0 /*599*/].f_10 == bParam0 && Global_1893551[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)
{
	return uParam0;
}

bool func_74(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_75(bParam0))
		{
			return 0;
		}
	}
	return Global_1893551[bParam0 /*599*/].f_10 != func_27();
}

int func_75(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (Global_1893551[bParam0 /*599*/].f_10 != func_27())
		{
			return Global_1893551[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_76(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_33(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_78(float fParam0)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR(fParam0);
	iVar0 = (iVar0 / Global_262145.f_11456);
	iVar0 = (iVar0 * Global_262145.f_11456);
	return iVar0;
}

int func_79(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_33(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_80()
{
	return BitTest(Global_1836833.f_1, 25);
}

void func_81()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_82(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_82(int iParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_520(iParam0);
	if (iParam1 != -1)
	{
		bVar0 = iParam1;
	}
	if (BitTest(uLocal_549, bVar0))
	{
		HUD::SET_MINIMAP_COMPONENT(func_84(iParam0, 0), false, func_83(iParam0, 1));
		if (bVar0 == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_84(iParam0, 1), false, func_83(iParam0, 1));
		}
		MISC::CLEAR_BIT(&uLocal_549, bVar0);
	}
}

int func_83(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 9;
	}
	else if (func_204(PLAYER::PLAYER_ID(), func_7(iParam0)))
	{
		return func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
	}
	return 6;
}

int func_84(int iParam0, bool bParam1)
{
	switch (func_520(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_85(bool bParam0)
{
	if (HUD::DOES_BLIP_EXIST(func_86(bParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_1234[bParam0 /*68*/].f_28));
	}
}

var func_86(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_28;
}

void func_87(bool bParam0)
{
	if (HUD::DOES_BLIP_EXIST(func_88(bParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_1234[bParam0 /*68*/].f_27));
	}
}

var func_88(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_27;
}

void func_89()
{
	bool bVar0;
	
	if (bLocal_3190 != -1)
	{
		if (func_195(bLocal_3190))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!BitTest(bLocal_548, 16))
		{
			AUDIO::START_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
			MISC::SET_BIT(&bLocal_548, 16);
		}
	}
	else if (BitTest(bLocal_548, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&bLocal_548, 16);
	}
}

void func_90(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (((((func_195(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_304(1, 1)) && bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT()) && !func_114(PLAYER::PLAYER_ID(), 0, -1)) && !func_113(PLAYER::PLAYER_ID())) && !func_112())
	{
		if (!BitTest(bLocal_548, 18))
		{
			if (iLocal_3194 == 0)
			{
				iLocal_3194 = 1;
			}
			func_101(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_96();
			MISC::SET_BIT(&bLocal_548, 18);
		}
	}
	else if (BitTest(bLocal_548, 18))
	{
		if (iLocal_3194)
		{
			iLocal_3194 = 0;
		}
		func_91();
		func_101(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		MISC::CLEAR_BIT(&bLocal_548, 18);
	}
}

void func_91()
{
	if (func_95() && !func_94())
	{
		func_93();
	}
	func_92();
	Global_2667223.f_714 = 0;
}

void func_92()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667223.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_93()
{
	if (func_94())
	{
		if (Global_2667223.f_714.f_518 == Global_2667223.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_1233), &(Global_2667223.f_714), 519);
		Global_2667223.f_496 = { Global_2667223.f_490 };
		Global_2667223.f_1752 = 1;
	}
}

int func_94()
{
	if ((Global_2667223.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	if ((Global_2667223.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_96()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_99(func_520(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_97(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_97(struct<3> Param0, var uParam3, var uParam4)
{
	func_98(Param0, uParam3, uParam4);
}

void func_98(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2667223.f_1753)
	{
	}
	if (Global_2667223.f_714 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667223.f_714.f_1[Global_2667223.f_714 /*5*/] = { Param0 };
		Global_2667223.f_714.f_1[Global_2667223.f_714 /*5*/].f_3 = uParam3;
		Global_2667223.f_714.f_1[Global_2667223.f_714 /*5*/].f_4 = uParam4;
		Global_2667223.f_714++;
	}
}

void func_99(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (bParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_100(bParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_100(bParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_100(bParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_100(bParam0, 2);
					break;
			}
			break;
	}
}

float func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11674;
				
				case 1:
					return Global_262145.f_11675;
				
				case 2:
					return Global_262145.f_11676;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11677;
				
				case 1:
					return Global_262145.f_11678;
				
				case 2:
					return Global_262145.f_11679;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11680;
				
				case 1:
					return Global_262145.f_11681;
				
				case 2:
					return Global_262145.f_11682;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11683;
				
				case 1:
					return Global_262145.f_11684;
				
				case 2:
					return Global_262145.f_11685;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11686;
				
				case 1:
					return Global_262145.f_11687;
				
				case 2:
					return Global_262145.f_11688;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11689;
				
				case 1:
					return Global_262145.f_11690;
				
				case 2:
					return Global_262145.f_11691;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11692;
				
				case 1:
					return Global_262145.f_11693;
				
				case 2:
					return Global_262145.f_11694;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11695;
				
				case 1:
					return Global_262145.f_11696;
				
				case 2:
					return Global_262145.f_11697;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_101(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_95())
		{
			func_93();
		}
		Global_2667223.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667223.f_714.f_504 = iParam1;
		Global_2667223.f_714.f_505 = iParam2;
		Global_2667223.f_714.f_506 = iParam10;
		func_91();
		func_104(8, 0, 0, 0, 0);
		Global_2667223.f_714.f_507 = iParam11;
		Global_2667223.f_714.f_512 = iParam3;
		Global_2667223.f_714.f_513 = iParam4;
		Global_2667223.f_714.f_510 = iParam5;
		Global_2667223.f_714.f_511 = iParam6;
		Global_2667223.f_714.f_514 = iParam7;
		Global_2667223.f_714.f_515 = iParam8;
		Global_2667223.f_714.f_516 = iParam9;
		Global_2667223.f_714.f_517 = iParam14;
		Global_2667223.f_714.f_508 = iParam12;
		Global_2667223.f_714.f_509 = iParam13;
		Global_2667223.f_1753 = 1;
	}
	else
	{
		func_102();
	}
}

void func_102()
{
	if (func_95() && !func_94())
	{
		func_93();
	}
	if (func_94())
	{
		func_103();
	}
	else
	{
		func_91();
		func_104(0, 0, 0, 0, 0);
		Global_2667223.f_1753 = 0;
		Global_2667223.f_1752 = 0;
	}
}

void func_103()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_714), &(Global_2667223.f_1233), 519);
	Global_2667223.f_490 = { Global_2667223.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		Global_2667223.f_1752 = 0;
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703660.f_1571.f_703.f_16 != func_27())
	{
		if (BitTest(Global_2689224[Global_2703660.f_1571.f_703.f_16 /*451*/].f_415, 0) && func_105())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674952 = 0;
	}
	Global_2667223.f_490 = iParam0;
	Global_2667223.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667223.f_490.f_2 = iParam1;
	Global_2667223.f_490.f_3 = iParam2;
	Global_2667223.f_490.f_4 = iParam3;
	Global_2667223.f_490.f_5 = iParam4;
}

int func_105()
{
	if ((((((func_111(PLAYER::PLAYER_ID()) == 229 || func_111(PLAYER::PLAYER_ID()) == 191) || func_110()) || func_112()) || func_109()) || Global_2784006.f_227 == 1) || (Global_2667223.f_1753 && func_106(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_106(int iParam0)
{
	if (func_108(iParam0))
	{
		return 1;
	}
	if (func_107(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_107(bool bParam0)
{
	return func_29(bParam0, 20);
}

int func_108(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

bool func_109()
{
	return Global_2784005;
}

int func_110()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

int func_111(bool bParam0)
{
	if (func_31(bParam0, 0))
	{
		return Global_1893551[bParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

bool func_112()
{
	return Global_1836575;
}

int func_113(bool bParam0)
{
	if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_114(bool bParam0, bool bParam1, int iParam2)
{
	if (Global_1853131[bParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
	{
		if (iParam2 == -1 || func_26(Global_2689224[bParam0 /*451*/].f_317.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_115(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

bool func_115(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == func_27())
	{
		return bParam0;
	}
	if (func_116(bParam0) != -1)
	{
		iVar0 = func_26(func_116(bParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_74(bParam0, 0))
			{
				return func_65(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return func_27();
		}
		return Global_2689224[bParam0 /*451*/].f_317.f_9;
	}
	return func_27();
}

int func_116(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_762(bParam0, 1, 1))
		{
			return Global_2689224[bParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && bParam0 == PLAYER::PLAYER_ID()) && func_762(bParam0, 1, 0))
		{
			return Global_2689224[bParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

void func_117(bool bParam0)
{
	if (func_15(bParam0) != 0)
	{
		func_363(bParam0);
		func_118(bParam0);
	}
}

void func_118(bool bParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[3];
	
	if (bLocal_3190 == -1)
	{
		return;
	}
	if (func_304(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_11453 + 1000 - func_9(&(Local_89.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(bParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!BitTest(Local_387[bLocal_3190 /*5*/].f_4, 12))
	{
		if (!func_195(bLocal_3190))
		{
			func_143(iVar6, iVar7, func_144());
			return;
		}
	}
	func_140(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/] = Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = SYSTEM::TO_FLOAT(func_78(Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_78(Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_139(1))
		{
			if (Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_74(Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_162(Local_1234[bParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_78(func_137(bParam0, bLocal_3190));
	func_120(Local_1234[bParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1234[bParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1234[bParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3193, iVar7, func_144(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1234[bParam0 /*68*/].f_53[0 /*4*/] == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (!BitTest(bLocal_548, 23))
		{
			if (func_119(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&bLocal_548, 23);
		}
	}
	else if (BitTest(bLocal_548, 23))
	{
		if (func_119(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&bLocal_548, 23);
	}
}

bool func_119(bool bParam0)
{
	return func_70(PLAYER::PLAYER_ID(), bParam0);
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_134(0) == 0)
	{
		return;
	}
	func_133();
	iVar1 = 0;
	if (((Global_2726308[0] != iParam0 || Global_2726308[1] != iParam1) || Global_2726308[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2726308[0] = iParam0;
	Global_2726308[1] = iParam1;
	Global_2726308[2] = iParam2;
	Global_2726308[3] = 0;
	Global_2726308[4] = 0;
	if (Global_2726308[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726308[0]);
			Global_2726314[0 /*16*/] = { func_132(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_129(iParam3, &(Global_2726314[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726308[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726308[1]);
			Global_2726314[1 /*16*/] = { func_132(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_129(iParam4, &(Global_2726314[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726308[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726308[2]);
			Global_2726314[2 /*16*/] = { func_132(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_129(iParam5, &(Global_2726314[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_27())
			{
				if (func_125(PLAYER::PLAYER_ID()) == 0)
				{
					func_129(iParam6, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_125(PLAYER::PLAYER_ID()) == 0)
			{
				func_129(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_125(PLAYER::PLAYER_ID()) == 0)
			{
				func_129(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_124(sParam10))
	{
		sVar2 = sParam10;
	}
	func_121(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*uParam8 = 0;
}

void func_121(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_123(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_122(7, bVar0);
		Global_1645748.f_4617[bVar0] = uParam0;
		StringCopy(&(Global_1645748.f_4617.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_4617.f_172[bVar0] = iParam2;
		Global_1645748.f_4617.f_216[bVar0] = iParam3;
		Global_1645748.f_4617.f_183[bVar0] = iParam4;
		Global_1645748.f_4617.f_194[bVar0] = iParam5;
		Global_1645748.f_4617.f_249[bVar0] = iParam6;
		Global_1645748.f_4617.f_260[bVar0] = iParam7;
		Global_1645748.f_4617.f_205[bVar0] = uParam8;
		Global_1645748.f_4617.f_314[bVar0] = iParam9;
		Global_1645748.f_4617.f_325[bVar0] = iParam10;
		Global_1645748.f_4617.f_357[bVar0] = iParam11;
		Global_1645748.f_4617.f_238[bVar0] = uParam12;
		Global_1645748.f_4617.f_271[bVar0] = iParam13;
		Global_1645748.f_4617.f_368[bVar0] = iParam14;
		Global_1645748.f_4617.f_379[bVar0] = iParam15;
		Global_1645748.f_4617.f_390[bVar0] = iParam16;
		Global_1645748.f_4617.f_227[bVar0] = iParam17;
	}
}

void func_122(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), bParam1);
}

int func_123(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_124(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_125(bool bParam0)
{
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_128() && !func_127()) || func_126(PLAYER::PLAYER_ID(), 21)) || func_126(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_18(&(Global_1836833.f_13)))
		{
			if (!func_5(&(Global_1836833.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1836833.f_13));
		}
	}
	else if (BitTest(Global_1893551[bParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 9);
}

bool func_126(bool bParam0, int iParam1)
{
	return BitTest(Global_2689224[bParam0 /*451*/].f_215, iParam1);
}

bool func_127()
{
	return Global_1574582.f_1;
}

bool func_128()
{
	return Global_1574582;
}

void func_129(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_123(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_122(6, bVar0);
		Global_1645748.f_3999[bVar0] = iParam0;
		StringCopy(&(Global_1645748.f_3999.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_3999.f_183[bVar0] = iParam3;
		Global_1645748.f_3999.f_172[bVar0] = iParam2;
		Global_1645748.f_3999.f_260[bVar0] = iParam4;
		Global_1645748.f_3999.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1645748.f_3999.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1645748.f_3999.f_443[bVar0] = iParam7;
		Global_1645748.f_3999.f_454[bVar0] = iParam8;
		Global_1645748.f_3999.f_497[bVar0] = iParam9;
		Global_1645748.f_3999.f_508[bVar0] = iParam10;
		Global_1645748.f_3999.f_205[bVar0] = iParam11;
		Global_1645748.f_3999.f_216[bVar0] = iParam12;
		Global_1645748.f_3999.f_227[bVar0] = iParam13;
		Global_1645748.f_3999.f_238[bVar0] = iParam14;
		Global_1645748.f_3999.f_249[bVar0] = iParam15;
		Global_1645748.f_3999.f_519[bVar0] = iParam16;
		Global_1645748.f_3999.f_530[bVar0] = iParam17;
		Global_1645748.f_3999.f_541[bVar0] = iParam18;
		Global_1645748.f_3999.f_552[bVar0] = iParam19;
		Global_1645748.f_3999.f_563[bVar0] = iParam20;
		Global_1645748.f_3999.f_574[bVar0] = iParam21;
		Global_1645748.f_3999.f_585[bVar0] = iParam22;
		Global_1645748.f_3999.f_596[bVar0] = iParam23;
		Global_1645748.f_3999.f_607[bVar0] = iParam24;
		Global_1645748.f_3999.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_131())
		{
			Global_1645748.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1645748.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1645748.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1645748.f_1130 = 1;
			}
			if (func_130())
			{
				Global_1645748.f_1134 = 1;
			}
		}
	}
}

int func_130()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_132(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_133()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2726793 = 1;
}

int func_134(bool bParam0)
{
	if (func_136())
	{
		return 0;
	}
	if (func_135())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_762(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_135()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_136()
{
	return BitTest(Global_2621446, 12);
}

float func_137(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_138(bParam0, bParam1);
	fVar1 = func_6(bParam0, bParam1);
	return (fVar0 + fVar1);
}

float func_138(int iParam0, int iParam1)
{
	return Local_89.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_139(bool bParam0)
{
	return func_74(PLAYER::PLAYER_ID(), bParam0);
}

void func_140(int iParam0)
{
	if (func_142(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2810701.f_5031, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2810701.f_5033)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2810701.f_5033));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2810701.f_5041 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2810701.f_5041);
				Global_2810701.f_5041 = -1;
			}
			Global_2810701.f_5031 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2810701.f_5031, 0))
		{
			if (BitTest(Global_2810701.f_5031, 4))
			{
				if (!BitTest(Global_2810701.f_5031, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2810701.f_5033)))
						{
							StringCopy(&(Global_2810701.f_5033), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2810701.f_5031), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2810701.f_5031, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2810701.f_5031, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2810701.f_5031), true);
			}
			else if (!BitTest(Global_2810701.f_5031, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2810701.f_5033), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2810701.f_5031), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2810701.f_5031, 3))
				{
					Global_2810701.f_5041 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2810701.f_5041, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2810701.f_5031), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2810701.f_5031, 0))
			{
				Global_2810701.f_5031 = 0;
				Global_2810701.f_5041 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2810701.f_5031), false);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2810701.f_5031, 2))
				{
					MISC::SET_BIT(&(Global_2810701.f_5031), 2);
					MISC::SET_BIT(&(Global_2810701.f_5031), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2810701.f_5031), 5);
					MISC::CLEAR_BIT(&(Global_2810701.f_5031), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2810701.f_5031, 0))
		{
			Global_2810701.f_5031 = 0;
			Global_2810701.f_5041 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2810701.f_5031), false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2810701.f_5031), 2);
				MISC::SET_BIT(&(Global_2810701.f_5031), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2810701.f_5031), 2);
				MISC::CLEAR_BIT(&(Global_2810701.f_5031), 5);
			}
		}
	}
}

int func_141(bool bParam0)
{
	if (bParam0 != func_27() && func_762(bParam0, 1, 1))
	{
		return Global_2689224[bParam0 /*451*/].f_317.f_16;
	}
	return -1;
}

int func_142(bool bParam0)
{
	if (bParam0 != func_27())
	{
		if (func_762(bParam0, 1, 1))
		{
			if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_26(Global_2689224[bParam0 /*451*/].f_317.f_6) == 19;
			}
		}
	}
	return 0;
}

void func_143(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_134(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_124(sParam2))
	{
		sVar0 = sParam2;
	}
	func_121(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0, -1);
}

char* func_144()
{
	return "HUD_COUNTDOWN";
	switch (func_258(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_145())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_145()
{
	if (func_258(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2810701.f_5115;
	}
	return -1;
}

bool func_146(bool bParam0)
{
	return Local_89.f_6[bParam0 /*204*/].f_72;
}

int func_147(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_157(sParam0, sParam1) && Global_1574755.f_56 == Global_1574755.f_58)
	{
		return 0;
	}
	uVar0 = Global_1574755.f_54;
	func_151();
	Global_1574755 = 9;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	StringCopy(&(Global_1574755.f_16), sParam1, 64);
	Global_1574755.f_58 = iParam3;
	Global_1574755.f_56 = iParam3;
	Global_1574755.f_54 = uVar0;
	func_150();
	func_149(bParam2);
	func_148();
	return 1;
}

void func_148()
{
	MISC::SET_BIT(&(Global_1574755.f_59), true);
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574755.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574755.f_59), false);
}

void func_150()
{
	Global_1574755.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_151()
{
	func_153();
	func_152(0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574755 = 20;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
	if (bVar0)
	{
		Global_1574755.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574755.f_12), "", 16);
	StringCopy(&(Global_1574755.f_16), "", 64);
	StringCopy(&(Global_1574755.f_32), "", 64);
	Global_1574755.f_52 = 0;
	Global_1574755.f_53 = 0;
	Global_1574755.f_54 = 0;
	Global_1574755.f_55 = -1;
	Global_1574755.f_56 = 0;
	Global_1574755.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_153()
{
	if (!func_156())
	{
	}
	if (func_155())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574755.f_12));
		func_154();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_154()
{
	switch (Global_1574755)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		default:
	}
}

int func_155()
{
	if (Global_1574755 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_156()
{
	if (!func_155())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574755.f_12));
	func_154();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_157(char* sParam0, char* sParam1)
{
	if (!func_155())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

void func_158(char* sParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_159(sParam0, PLAYER::GET_PLAYER_NAME(bParam1), sParam2, bParam5, iParam3))
	{
		Global_1574755 = 15;
		Global_1574755.f_56 = iParam3;
		Global_1574755.f_57 = iParam4;
		Global_1574755.f_54 = bParam1;
	}
}

int func_159(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_160(sParam0, sParam1, sParam2) && Global_1574755.f_56 == Global_1574755.f_58)
	{
		return 0;
	}
	func_151();
	Global_1574755 = 10;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	StringCopy(&(Global_1574755.f_16), sParam1, 64);
	StringCopy(&(Global_1574755.f_32), sParam2, 64);
	Global_1574755.f_58 = uParam4;
	Global_1574755.f_56 = uParam4;
	func_150();
	func_149(bParam3);
	func_148();
	return 1;
}

bool func_160(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_155())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574755.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574755.f_32));
}

void func_161(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam5);
}

int func_162(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_701(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81734[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_701(PLAYER::PLAYER_ID()) || (func_193() && func_700())) && !BitTest(Global_2810701.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_192();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_762(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81734[iParam1] != -1)
							{
								return func_190(iParam1, bParam0, 0);
							}
							else
							{
								return func_175(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_175(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81734[iParam1] != -1)
				{
					return func_190(iParam1, bParam0, 0);
				}
				else
				{
					return func_163(0, -1, 0);
				}
			}
			else
			{
				return func_163(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81734[iParam1] != -1)
		{
			return func_190(iParam1, bParam0, 0);
		}
		else
		{
			return func_175(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_175(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_163(bool bParam0, int iParam1, bool bParam2)
{
	return func_164(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_164(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_174() || (func_173() && func_171())) && Global_1655692.f_1)
	{
		if (bParam1)
		{
			return func_170(iParam2, iVar0);
		}
		else
		{
			return func_170(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_169(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_168(1);
				}
				else
				{
					return func_168(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_165(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_165(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_168(1);
	}
	return func_168(0);
}

int func_165(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_167(iParam0, iParam1, iParam3);
	if (func_166(Global_4718592.f_87009, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_166(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138376 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9278[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_169(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_168(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 0);
				
				case 1:
					return BitTest(Global_4718592.f_544, 1);
				
				case 2:
					return BitTest(Global_4718592.f_544, 2);
				
				case 3:
					return BitTest(Global_4718592.f_544, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 4);
				
				case 1:
					return BitTest(Global_4718592.f_544, 5);
				
				case 2:
					return BitTest(Global_4718592.f_544, 6);
				
				case 3:
					return BitTest(Global_4718592.f_544, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 8);
				
				case 1:
					return BitTest(Global_4718592.f_544, 9);
				
				case 2:
					return BitTest(Global_4718592.f_544, 10);
				
				case 3:
					return BitTest(Global_4718592.f_544, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 12);
				
				case 1:
					return BitTest(Global_4718592.f_544, 13);
				
				case 2:
					return BitTest(Global_4718592.f_544, 14);
				
				case 3:
					return BitTest(Global_4718592.f_544, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_170(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_167(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_171()
{
	if (func_172())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_142560, 4);
}

bool func_172()
{
	return BitTest(Global_4718592.f_132162, 12);
}

bool func_173()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_142560, 0);
	}
	return ((BitTest(Global_4718592.f_142560, 0) || Global_1923666) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_174()
{
	if (func_172() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_175(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853131[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_181())
			{
				iVar3 = func_180(bParam0);
				if (!iVar3 == -1)
				{
					return func_178(iVar3);
				}
			}
			if ((func_177(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_169(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_168(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_176(1);
			}
			else
			{
				return func_164(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853131[bParam0 /*888*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_168(1);
			}
			else
			{
				return func_164(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_180(bParam0);
	if (!iVar4 == -1)
	{
		return func_178(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_176(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_177(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_179(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_179(int iParam0)
{
	return Global_2680263.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_180(bool bParam0)
{
	if (!bParam0 == func_27())
	{
		if (func_74(bParam0, 1))
		{
			return Global_2680263.f_818.f_11[func_65(bParam0)];
		}
	}
	return -1;
}

int func_181()
{
	if ((((((func_189() || func_188()) || func_58()) || func_187()) || func_186()) || func_184()) || func_182())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	return func_183(Global_4718592.f_87009);
}

int func_183(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184()
{
	return func_185(Global_4718592.f_87009);
}

int func_185(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30700[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_186()
{
	return Global_2714635.f_24;
}

bool func_187()
{
	return Global_2714635.f_21;
}

var func_188()
{
	return Global_2714635.f_18;
}

var func_189()
{
	return Global_2714635.f_17;
}

int func_190(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058068.f_14[iParam0];
	if (func_181())
	{
		iVar2 = func_180(iParam1);
		if (!iVar2 == -1)
		{
			return func_178(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_595[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_27())
	{
		if (Global_4718592.f_81734[iParam0] != -1 && Global_4718592.f_81734[iParam0] <= 4)
		{
			if (Global_4718592.f_81734[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81734[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81734[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81734[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81734[iParam0];
			}
		}
		else
		{
			iVar0 = func_164(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_191(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_169(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_176(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_191(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138533;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138534;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138535;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138536;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_192()
{
	return Global_2621446.f_2;
}

var func_193()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

char* func_194()
{
	bool bVar0;
	char* sVar1;
	
	bVar0 = func_65(PLAYER::PLAYER_ID());
	if (bVar0 != func_27())
	{
		if (bVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_29(bVar0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_67(bVar0)) && !func_66(bVar0))
			{
				return func_68(bVar0, 0);
			}
			if (!func_64() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_68(bVar0, 0);
			}
		}
		sVar1 = func_73(&(Global_1893551[bVar0 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_68(bVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_195(bool bParam0)
{
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_196(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_197(sParam0))
	{
		return;
	}
	func_151();
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	func_150();
	func_149(bParam1);
	func_148();
}

bool func_197(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		return func_198(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12));
}

bool func_198(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

void func_199()
{
	if (!func_155())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574755.f_9)
	{
		return;
	}
	func_151();
}

bool func_200(int iParam0)
{
	return Global_2703660.f_2400[0 /*80*/].f_1 == iParam0;
}

int func_201(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_47(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_202(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_62(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_45(&Var0);
}

int func_203()
{
	return 21;
}

int func_204(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(bParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_205(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2810701.f_5041 = -1;
	bVar0 = (func_31(PLAYER::PLAYER_ID(), 0) && func_30(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_230(func_231(iParam0), 1);
	}
	else
	{
		func_227(iParam0, -1);
		if (func_226(PLAYER::PLAYER_ID()))
		{
			Global_1836833.f_3 = iParam0;
		}
		else
		{
			func_225(iParam0);
		}
		Global_1836833.f_4 = -1;
		if (func_226(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 5);
		}
		if (((func_128() && !func_127()) || func_126(PLAYER::PLAYER_ID(), 21)) || func_126(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 17);
		MISC::SET_BIT(&(Global_1836833.f_1), 20);
		if (func_224(iParam0))
		{
			func_223();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_219(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_217(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836833.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				func_215(1);
				if (func_212(0))
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_210(1);
			MISC::SET_BIT(&(Global_1836833.f_1), 12);
		}
		if (bParam5)
		{
			func_209();
			MISC::SET_BIT(&(Global_1836833.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_206(iParam0))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 21);
			}
		}
	}
	Global_2783207 = 1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_208(iParam0) == 1)
	{
		return 1;
	}
	if (func_207())
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	switch (func_145())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

void func_209()
{
	MISC::SET_BIT(&(Global_2810701.f_5032), false);
}

void func_210(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100032.f_8 = 1;
	}
	else
	{
		Global_100032.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_211(iVar0);
		iVar0++;
	}
}

void func_211(int iParam0)
{
	Global_100032.f_196[iParam0] = 1;
	Global_100032.f_195 = 1;
}

int func_212(int iParam0)
{
	var uVar0;
	
	uVar0 = func_213(2536, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_214(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

void func_215(int iParam0)
{
	if (func_216() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_216()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_218(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_218(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_219(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_220())
	{
		return;
	}
	fVar0 = (Global_2810701.f_5189 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2810701.f_5189 = fParam0;
	Global_2810701.f_5190 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_220()
{
	switch (func_222())
	{
		case 0:
			return func_221();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_221()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_222()
{
	return Global_31511;
}

void func_223()
{
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_207 = 0;
	MISC::CLEAR_BIT(&(Global_2810701.f_4630), true);
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_225(int iParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

bool func_226(bool bParam0)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 2);
}

void func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_228(func_229(iVar0)))
		{
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
	}
}

bool func_228(int iParam0)
{
	var uVar0;
	
	uVar0 = func_213(2482, -1, 0);
	return BitTest(uVar0, iParam0);
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return 12;
		
		case 133:
			return 13;
		
		case 136:
			return 20;
		
		case 138:
			return 15;
		
		case 139:
			return 16;
		
		case 129:
			return 18;
		
		case 141:
			return 19;
		
		case 144:
			return 14;
		
		case 146:
			return 17;
		
		case 236:
			return 21;
		
		case 150:
			return 21;
		
		default:
	}
	return Global_262145.f_23911;
}

void func_230(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
		{
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
		}
	}
	else if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_47(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

float func_233(bool bParam0)
{
	return Local_1234[bParam0 /*68*/].f_40;
}

bool func_234(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_235(int iParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_237())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_236(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_237()
{
	return Global_2703660.f_2400[0 /*80*/].f_1 != 0;
}

void func_238(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!func_107(PLAYER::PLAYER_ID()) && !func_257(PLAYER::PLAYER_ID())) && !func_125(PLAYER::PLAYER_ID())) && !func_256(PLAYER::PLAYER_ID()))
			{
				if (func_128())
				{
					func_248(2, 0, 1);
					func_247();
				}
				if (func_228(func_229(func_258(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_213(2482, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_229(func_258(PLAYER::PLAYER_ID())));
					func_247();
				}
				if (func_246())
				{
					func_247();
				}
				if (func_258(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (func_245(PLAYER::PLAYER_ID()))
					{
						func_244();
					}
					func_241(func_243(func_258(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		func_239();
	}
}

void func_239()
{
	if (func_240())
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

bool func_240()
{
	return BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

void func_241(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_242() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574740.f_1[iVar0] == -1)
			{
				Global_1574740.f_1[iVar0] = iParam0;
				Global_1574740 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_244()
{
	if (!func_240())
	{
		Global_2810701.f_6700 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

int func_245(bool bParam0)
{
	if (func_258(bParam0) == 236 || func_258(bParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_246()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_247()
{
	if (func_246())
	{
		Global_2703660.f_833.f_16 = 1;
	}
}

void func_248(int iParam0, int iParam1, bool bParam2)
{
	if (func_128())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_255(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_255(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_254(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_254(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_253()) && !func_249(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_249(bool bParam0)
{
	if (func_250(bParam0, 1, 0))
	{
		if (Global_1853131[bParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_250(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_251(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[bParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_251(bool bParam0)
{
	return func_252(bParam0);
}

var func_252(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_253()
{
	return Global_2714635.f_841;
}

void func_254(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_128())
		{
			if (func_762(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_762(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_255(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_256(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2784005;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_257(bool bParam0)
{
	if (func_226(bParam0))
	{
		return 1;
	}
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 8);
}

int func_258(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/];
	}
	return -1;
}

bool func_259(bool bParam0, bool bParam1)
{
	return Local_387[bParam0 /*5*/].f_1[bParam1];
}

int func_260(bool bParam0, bool bParam1)
{
	if (func_257(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_125(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_261(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_261(bool bParam0)
{
	return func_36(bParam0, 0);
}

void func_262(int iParam0)
{
	if (!BitTest(bLocal_548, 22))
	{
		if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_304(1, 1))
				{
					if (Local_89.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_89.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_89.f_6[iParam0 /*204*/].f_74[0 /*4*/] != NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_204(PLAYER::PLAYER_ID(), Local_89.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_263();
									MISC::SET_BIT(&bLocal_548, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_263()
{
	MISC::SET_BIT(&(Global_2810701.f_1797), 19);
}

void func_264(int iParam0)
{
	if (iLocal_385 != func_8(iParam0))
	{
		iLocal_385 = func_8(iParam0);
		if (iLocal_385 > -1)
		{
			iLocal_386++;
			MISC::SET_BIT(&bLocal_548, 25);
		}
	}
}

void func_265(int iParam0)
{
	if (func_674() == 1)
	{
		if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT() && !func_260(1, 0))
		{
			if (!func_218(PLAYER::PLAYER_ID()))
			{
				func_266(1);
			}
		}
		else if (func_218(PLAYER::PLAYER_ID()))
		{
			func_266(0);
		}
	}
}

void func_266(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727422 = func_258(PLAYER::PLAYER_ID());
			if (Global_2727422 == -1)
			{
				Global_2727422 = Global_1836833.f_4;
			}
			if (func_301(Global_2727422) == 0)
			{
				if (func_300(1) > 0)
				{
					func_299(26, -1);
				}
			}
			if (func_128())
			{
				func_248(2, 0, 1);
				func_247();
			}
			if (func_228(func_229(func_258(PLAYER::PLAYER_ID()))))
			{
				uVar1 = func_213(2482, -1, 0);
				MISC::CLEAR_BIT(&uVar1, func_229(func_258(PLAYER::PLAYER_ID())));
				func_247();
			}
			if (func_246())
			{
				func_247();
			}
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), false);
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!func_298() && !func_297()) && !func_296())
		{
			Global_2727422 = -1;
			func_295(26, -1);
		}
		else if (func_301(Global_2727422) == 0)
		{
			iVar0 = func_278(1);
			if (iVar0 > 0)
			{
				func_273(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_269(1934, 1, -1);
				func_273(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_267(26, -1))
		{
			Global_2727422 = -1;
			func_295(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), false);
	}
}

bool func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = func_268(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_214(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_272(iParam0))
	{
		func_271(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_270(iParam0, iVar0, iParam2, 1);
	}
}

void func_270(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_214(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_214(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_214(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_214(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_214(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_214(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_214(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_214(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_214(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_214(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_214(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_214(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_214(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_214(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_214(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_214(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_214(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_214(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_214(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_214(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_214(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_214(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_214(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_214(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_214(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_214(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_214(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_214(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_214(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_214(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_214(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_214(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_214(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_214(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_214(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_214(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_214(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_214(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_214(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_214(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_214(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_214(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_214(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_214(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_214(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_214(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_214(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_214(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_214(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_214(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_214(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_214(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_214(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_271(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_214(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_272(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10874:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_277(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_276(iParam0))
	{
		func_275(iParam0, iVar0);
	}
	else
	{
		func_274(iParam0, iVar0);
	}
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655496 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655497 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655498 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655499 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655500 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655501 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655502 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655503 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_276(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_292();
	if (Global_2726298 == 0)
	{
		return 0;
	}
	if (func_296())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_291() || func_289()))
		{
			Global_2725237 = 1;
		}
	}
	Global_2726298 = 0;
	if (Global_1577880)
	{
		iVar0 = 1;
	}
	if (Global_2725237)
	{
		iVar0 = 1;
	}
	if (Global_2725236)
	{
		iVar0 = 1;
	}
	if (func_49(Global_111950.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725176)
	{
		iVar0 = 1;
	}
	if (func_288(512))
	{
		iVar0 = 1;
	}
	if (func_287(128))
	{
		iVar0 = 1;
	}
	if (Global_1577904 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_286())
	{
		iVar0 = 0;
	}
	if (Global_2725731)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_284())
		{
			if (Global_4718592.f_87544 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_283())
	{
		iVar0 = 0;
	}
	if ((Global_2725237 || Global_2725236) || Global_1577880)
	{
		if (func_289())
		{
			iVar0 = 0;
		}
	}
	Global_2725731 = 0;
	Global_2725236 = 0;
	Global_2725237 = 0;
	Global_1577880 = 0;
	Global_2725176 = 0;
	func_281(&(Global_111950.f_1), 32);
	func_280(512);
	func_279(128);
	return iVar0;
}

void func_279(int iParam0)
{
	Global_112007 = (Global_112007 - (Global_112007 && iParam0));
}

void func_280(int iParam0)
{
	Global_112008 = (Global_112008 - (Global_112008 && iParam0));
}

void func_281(var uParam0, int iParam1)
{
	func_282(uParam0, iParam1);
}

void func_282(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_283()
{
	if (((Global_1836598 || Global_1836568) || func_36(PLAYER::PLAYER_ID(), 0)) || func_193())
	{
		return 1;
	}
	return 0;
}

int func_284()
{
	switch (func_285())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_285()
{
	return Global_2715551.f_1.f_2822;
}

bool func_286()
{
	return Global_1575030;
}

bool func_287(int iParam0)
{
	return (Global_112007 && iParam0) != 0;
}

bool func_288(int iParam0)
{
	return (Global_112008 && iParam0) != 0;
}

int func_289()
{
	if (func_301(Global_2727422))
	{
		return 0;
	}
	if (func_290(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_290(bool bParam0, int iParam1)
{
	if (Global_1893551[bParam0 /*599*/] == iParam1)
	{
		return func_218(bParam0);
	}
	return 0;
}

int func_291()
{
	if (func_301(Global_2727422))
	{
		return 0;
	}
	if (func_218(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_292()
{
	if (Global_1577904 == 1 && ((func_186() || func_293()) || func_182()))
	{
		return 1;
	}
	return 0;
}

int func_293()
{
	return func_294(Global_4718592.f_87009);
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31366[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_295(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_268(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

bool func_296()
{
	return BitTest(Global_1574589, 0);
}

bool func_297()
{
	return Global_1575022;
}

bool func_298()
{
	return Global_1575054;
}

void func_299(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_268(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_292();
	if (Global_1577904 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_286())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_284())
		{
			if (Global_4718592.f_87544 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_283())
	{
		iVar0 = 0;
	}
	Global_2726298 = 1;
	return iVar0;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11654)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11656)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11653)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11657)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11658)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11659)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11655)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11660)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11661)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11662)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11663)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_302()
{
	if (func_304(0, 0))
	{
		return;
	}
	if (BitTest(bLocal_548, 25))
	{
		if (iLocal_385 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (Local_373.f_11 == 0)
			{
				Local_373.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
		}
		MISC::CLEAR_BIT(&bLocal_548, 25);
	}
}

void func_303()
{
	if (func_234("KOTC_1STHELP"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_234("KOTC_OTHRKG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_234("KOTC_YOUKNG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_234("KOTC_CONTS"))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_304(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (BitTest(bLocal_548, 17))
	{
		return 1;
	}
	if (func_346(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_135())
	{
		return 1;
	}
	if (func_228(19))
	{
		return 1;
	}
	if (!func_319(0, 1, 1))
	{
		return 1;
	}
	if (func_312())
	{
		return 1;
	}
	if (func_307(4))
	{
		return 1;
	}
	if (func_306())
	{
		return 1;
	}
	if (func_260(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1932195)
	{
		return 1;
	}
	if (func_305(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_305(bool bParam0)
{
	if (!func_762(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2);
}

bool func_306()
{
	return Global_100032.f_376 > 0;
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (func_306())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_311(iVar0) == iParam0)
			{
				if (func_308(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_308(int iParam0)
{
	return func_309(iParam0, 6, 1);
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100032.f_1392[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_222() == 0)
		{
			return BitTest(func_213(func_310(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_112922.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10835;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12581;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

int func_312()
{
	if (BitTest(Global_2810701.f_428.f_5, 0))
	{
		return 1;
	}
	if (func_314() && Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_95 != 3)
	{
		return 1;
	}
	if (func_313() && Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_95 != 3)
	{
		return 1;
	}
	if (Global_2656913)
	{
		return 1;
	}
	if (Global_1836833.f_20)
	{
		return 1;
	}
	return 0;
}

var func_313()
{
	return BitTest(Global_2714635, 5);
}

int func_314()
{
	if (((func_318() || func_317()) || func_316()) || func_315())
	{
		return 1;
	}
	return 0;
}

var func_315()
{
	return BitTest(Global_2714635, 1);
}

var func_316()
{
	return BitTest(Global_2714635, 2);
}

var func_317()
{
	return BitTest(Global_2714635, 20);
}

bool func_318()
{
	return Global_2714635.f_698;
}

int func_319(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_345(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_126(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_126(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_249(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_344())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_343(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_342())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_107(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_334(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_333(PLAYER::PLAYER_ID()) != func_27() && func_333(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_331(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_329(func_330()) && !func_245(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_298())
	{
		return 0;
	}
	if (func_135())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_327())
	{
		return 0;
	}
	if (func_126(PLAYER::PLAYER_ID(), 0) || func_126(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_126(PLAYER::PLAYER_ID(), 12) || func_126(PLAYER::PLAYER_ID(), 14)) || func_126(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_346(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_326() && !Global_2783591)
		{
			return 0;
		}
	}
	if (func_325(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_306())
	{
		return 0;
	}
	if (Global_1932195)
	{
		return 0;
	}
	if (func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (func_322(PLAYER::PLAYER_ID()) && Global_1852777.f_172)
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (Global_2809760)
	{
		return 0;
	}
	if (Global_1964197)
	{
		return 0;
	}
	if (!func_108(PLAYER::PLAYER_ID()))
	{
		if (func_320(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_320(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1890190[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

bool func_321()
{
	return Global_1946941.f_518;
}

int func_322(bool bParam0)
{
	if (func_323(Global_1853131[bParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_324()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_325(bool bParam0)
{
	return BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 11);
}

bool func_326()
{
	return BitTest(Global_1958928, 5);
}

int func_327()
{
	if (func_328() == 0)
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	return Global_1574631.f_18;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_330()
{
	return Global_2703660.f_2400[0 /*80*/].f_1;
}

int func_331(bool bParam0, int iParam1)
{
	if (func_31(bParam0, 0))
	{
		return func_332(Global_1893551[bParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_333(bool bParam0)
{
	return Global_1893551[bParam0 /*599*/].f_10.f_35;
}

int func_334(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_341(bParam0) && !func_226(bParam0)) && !BitTest(Global_1893551[bParam0 /*599*/].f_1, 8));
	bVar2 = func_107(bParam0);
	bVar3 = func_128();
	uVar4 = func_335();
	if ((bVar1 && (func_108(bParam0) || func_218(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(bParam0)) && !func_28(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810701.f_5194.f_220 != iVar0)
	{
		Global_2810701.f_5194.f_220 = iVar0;
	}
	return iVar0;
}

int func_335()
{
	if ((func_29(PLAYER::PLAYER_ID(), 21) || func_29(PLAYER::PLAYER_ID(), 22)) || func_339())
	{
		return 1;
	}
	if (func_337())
	{
		func_336(22);
		return 1;
	}
	return 0;
}

void func_336(bool bParam0)
{
	MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), bParam0);
}

int func_337()
{
	if (func_31(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_128() && !func_127()) || func_126(PLAYER::PLAYER_ID(), 21)) || func_126(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_338(27);
		}
	}
	return 0;
}

void func_338(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), bParam0);
}

int func_339()
{
	return func_340(424, -1);
}

int func_340(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860791[iParam0 /*3*/][func_214(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_341(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_342()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 5;
}

int func_343(bool bParam0)
{
	if (Global_2689224[bParam0 /*451*/].f_268.f_4 != 0 || Global_2689224[bParam0 /*451*/].f_268.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_344()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

bool func_345(bool bParam0, int iParam1)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_10.f_5, iParam1);
}

int func_346(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_27())
	{
		return 0;
	}
	if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[bParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[bParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_347(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1836833.f_6 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	if (fVar0 < fParam5 && !func_226(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !func_126(PLAYER::PLAYER_ID(), 21)) && !func_126(PLAYER::PLAYER_ID(), 25))
		{
			func_361(Param1, 1, 0);
		}
		if ((!*uParam4 || BitTest(Global_1836833.f_1, 3)) && func_762(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			func_219(func_360(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_359(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_358(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 8);
			}
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_226(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836833.f_1, 3) && func_762(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_357();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11666);
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::SET_BIT(&(Global_1836833.f_1), 3);
		}
	}
	else if ((*uParam4 || BitTest(Global_1836833.f_1, 3)) && func_762(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam4 = 0;
		func_357();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 8);
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_348();
		}
	}
}

void func_348()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_24), &Global_2671507, 2);
	MISC::_COPY_MEMORY(&(Global_2667223.f_26), &Global_2671509, 19);
	func_355();
	func_351(1, 1, 0);
	func_349();
}

void func_349()
{
	func_350(0, 0);
}

void func_350(int iParam0, int iParam1)
{
	Global_2667223.f_22 = iParam0;
	Global_2667223.f_23 = iParam1;
}

void func_351(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_45), &Global_2671528, 323);
	}
	else
	{
		Global_2667223.f_45 = { Global_2671528 };
		Global_2667223.f_45.f_49 = { Global_2671528.f_49 };
		Global_2667223.f_45.f_52 = Global_2671528.f_52;
		Global_2667223.f_45.f_53 = Global_2671528.f_53;
	}
	if (bParam0)
	{
		func_354();
	}
	if (!bParam2)
	{
		func_101(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_353(0);
	func_352();
}

void func_352()
{
	struct<6> Var0;
	
	if (Global_2667223.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667223.f_490 = { Var0 };
	}
}

void func_353(bool bParam0)
{
	if (bParam0)
	{
		Global_2667223.f_713 = 0;
	}
	else
	{
		Global_2667223.f_713 = 1;
	}
}

void func_354()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_368), &Global_2671851, 121);
}

void func_355()
{
	func_356();
}

void func_356()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667223.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667223.f_2262 = 0;
}

void func_357()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2810701.f_5189 < 1f)
		{
			return;
		}
	}
	Global_2810701.f_5190 = -1;
	Global_2810701.f_5189 = 1f;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_359(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_360(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
		case 150:
			return 0f;
		
		default:
	}
	if (func_208(iParam0) == 1)
	{
		return 0f;
	}
	return 1f;
}

void func_361(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2667223.f_45.f_49 = { Param0 };
	Global_2667223.f_45.f_52 = iParam3;
	Global_2667223.f_45.f_53 = iParam4;
}

Vector3 func_362(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_24;
}

void func_363(bool bParam0)
{
	int iVar0;
	
	if (func_304(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1303[iVar0 /*42*/] = -1;
		Local_1303[iVar0 /*42*/].f_1 = func_27();
		Local_1303[iVar0 /*42*/].f_9 = 0;
		Local_1303[iVar0 /*42*/].f_31 = -1;
		if (Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1303[iVar0 /*42*/] = Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1303[iVar0 /*42*/].f_1 = Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1303[iVar0 /*42*/].f_9 = func_78(Local_89.f_6[bParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_364(&Local_1303, &(Local_1234[bParam0 /*68*/].f_66), 27, &uLocal_2648, &uLocal_2764, -1, 0, 0);
}

void func_364(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_488(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_486() || iParam2 == 28)
	{
		if (func_438(iParam1, iParam2, uParam3, Global_1836353, 0, func_489(), sParam7))
		{
			func_437(1);
			if ((!func_436() && !func_435()) || BitTest(Global_2810701.f_4657, 1))
			{
				if (func_434())
				{
					func_432();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_431(1);
						Global_1836353 = 0;
						iVar54 = -1;
						if (Global_1836576 != 1)
						{
							func_430(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_762(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_36(bVar35, 0))
									{
										if ((func_426(bVar35) || Global_2689224[bVar35 /*451*/].f_243 != -1) || func_425(bVar35))
										{
											bVar44 = bVar35;
											if (func_75(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_422(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_419(PLAYER::PLAYER_ID(), 0) && func_111(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_418())
							{
								if (func_762(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									bVar35 = func_27();
								}
							}
							else
							{
								bVar35 = (iParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_417(bVar35) && func_414(bVar35, iParam2)) && func_762(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
								Var38 = { func_409(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_41(bVar35) };
								iVar37 = func_403(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1836353++;
								if ((iParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*42*/])->f_22;
								}
								if ((iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*42*/])->f_31;
								}
								if ((iParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[iVar52 /*42*/])->f_9;
								if (((iParam0[iVar52 /*42*/])->f_9 != -1 || (iParam0[iVar52 /*42*/])->f_22 != -1f) || (iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_418())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_398(&iVar43, &fVar45, (iParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_397(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_396(bVar35, 0);
								if (bVar34)
								{
									if (func_74(bVar35, 1) && iVar1[bVar44] != -1)
									{
										iVar53 = iVar1[bVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
								if ((iParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (iParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_395(iParam5))
								{
									func_394(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_394(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, bVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_762(bVar35, 0, 1) && !BitTest(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								bVar35 = func_27();
							}
							if (func_417(bVar35))
							{
								if (func_762(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar44 = bVar35;
									iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
									Var38 = { func_409(bVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_41(bVar35) };
									iVar37 = func_403(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1836353++;
									iVar51 = func_396(bVar35, 1);
									if (bVar34)
									{
										if (func_74(bVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
									func_377(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_374(uParam3, iParam1, iParam2);
						}
						func_3(&(uParam3->f_21));
						func_373();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_372(uParam3, iParam1);
							func_371(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_372(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_367(uParam3))
						{
							Global_1836576 = 1;
						}
						func_365(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_373();
			func_431(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_365(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_366(0);
	}
}

void func_366(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_367(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_27() && func_762(bVar15, 0, 1))
	{
		Var2 = { func_41(bVar15) };
		iVar1 = func_370(uParam0, uParam0->f_37);
		if (func_369(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_368(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_368(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_368(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_368(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_368(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_368(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_368(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_369(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_370(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_371(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_372(var uParam0, int* iParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_373()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_374(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_27())
		{
			if (func_762(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_376(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_375(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853131[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_375(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_376(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_377(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_393() && iParam4 < func_392())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_391("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_391(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_391("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_391("");
			if (uParam3->f_108 == 6)
			{
				func_391("");
			}
			else
			{
				func_391(&sParam5);
			}
			func_382(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_381(uParam3))
			{
				func_380("DPAD_FRIEND");
			}
			else if (func_379(uParam3))
			{
				func_380("DPAD_FRIEND");
			}
			else if (func_378(uParam3))
			{
				func_380("DPAD_CREW");
			}
			else
			{
				func_380("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_378(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_379(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_380(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_381(var uParam0)
{
	if (func_379(uParam0) && func_378(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_382(var uParam0, bool bParam1)
{
	if (func_390(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_386(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2689224[bParam1 /*451*/].f_424, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_383())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_383()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_384() || func_189())
		{
			return 1;
		}
	}
	return 0;
}

int func_384()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_189();
	}
	return func_385(Global_4718592.f_87009);
}

int func_385(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_386(bool bParam0)
{
	if ((func_762(bParam0, 0, 1) && func_387()) && func_70(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_387()
{
	if (func_341(PLAYER::PLAYER_ID()) || func_389())
	{
		if (!func_388(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_388(bool bParam0)
{
	if (func_258(bParam0) == 236 || func_258(bParam0) == 150)
	{
		return func_108(bParam0);
	}
	return 0;
}

int func_389()
{
	switch (func_111(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_390(bool bParam0)
{
	if (func_383())
	{
		if (func_762(bParam0, 0, 1))
		{
			return func_75(bParam0);
		}
	}
	if ((func_762(bParam0, 0, 1) && func_387()) && func_72(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_391(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_392()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_393()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_394(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_393() && iParam3 < func_392())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_391("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_380(sParam16);
				}
				else
				{
					func_391(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_391("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_418())
				{
					func_391("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_380(&(uParam2->f_104));
					}
					else
					{
						func_391("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_391("");
				}
				if (uParam2->f_108 == 6)
				{
					func_391("");
				}
				else
				{
					func_391(&sParam4);
				}
				func_382(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_391("");
					func_391("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_381(uParam2))
				{
					func_380("DPAD_FRIEND");
				}
				else if (func_379(uParam2))
				{
					func_380("DPAD_FRIEND");
				}
				else if (func_378(uParam2))
				{
					func_380("DPAD_CREW");
				}
				else
				{
					func_380("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_395(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_396(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_341(bParam0)) && !func_107(bParam0))
	{
		iVar0 = func_203();
	}
	iVar1 = func_180(bParam0);
	if (!iVar1 == -1)
	{
		return func_178(iVar1);
	}
	return iVar0;
}

char* func_397(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_398(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_402(iParam3))
	{
		*fParam1 = (func_399(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_395(iParam3))
	{
		*fParam1 = (func_399(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_401(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_400(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_400(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_401(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_406(bParam0);
	if (iVar0 == -1)
	{
		func_404(bParam0, 1);
		return 0;
	}
	Global_1656661[iVar0 /*5*/].f_4 = 1;
	return Global_1656661[iVar0 /*5*/].f_2;
}

void func_404(bool bParam0, bool bParam1)
{
	if (!func_762(bParam0, 0, 1))
	{
		return;
	}
	if (func_406(bParam0) != -1)
	{
		return;
	}
	if (Global_1656824)
	{
		if (bParam0 == Global_1656824.f_1)
		{
			return;
		}
	}
	if (func_405(bParam0))
	{
		return;
	}
	if (Global_1656862 >= 32)
	{
		return;
	}
	Global_1656829[Global_1656862] = bParam0;
	Global_1656862++;
	if (bParam1)
	{
	}
}

int func_405(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656862)
	{
		if (Global_1656829[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_406(bool bParam0)
{
	int iVar0;
	
	if (!func_762(bParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656822 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656822)
	{
		if (Global_1656661[iVar0 /*5*/].f_1 == bParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1656661[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_407(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_407(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1656822)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656661[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1656661[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1656661[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1656822)
	{
		Global_1656661[iVar32 /*5*/] = { Global_1656661[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_408(&(Global_1656661[iVar32 /*5*/]));
	Global_1656822 = (Global_1656822 - 1);
}

void func_408(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_409(bool bParam0)
{
	char cVar0[32];
	
	if (func_762(bParam0, 0, 1))
	{
		Global_2783316 = { func_41(bParam0) };
		if (func_64())
		{
			if (func_369(Global_2783316))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2783316))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_413(&Global_2783316))
		{
			Global_2783246 = { func_411(bParam0) };
			func_410(&Global_2783246, &cVar0);
		}
	}
	return cVar0;
}

void func_410(var* uParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_411(bool bParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_412(bParam0))
	{
		return Global_1575086[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_41(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_412(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_413(var* uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(bool bParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_226(bParam0) || func_416(bParam0)) || func_257(bParam0))
		{
			return 0;
		}
	}
	if (!func_415(bParam0))
	{
		return 0;
	}
	if ((!func_426(bParam0) && Global_2689224[bParam0 /*451*/].f_243 == -1) && !func_425(bParam0))
	{
		return 0;
	}
	return 1;
}

bool func_415(bool bParam0)
{
	return BitTest(Global_1853131[bParam0 /*888*/].f_139, 22);
}

int func_416(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1893551[bParam0 /*599*/].f_1, 10) || BitTest(Global_1893551[bParam0 /*599*/].f_1, 9));
	}
	return 0;
}

int func_417(bool bParam0)
{
	bool bVar0;
	
	if (bParam0 == func_27())
	{
		return 0;
	}
	if (func_36(bParam0, 0))
	{
		return 0;
	}
	bVar0 = bParam0;
	if (bVar0 != -1)
	{
		if (BitTest(Global_1853131[bVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_418()
{
	switch (func_111(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_258(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_107(PLAYER::PLAYER_ID()))
	{
		switch (func_111(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_388(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_419(bool bParam0, int iParam1)
{
	if (Global_1893551[bParam0 /*599*/].f_10.f_33 != -1 && func_420(Global_1893551[bParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893551[bParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_420(Global_1893551[bParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_421(iParam0, 0);
	return 0;
}

int func_421(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_422(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_762(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(bVar1, 0))
			{
				if ((func_426(bVar1) || Global_2689224[bVar1 /*451*/].f_243 != -1) || func_425(bVar1))
				{
					if (func_423(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_423(bool bParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_424(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[bParam0 /*599*/].f_10 != func_27())
		{
			return iParam1 == Global_1893551[bParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_424(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_27())
			{
				if (Global_1893551[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_425(bool bParam0)
{
	return Global_1853131[bParam0 /*888*/].f_192 != 0;
}

int func_426(bool bParam0)
{
	if (!func_762(bParam0, 0, 1))
	{
		return 0;
	}
	if (!func_762(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_427(bParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(bParam0, PLAYER::PLAYER_ID()) || func_111(bParam0) == 233) || func_111(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_427(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_428(PLAYER::PLAYER_ID());
	bVar1 = func_428(bParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_428(bool bParam0)
{
	return func_429(&(Global_2689224[bParam0 /*451*/].f_433), 0);
}

var func_429(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_430(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644215.f_2 == 0)
		{
			Global_1644215.f_2 = 1;
		}
	}
	else if (Global_1644215.f_2 == 1)
	{
		Global_1644215.f_2 = 0;
	}
}

void func_432()
{
	if (BitTest(Global_2810701.f_4657, 1))
	{
		if (func_237())
		{
			func_433();
		}
	}
}

void func_433()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_47(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_434()
{
	if (BitTest(Global_2810701.f_4657, 0) && func_237())
	{
		return 1;
	}
	if (BitTest(Global_2810701.f_4657, 1) && func_237())
	{
		return 1;
	}
	return 0;
}

int func_435()
{
	if (func_237())
	{
		if (func_46(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_436()
{
	if (func_237())
	{
		if (func_60(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_437(int iParam0)
{
	if (Global_1644215.f_1 != Global_1644215)
	{
		Global_1644215.f_1 = Global_1644215;
	}
	if (Global_1644215 != iParam0)
	{
		Global_1644215 = iParam0;
	}
}

int func_438(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_485(iParam1);
	fVar7 = func_484();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_483())
		{
			if (func_482() > 0 && Global_1836355)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_471())
		{
			func_470(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2810701.f_4660, 26))
	{
		func_470(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_482() == 1)
		{
			func_469(bVar6, iParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_470(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_482() == 0 && !bParam5))
		{
			func_470(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_468();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_468();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_469(bVar6, iParam0, 0))
				{
					func_430(iParam0, 0, 0);
					sVar4 = func_466(iParam1, &(Global_4718592.f_87016), bParam4);
					Var0 = { func_464(iParam1) };
					if (bParam4)
					{
						func_461(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_455(iParam0, func_458(uParam2), func_456(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_449(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_447(iParam0, sVar9, func_448(), -1);
					}
					else if (func_383())
					{
						uParam2->f_34 = Global_1836354;
						func_461(iParam0, sVar4, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_440(iParam1);
						uParam2->f_34 = Global_1836354;
						func_461(iParam0, sVar4, "", 0, iVar8, func_439(), 1);
					}
					else
					{
						iVar8 = func_440(iParam1);
						func_461(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_439()
{
	return Global_1836354;
}

int func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_446())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_445(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_444(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_443(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_441())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_441()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_58();
	}
	return func_442(Global_4718592.f_87009);
}

int func_442(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_443(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 4;
}

bool func_444(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 7;
}

bool func_445(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 2;
}

bool func_446()
{
	return Global_4718592.f_1 == 0;
}

void func_447(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_380(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_380("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_448()
{
	switch (func_111(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_449(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_111(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_451())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_119(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_119(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_450(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_451()
{
	return (func_454() && func_452(func_453()));
}

int func_452(int iParam0)
{
	return func_72(iParam0, 1);
}

int func_453()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_454()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148;
}

void func_455(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_380(sParam1);
		}
		else if (func_258(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_380("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_456(var uParam0)
{
	int iVar0;
	
	iVar0 = func_258(PLAYER::PLAYER_ID());
	if (func_457())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_145())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_457()
{
	return Global_1853004;
}

char* func_458(var uParam0)
{
	int iVar0;
	
	iVar0 = func_258(PLAYER::PLAYER_ID());
	if (func_457())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_460() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_460() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_145())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_459() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_459()
{
	return Global_2810701.f_5118;
}

int func_460()
{
	if (func_258(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2810701.f_5113;
	}
	return -1;
}

void func_461(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_391(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_380(sParam1);
		}
		if (func_483() && iParam6)
		{
			if (func_463())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_380(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_462(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_58())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_462(bool bParam0)
{
	if (func_445(bParam0) || func_444(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_463()
{
	return Global_1836355;
}

struct<4> func_464(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_465(PLAYER::PLAYER_ID()) || func_443(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_528, 16);
			break;
	}
	if (func_383() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_528, 16);
	}
	return Var0;
}

bool func_465(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 5;
}

char* func_466(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_383() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_467();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_467()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_468()
{
	Global_43534 = 1;
}

bool func_469(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_470(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_373();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), false);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_471()
{
	if (func_481())
	{
		return 0;
	}
	if (func_342())
	{
		return 0;
	}
	if (!func_479())
	{
		return 0;
	}
	if (!func_327())
	{
		return 0;
	}
	if (func_478(8, -1))
	{
		return 0;
	}
	if (func_482() == 2)
	{
		return 0;
	}
	if (Global_2810701.f_4612)
	{
		return 0;
	}
	if (func_135())
	{
		return 0;
	}
	else if (!func_250(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_477(1) || func_475(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_474() && Global_1965735 == 2)
	{
		return 0;
	}
	if (func_701(PLAYER::PLAYER_ID()) && !func_474())
	{
		return 0;
	}
	if (Global_1932195)
	{
		return 0;
	}
	if (Global_1932200)
	{
		return 0;
	}
	if (func_473(0))
	{
		return 0;
	}
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637036)
	{
		return 0;
	}
	if ((Global_1959937.f_718.f_5 || Global_1962763.f_718.f_5) || Global_1958965.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966739.f_724.f_5 || Global_1966739.f_744.f_724.f_5) || Global_1966739.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973525.f_726.f_5)
	{
		return 0;
	}
	if (func_472(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1637072 || Global_1637073) || Global_1637074)
	{
		return 0;
	}
	return 1;
}

int func_472(bool bParam0)
{
	if (bParam0 == func_27())
	{
		return 0;
	}
	return BitTest(Global_2689224[bParam0 /*451*/].f_317.f_4, 6);
}

bool func_473(int iParam0)
{
	return BitTest(Global_2810701.f_5194.f_47, iParam0);
}

bool func_474()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965736, 0));
}

int func_475(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_476(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_477(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

bool func_478(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

int func_479()
{
	if (func_480())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_480()
{
	return Global_1574604;
}

bool func_481()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

int func_482()
{
	return Global_1644218.f_68;
}

int func_483()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_484()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_486()
{
	if (func_489())
	{
		return 1;
	}
	if (func_257(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_457())
	{
		return 1;
	}
	if (func_341(PLAYER::PLAYER_ID()))
	{
		switch (func_258(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_487(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_487(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_487(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_487(bool bParam0)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 4);
}

int func_488(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_341(PLAYER::PLAYER_ID()) && !func_107(PLAYER::PLAYER_ID())) && !func_388(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_31(PLAYER::PLAYER_ID(), 0) && func_107(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_334(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_489()
{
	if (func_490(PLAYER::PLAYER_ID()))
	{
		return Global_1581335;
	}
	return 0;
}

int func_490(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_36(bParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(bParam0);
		}
	}
	return 0;
}

void func_491()
{
	if (!func_18(&uLocal_551))
	{
		if (func_492(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_11(&uLocal_551, 0, 1);
		}
	}
}

int func_492(bool bParam0)
{
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (BitTest(Local_387[bParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_493()
{
	if (func_304(1, 1))
	{
		if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
		{
			MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
		}
	}
	else if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
	{
		MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
	}
	if (func_304(0, 1))
	{
		if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
		{
			MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
		}
	}
	else if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
	{
		MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
	}
	if (func_304(1, 0))
	{
		if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
		{
			MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
		}
	}
	else if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
	{
		MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
	}
	if (func_304(0, 0))
	{
		if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
		{
			MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
		}
	}
	else if (BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
	{
		MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
	}
}

void func_494()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 1)
	{
		func_501(bVar0);
		func_495(bVar0);
		switch (func_15(bVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		bVar0++;
	}
}

void func_495(bool bParam0)
{
	if (func_304(0, 0) || bLocal_3190 == -1)
	{
		func_85(bParam0);
		func_87(bParam0);
		func_82(bParam0, -1);
		return;
	}
	if (func_7(bParam0) == -1)
	{
		if (func_259(NETWORK::PARTICIPANT_ID_TO_INT(), bParam0))
		{
			func_87(bParam0);
		}
		else
		{
			func_497(bParam0);
		}
	}
	else
	{
		func_87(bParam0);
	}
	if (iLocal_3191 != func_83(bParam0, 1))
	{
		switch (iLocal_3192)
		{
			case 0:
				func_82(bParam0, -1);
				iLocal_3192++;
				break;
			
			case 1:
				func_496(bParam0);
				iLocal_3191 = func_83(bParam0, 1);
				iLocal_3192 = 0;
				break;
			}
	}
}

void func_496(int iParam0)
{
	if (!BitTest(uLocal_549, func_520(iParam0)))
	{
		HUD::SET_MINIMAP_COMPONENT(func_84(iParam0, 0), true, func_83(iParam0, 1));
		if (func_520(iParam0) == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_84(iParam0, 1), true, func_83(iParam0, 1));
		}
		MISC::SET_BIT(&uLocal_549, func_520(iParam0));
	}
}

void func_497(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(func_88(iParam0)))
	{
		func_500(iParam0, HUD::ADD_BLIP_FOR_COORD(func_362(iParam0)));
		HUD::SET_BLIP_PRIORITY(func_88(iParam0), 12);
		if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_88(iParam0), "KOTC_AREANAME");
		}
		HUD::SET_BLIP_SPRITE(func_88(iParam0), 438);
		func_498(&(Local_1234[iParam0 /*68*/].f_27), func_83(iParam0, 1));
		if (!BitTest(bLocal_548, 13))
		{
			HUD::SET_BLIP_FLASHES(Local_1234[iParam0 /*68*/].f_27, true);
			HUD::SET_BLIP_FLASH_TIMER(Local_1234[iParam0 /*68*/].f_27, 7000);
			MISC::SET_BIT(&bLocal_548, 13);
		}
		if (!BitTest(bLocal_548, 12))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&bLocal_548, 12);
		}
		HUD::SHOW_HEIGHT_ON_BLIP(func_88(iParam0), true);
		HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(func_88(iParam0), true);
	}
	else
	{
		func_498(&(Local_1234[iParam0 /*68*/].f_27), func_83(iParam0, 0));
		if (HUD::DOES_BLIP_EXIST(func_88(iParam0)))
		{
			if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_88(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_498(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_499(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_499(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_500(int iParam0, int iParam1)
{
	Local_1234[iParam0 /*68*/].f_27 = iParam1;
}

void func_501(bool bParam0)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	var uVar21[3];
	struct<3> Var25[3];
	var uVar35[3];
	bool bVar39;
	float fVar40;
	float fVar41;
	
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_520(bParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_511(bParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_510(bParam0, iVar0) };
		uVar21[iVar0] = func_509(bParam0, iVar0);
		func_508(bParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (BitTest(uLocal_3183, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (BitTest(uLocal_3182, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
			{
				if (!BitTest(uLocal_3184, Local_553[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
				{
					if (!func_304(1, 1))
					{
						if (bLocal_3190 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
							{
								if ((!func_507(Var1[iVar0 /*3*/]) && !func_507(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1130[PLAYER::PLAYER_ID() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], false, true, 0))
									{
										bVar39 = true;
									}
								}
								if (func_520(bParam0) == 7)
								{
									if (func_506(bParam0) < 0f)
									{
										if (func_506(bParam0) <= fVar40 && func_506(bParam0) >= (fVar40 * -1f))
										{
											if (func_505(bParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_507(Var25[iVar0 /*3*/]))
								{
									if (func_504(bParam0, iVar0) < 0f)
									{
										if (func_504(bParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_503(bParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_502(bParam0, bVar39);
}

void func_502(bool bParam0, bool bParam1)
{
	Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1[bParam0] = bParam1;
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), bParam0);
	}
}

float func_503(int iParam0, int iParam1)
{
	return Local_1234[iParam0 /*68*/].f_41[iParam1];
}

float func_504(int iParam0, int iParam1)
{
	return Local_1234[iParam0 /*68*/].f_45[iParam1];
}

float func_505(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_38;
}

float func_506(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_39;
}

int func_507(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_508(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_520(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_520(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_520(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_509(int iParam0, int iParam1)
{
	return Local_1234[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_510(int iParam0, int iParam1)
{
	return Local_1234[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_511(int iParam0, int iParam1)
{
	return Local_1234[iParam0 /*68*/][iParam1 /*3*/];
}

void func_512(int iParam0)
{
	Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = iParam0;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_514("kwUfKUus6EuQyNSL8KpY-w");
					func_514("yMTOFLfO2UKwzKrmgPP7kg");
					func_514("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_514("tP5HSeCA0UiHnkRzakdO2Q");
					func_514("uEkrqoerQEmQ0uZRtp4rkw");
					func_514("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_514("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_514("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_514("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_514("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_514("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_514("uEkrqoerQEmQ0uZRtp4rkw");
					func_514("92t91kL3Wkqvl2Kc82cNSA");
					func_514("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_514("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_514("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_514("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_514("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_514("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_514("fOfm7nzMLkav0ldcSCNAzA");
					func_514("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_514("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_514("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_514("Ma78E44OMkGfYPmCPZXUNA");
					func_514("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_514("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_514("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_514("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_514("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_514("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_514("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_514("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_514("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_514("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_514("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_514("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_514("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_514("fOfm7nzMLkav0ldcSCNAzA");
							func_514("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_514("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_514("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_514("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_514("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_514("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_514("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_514("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_514("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_514("fOfm7nzMLkav0ldcSCNAzA");
							func_514("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_514("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_514("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_514("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_514("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_514("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_514("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_514("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_514("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_514("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_514("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_514("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_514("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_514("aGBjo2rKi0yMDLl3a2ATGA");
									func_514("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_514("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_514("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_514("f2lnL6wZPkGWUowu0yLm1Q");
									func_514("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_514("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_514("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_514("W-OJzHlM-0ym9PsIASYZtw");
									func_514("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_514("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_514("TjGz31AMYE6bGCjAIitu6w");
									func_514("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_514("QmlvLMLCwkOvoZlkAstYxw");
									func_514("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_514("BktATxH9R0Wp2x0kWSbqjw");
									func_514("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_514("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_514("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_514("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_514("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_514("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_514("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_514("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_514("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_514("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_514("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_514(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
		{
			if (func_515(&(Global_2621865[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_2621865[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2621865[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_515(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_517(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_516(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_516(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_517(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar13 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_517(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_519(uParam0->f_1))
	{
		if (func_518(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_518(var uParam0)
{
	if (Global_2660248)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660248.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_519(int iParam0)
{
	return iParam0 == 9999;
}

bool func_520(int iParam0)
{
	return Local_89.f_6[iParam0 /*204*/].f_69;
}

int func_521()
{
	return Local_89.f_0;
}

int func_522(bool bParam0)
{
	return Local_387[bParam0 /*5*/];
}

void func_523()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	bVar0 = -1;
	bVar1 = -1;
	if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_520(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_541(iVar2, iVar3, func_542(iVar2, iVar3));
					func_539(iVar2, iVar3, func_540(iVar2, iVar3));
					func_537(iVar2, func_538(iVar2));
					func_535(iVar2, iVar3, func_536(iVar2, iVar3));
					MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), false);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_534(iVar2) <= 1)
			{
				func_533(iVar2, 0);
			}
			else
			{
				func_533(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_146(iVar2))
			{
				MISC::SET_BIT(&bLocal_548, false);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_533(iVar2, 0);
			}
		}
		else
		{
			bVar0 = func_8(iVar2);
			bVar1 = func_7(iVar2);
			if (!func_146(iVar2))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (bVar0 > -1)
					{
						if (!BitTest(uLocal_3183, bVar0))
						{
							MISC::SET_BIT(&bLocal_548, false);
						}
						if (!BitTest(uLocal_3182, bVar0))
						{
							MISC::SET_BIT(&bLocal_548, false);
						}
						if (BitTest(uLocal_3184, bVar0))
						{
							MISC::SET_BIT(&bLocal_548, false);
						}
						if (!func_259(bVar0, iVar2))
						{
							MISC::SET_BIT(&bLocal_548, false);
						}
					}
				}
			}
			else if (bVar0 > -1)
			{
				if (!BitTest(uLocal_3183, bVar0))
				{
					bVar5 = true;
				}
				if (!BitTest(uLocal_3182, bVar1))
				{
					bVar5 = true;
				}
				if (BitTest(uLocal_3184, bVar1))
				{
					bVar5 = true;
				}
				if (!func_259(bVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_532(iVar2, -1);
				func_531(iVar2, -1);
			}
			func_530(iVar2, uVar4);
		}
		if (BitTest(bLocal_548, 0))
		{
			if (func_529(iVar2) > -1 && func_528(iVar2) > -1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_532(iVar2, func_529(iVar2));
					func_531(iVar2, func_528(iVar2));
					func_530(iVar2, func_527(iVar2));
					if (!BitTest(Local_89.f_6[iVar2 /*204*/].f_203, func_529(iVar2)))
					{
						MISC::SET_BIT(&(Local_89.f_6[iVar2 /*204*/].f_203), func_529(iVar2));
					}
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_524(iVar2);
		}
		iVar2++;
	}
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar16;
	var uVar17;
	var uVar18;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_89.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_89.f_283 == Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_89.f_283 = Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 882590859;
						Var2.f_10 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_525(Var2, func_526(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_525(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_526(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_762(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_527(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_31;
}

int func_528(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_35;
}

bool func_529(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_34;
}

void func_530(int iParam0, var uParam1)
{
	Local_1234[iParam0 /*68*/].f_30 = uParam1;
}

void func_531(int iParam0, int iParam1)
{
	Local_89.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_532(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_89.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_533(int iParam0, int iParam1)
{
	Local_89.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_534(int iParam0)
{
	return Local_1234[iParam0 /*68*/].f_37;
}

void func_535(int iParam0, int iParam1, var uParam2)
{
	Local_1234[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_536(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_520(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_520(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_520(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_537(int iParam0, struct<3> Param1)
{
	Local_1234[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_538(int iParam0)
{
	switch (func_520(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_539(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1234[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_540(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_520(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_520(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_520(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_541(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1234[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_542(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_520(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_520(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_520(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_543()
{
	func_545();
	iLocal_3181++;
	func_544();
}

void func_544()
{
	if (iLocal_3181 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iLocal_3181 = 0;
	}
}

void func_545()
{
	if (iLocal_3181 == 0)
	{
	}
}

void func_546()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<16> Var4;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	
	bVar0 = -1;
	bVar1 = -1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_1130[bVar1 /*3*/] = func_27();
		Local_1130[bVar1 /*3*/].f_1 = -1;
		Local_1130[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_3182, bVar1);
		MISC::CLEAR_BIT(&uLocal_3184, bVar1);
		bVar1++;
	}
	bVar0 = false;
	while (bVar0 < 32)
	{
		Local_553[bVar0 /*18*/] = func_577();
		Local_553[bVar0 /*18*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_3183, bVar0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				MISC::CLEAR_BIT(&(Local_89.f_6[iVar25 /*204*/].f_73), bVar0);
				iVar25++;
			}
		}
		Local_553[bVar0 /*18*/].f_2 = { Var4 };
		bVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_576(iVar25, 0);
		func_575(iVar25, 0);
		func_574(iVar25, 0f);
		func_573(iVar25, 0f);
		func_572(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_571(iVar25, iVar28, 0f);
			func_570(iVar25, iVar28, 0f);
			func_569(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0))
		{
			Local_553[bVar0 /*18*/] = bVar0;
			MISC::SET_BIT(&uLocal_3183, bVar0);
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_553[bVar0 /*18*/]);
			bVar1 = bVar2;
			if (func_762(bVar2, 0, 1))
			{
				Local_1130[bVar1 /*3*/] = bVar2;
				Local_553[bVar0 /*18*/].f_1 = bVar1;
				Local_1130[bVar1 /*3*/].f_1 = bVar0;
				Local_1130[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(bVar2);
				StringCopy(&(Local_553[bVar0 /*18*/].f_2), PLAYER::GET_PLAYER_NAME(bVar2), 64);
				iVar27++;
				if (func_492(bVar0))
				{
					iVar29++;
				}
				MISC::SET_BIT(&uLocal_3182, bVar1);
				if ((ENTITY::IS_ENTITY_DEAD(Local_1130[bVar1 /*3*/].f_2, false) || PED::IS_PED_INJURED(Local_1130[bVar1 /*3*/].f_2)) || !PLAYER::IS_PLAYER_PLAYING(Local_1130[bVar1 /*3*/]))
				{
					MISC::SET_BIT(&uLocal_3184, bVar1);
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!BitTest(Local_387[bVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!BitTest(Local_387[bVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_567(bVar1, 2);
				if (func_257(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_565(bVar0);
					}
				}
				if (func_125(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_565(bVar0);
					}
				}
				if (func_261(bVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_565(bVar0);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&uLocal_3183, bVar0);
			if (func_674() <= 1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_565(bVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!BitTest(Local_89.f_213, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_564(bVar0, iVar25);
				}
			}
			if (BitTest(uLocal_3183, bVar0))
			{
				if (BitTest(uLocal_3182, bVar1))
				{
					if (!BitTest(Local_89.f_213, 1))
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_563(bVar0, bVar1, iVar25, func_137(iVar25, bVar0));
						}
					}
					if (!BitTest(uLocal_3184, bVar1))
					{
						if (bVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							fVar36 = func_562(Local_1130[bVar1 /*3*/].f_2, func_362(iVar25), 0);
							fVar37 = func_562(Local_1130[bVar1 /*3*/].f_2, func_362(iVar25), 1);
							Var38 = { ENTITY::GET_ENTITY_COORDS(Local_1130[bVar1 /*3*/].f_2, true) };
							fVar41 = (Local_1234[iVar25 /*68*/].f_24.f_2 - Var38.f_2);
							func_574(iVar25, fVar36);
							func_573(iVar25, fVar41);
							func_572(iVar25, fVar37);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_508(iVar25, iVar28, &Var20, &fVar23);
								if (!func_507(Var20))
								{
									fVar42 = func_562(Local_1130[bVar1 /*3*/].f_2, Var20, 0);
									fVar43 = func_562(Local_1130[bVar1 /*3*/].f_2, Var20, 1);
									fVar44 = (Var20.f_2 - Var38.f_2);
									func_571(iVar25, iVar28, fVar42);
									func_570(iVar25, iVar28, fVar44);
									func_569(iVar25, iVar28, fVar43);
								}
								iVar28++;
							}
						}
						if (func_259(bVar0, iVar25))
						{
							func_576(iVar25, 1);
							iVar26 = func_534(iVar25);
							iVar26++;
							func_575(iVar25, iVar26);
							if (func_8(iVar25) != bVar0 && func_7(iVar25) != bVar1)
							{
								if (func_529(iVar25) == -1)
								{
									func_628(iVar25, bVar0);
								}
								if (func_528(iVar25) == -1)
								{
									func_627(iVar25, bVar1);
								}
								func_626(iVar25, Local_1130[bVar1 /*3*/].f_2);
							}
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								MISC::SET_BIT(&(Local_89.f_6[iVar25 /*204*/].f_73), bVar0);
							}
						}
					}
					if (bVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!BitTest(uLocal_3184, bVar1))
						{
							if (func_233(iVar25) <= IntToFloat(Global_262145.f_11762))
							{
								if (!BitTest(Local_387[bVar0 /*5*/].f_4, 12))
								{
									MISC::SET_BIT(&(Local_387[bVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_233(iVar25) >= IntToFloat(Global_262145.f_11763))
							{
								if (BitTest(Local_387[bVar0 /*5*/].f_4, 12))
								{
									MISC::CLEAR_BIT(&(Local_387[bVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_260(1, 0))
							{
								if (func_233(iVar25) <= IntToFloat(Global_262145.f_11762))
								{
									if (!BitTest(Local_387[bVar0 /*5*/].f_4, 3))
									{
										MISC::SET_BIT(&(Local_387[bVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_233(iVar25) >= IntToFloat(Global_262145.f_11763))
								{
									if (BitTest(Local_387[bVar0 /*5*/].f_4, 3))
									{
										MISC::CLEAR_BIT(&(Local_387[bVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (BitTest(Local_387[bVar0 /*5*/].f_4, 3))
							{
								MISC::CLEAR_BIT(&(Local_387[bVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (PLAYER::PLAYER_ID() != Local_1130[bVar1 /*3*/])
				{
					if (func_204(PLAYER::PLAYER_ID(), Local_1130[bVar1 /*3*/]))
					{
						iVar24 = func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
					}
				}
				if (!BitTest(uLocal_3184, bVar1))
				{
					if (func_304(0, 0))
					{
						func_561(bVar1);
					}
					else if (func_7(iVar25) != bVar1)
					{
						func_561(bVar1);
					}
					else if (func_674() != 1)
					{
						func_561(bVar1);
					}
					else
					{
						func_556(bVar1);
						if (bVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								HUD::GET_HUD_COLOUR(iVar24, &iVar32, &iVar33, &iVar34, &iVar35);
								iVar35 = 100;
								GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(Local_1130[bVar1 /*3*/].f_2, true) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar32, iVar33, iVar34, iVar35, true, true, 2, false, 0, 0, false);
							}
						}
					}
				}
				if (func_762(Local_1130[bVar1 /*3*/], 1, 1))
				{
					if (func_554(Local_1130[bVar1 /*3*/]))
					{
						func_547(Local_1130[bVar1 /*3*/], func_499(iVar24), func_550(bVar0, bVar1, iVar25), 0);
					}
				}
			}
			iVar25++;
		}
		bVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar30)
		{
			MISC::SET_BIT(&(Local_89.f_213), false);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_89.f_213), false);
		}
		if (bVar31)
		{
			MISC::SET_BIT(&(Local_89.f_213), true);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_89.f_213), true);
		}
	}
	if (iVar29 > iLocal_550)
	{
		iLocal_550 = iVar29;
	}
	if (iVar27 > iLocal_3185)
	{
		iLocal_3185 = iVar27;
	}
	else
	{
		Local_89.f_216 = (iLocal_3185 - iVar27);
	}
}

void func_547(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_549(bParam0))
	{
		return;
	}
	if (func_548(&(Global_2678391.f_624[bParam0]), &(Global_2678391.f_987[bParam0]), &(Global_2678391.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_459[bParam0] = uParam1;
		}
	}
}

int func_548(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_549(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_220())
	{
		return 1;
	}
	return 0;
}

int func_550(bool bParam0, bool bParam1, int iParam2)
{
	if (func_304(0, 0))
	{
		return 0;
	}
	if (bParam0 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0;
	}
	if (func_551(bParam1))
	{
		return 0;
	}
	if (bParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_551(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_128();
	}
	return BitTest(Global_1644218.f_241.f_136[func_553(10) /*33*/][iParam0], func_552(10));
}

int func_552(int iParam0)
{
	return (iParam0 % 32);
}

int func_553(int iParam0)
{
	return (iParam0 / 32);
}

bool func_554(int iParam0)
{
	return func_555(&(Global_2678391.f_624[iParam0]));
}

int func_555(var uParam0)
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_556(bool bParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (bParam0 > -1)
	{
		if (BitTest(uLocal_3182, bParam0))
		{
			if (!BitTest(uLocal_3184, bParam0))
			{
				if (func_204(PLAYER::PLAYER_ID(), Local_1130[bParam0 /*3*/]))
				{
					iVar0 = func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
				}
				func_559(Local_1130[bParam0 /*3*/], 439, 1, 0);
				if (func_554(Local_1130[bParam0 /*3*/]))
				{
					func_547(Local_1130[bParam0 /*3*/], func_499(iVar0), 1, 0);
				}
				func_557(Local_1130[bParam0 /*3*/], 1, 1, 0);
				MISC::SET_BIT(&uLocal_3189, bParam0);
			}
		}
	}
}

void func_557(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_549(bParam0))
	{
		return;
	}
	if (func_548(&(Global_2678391.f_822[bParam0]), &(Global_2678391.f_1185[bParam0]), &(Global_2678391.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_558(bParam0, bParam2);
	}
}

void func_558(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2678391.f_368), bParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2678391.f_368), bParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2678391[bParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678391[bParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2678391[bParam0], true);
		}
	}
}

void func_559(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_549(bParam0))
	{
		return;
	}
	if (func_548(&(Global_2678391.f_591[bParam0]), &(Global_2678391.f_954[bParam0]), &(Global_2678391.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_426[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_560();
		}
	}
}

void func_560()
{
	Global_2678391.f_1651 = 1;
}

void func_561(bool bParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (BitTest(uLocal_3189, bParam0))
	{
		if (bParam0 > -1)
		{
			if (BitTest(uLocal_3182, bParam0))
			{
				if (!BitTest(uLocal_3184, bParam0))
				{
					if (PLAYER::PLAYER_ID() != Local_1130[bParam0 /*3*/])
					{
						if (func_204(PLAYER::PLAYER_ID(), Local_1130[bParam0 /*3*/]))
						{
							iVar0 = func_162(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
						}
					}
					func_559(Local_1130[bParam0 /*3*/], 439, 0, 0);
					if (func_554(Local_1130[bParam0 /*3*/]))
					{
						func_547(Local_1130[bParam0 /*3*/], func_499(iVar0), 0, 0);
					}
					func_557(Local_1130[bParam0 /*3*/], 0, 0, 0);
					MISC::CLEAR_BIT(&uLocal_3189, bParam0);
				}
			}
		}
	}
}

float func_562(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_563(bool bParam0, bool bParam1, int iParam2, float fParam3)
{
	Local_89.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/] = bParam0;
	Local_89.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_1 = bParam1;
	Local_89.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_2 = bParam1;
	Local_89.f_6[iParam2 /*204*/].f_74[bParam0 /*4*/].f_3 = fParam3;
}

void func_564(bool bParam0, int iParam1)
{
	Local_89.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/] = -1;
	Local_89.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_1 = -1;
	Local_89.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_2 = func_27();
	Local_89.f_6[iParam1 /*204*/].f_74[bParam0 /*4*/].f_3 = -1f;
}

void func_565(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, bParam0) > 0f || func_138(iVar0, bParam0) > 0f)
		{
			func_4(iVar0, bParam0, 0f);
			func_566(iVar0, bParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_89.f_217[iVar1] > 0f)
			{
				if (Local_89.f_250[iVar1] == bParam0)
				{
					Local_89.f_217[iVar1] = 0f;
					Local_89.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_566(int iParam0, int iParam1, float fParam2)
{
	Local_89.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_567(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (BitTest(Global_1836833.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1836833.f_18)))
	{
		return;
	}
	if (BitTest(Global_1836833.f_2, bParam0))
	{
		if (Global_1836833 < iParam1 && BitTest(Global_1836833.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), false);
			return;
		}
		if (Global_1836833 != 0)
		{
			MISC::SET_BIT(&(Global_1836833.f_1), true);
		}
		Global_1836833 = 0;
		Global_1836833.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1836833.f_2), bParam0);
	bVar0 = true;
	if (func_226(bParam0))
	{
		bVar0 = false;
	}
	if (func_568(bParam0))
	{
		bVar0 = false;
	}
	if (func_36(bParam0, 0))
	{
		bVar0 = false;
	}
	if (func_257(bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836833++;
	}
}

bool func_568(bool bParam0)
{
	return BitTest(Global_1893551[bParam0 /*599*/].f_1, 10);
}

void func_569(int iParam0, int iParam1, float fParam2)
{
	Local_1234[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_570(int iParam0, int iParam1, float fParam2)
{
	Local_1234[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_571(int iParam0, int iParam1, float fParam2)
{
	Local_1234[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_572(int iParam0, float fParam1)
{
	Local_1234[iParam0 /*68*/].f_40 = fParam1;
}

void func_573(int iParam0, float fParam1)
{
	Local_1234[iParam0 /*68*/].f_39 = fParam1;
}

void func_574(int iParam0, float fParam1)
{
	Local_1234[iParam0 /*68*/].f_38 = fParam1;
}

void func_575(int iParam0, int iParam1)
{
	Local_1234[iParam0 /*68*/].f_37 = iParam1;
}

void func_576(int iParam0, int iParam1)
{
	Local_1234[iParam0 /*68*/].f_36 = iParam1;
}

int func_577()
{
	return -1;
}

void func_578()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 186)
		{
			func_579(iVar0);
		}
		if (iVar1 == 154)
		{
		}
		iVar0++;
	}
}

void func_579(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<6> Var11;
	struct<14> Var24;
	float fVar38;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var11, 13);
	if (ENTITY::DOES_ENTITY_EXIST(Var11.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var11.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						iVar7 = bVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var11.f_1))
					{
						if (ENTITY::IS_ENTITY_A_PED(Var11.f_1))
						{
							iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_1);
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								iVar8 = iVar3;
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
								{
									iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
									if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
									{
										iVar6 = bVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_260(1, 0))
													{
														if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
															{
																MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_5)
													{
														if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (iLocal_3188 < func_625())
															{
																iLocal_3188++;
																func_583(0, iVar1, "", -1859646258, 2131309714, func_624(), 1, -1, 0, 0, 0);
																Local_373.f_7 = (Local_373.f_7 + func_624());
															}
															else
															{
																iLocal_3188++;
															}
														}
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															fVar38 = func_138(iVar9, iVar6);
															fVar38 = (fVar38 + IntToFloat(Global_262145.f_11458));
															func_566(iVar9, iVar6, fVar38);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														if (!func_260(1, 0))
														{
															if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
															{
																MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
															}
															if (!BitTest(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
															{
																MISC::SET_BIT(&(Local_387[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
																func_238(1);
															}
														}
														if (Var11.f_5)
														{
															if (iLocal_3186 < func_582())
															{
																iLocal_3186++;
																func_583(0, iVar1, "", -1859646258, 2131309714, func_581(), 1, -1, 0, 0, 0);
																Local_373.f_7 = (Local_373.f_7 + func_581());
															}
															else
															{
																iLocal_3186++;
															}
														}
													}
													if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														iLocal_3187++;
													}
													if (func_259(iVar6, iVar9))
													{
														if (Var11.f_5)
														{
															if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
															{
																if (func_529(iVar9) == -1)
																{
																	func_628(iVar9, iVar6);
																}
																if (func_528(iVar9) == -1)
																{
																	func_627(iVar9, iVar8);
																}
																MISC::SET_BIT(&bLocal_548, false);
															}
														}
													}
													else if (Var11.f_5)
													{
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															Var24.f_2 = -1771709808;
															Var24.f_10 = iVar3;
															bVar10 = false;
															while (bVar10 < 32)
															{
																if (BitTest(uLocal_3183, bVar10))
																{
																	if (BitTest(uLocal_3182, Local_553[bVar10 /*18*/].f_1))
																	{
																		if (!BitTest(Local_387[bVar10 /*5*/].f_4, 9) && !BitTest(Local_387[bVar10 /*5*/].f_4, 10))
																		{
																			if (func_195(bVar10))
																			{
																				func_525(Var24, func_580(Local_553[bVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																bVar10++;
															}
														}
													}
												}
												iVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_580(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_581()
{
	return Global_262145.f_11263;
}

int func_582()
{
	return Global_262145.f_11265;
}

int func_583(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_584(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_584(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_594(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_590(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_585(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_585(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_588(iParam0, 1) };
	if (iParam0 == func_587(PLAYER::PLAYER_PED_ID()))
	{
		func_586(1);
	}
	func_590(Var0, iParam1, 0, sParam2, iParam3);
}

void func_586(int iParam0)
{
	Global_2703660.f_1568 = iParam0;
}

int func_587(int iParam0)
{
	return iParam0;
}

Vector3 func_588(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_589(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_589(int iParam0)
{
	return iParam0;
}

void func_590(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703660.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703660.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703660.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703660.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703660.f_967[iVar1 /*30*/].f_4 = func_593(Global_2703660.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703660.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_967[iVar1 /*30*/].f_3 = iParam3;
			Global_2703660.f_967[iVar1 /*30*/].f_8 = iParam4;
			Global_2703660.f_967[iVar1 /*30*/].f_9 = func_592();
			Global_2703660.f_967[iVar1 /*30*/].f_10 = func_591();
			StringCopy(&(Global_2703660.f_967[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703660.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_591()
{
	if (Global_2703660.f_1568)
	{
		Global_2703660.f_1568 = 0;
		return 1;
	}
	Global_2703660.f_1568 = 0;
	return 0;
}

var func_592()
{
	var uVar0;
	
	uVar0 = Global_2703660.f_1570;
	Global_2703660.f_1570 = 1;
	return uVar0;
}

float func_593(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_594(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_595(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_595(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_623(PLAYER::PLAYER_ID()) || func_622(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9894 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9894;
		}
	}
	else if (func_441() || func_620(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23051 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23051;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_124(sParam2))
	{
	}
	if (func_619())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_617(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_616(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_613(0, &iVar1);
					break;
				
				case 3:
					func_613(1, &iVar1);
					break;
				
				case 1:
					func_610(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957933)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_269(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_602((func_609(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_269(1166, iVar1, -1);
				}
				func_598(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_596((func_597(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_596((func_597(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_596(int iParam0)
{
	if (func_619())
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_275(joaat("mpply_globalxp"), iParam0);
	}
}

int func_597(bool bParam0)
{
	if (bParam0 > -1)
	{
		if (func_762(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return func_277(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853131[bParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_277(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_598(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_41(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_600(func_601(&Var0));
			if (iVar13 == 0)
			{
				func_599(&Global_1655492, iParam0);
				func_274(joaat("mpply_crew_local_xp_0"), Global_1655492);
			}
			else if (iVar13 == 1)
			{
				func_599(&Global_1655493, iParam0);
				func_274(joaat("mpply_crew_local_xp_1"), Global_1655493);
			}
			else if (iVar13 == 2)
			{
				func_599(&Global_1655494, iParam0);
				func_274(joaat("mpply_crew_local_xp_2"), Global_1655494);
			}
			else if (iVar13 == 3)
			{
				func_599(&Global_1655495, iParam0);
				func_274(joaat("mpply_crew_local_xp_3"), Global_1655495);
			}
			else if (iVar13 == 4)
			{
				func_599(&Global_1655496, iParam0);
				func_274(joaat("mpply_crew_local_xp_4"), Global_1655496);
			}
		}
	}
}

void func_599(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_600(int iParam0)
{
	if (iParam0 == Global_1655487)
	{
		return 0;
	}
	else if (iParam0 == Global_1655488)
	{
		return 1;
	}
	else if (iParam0 == Global_1655489)
	{
		return 2;
	}
	else if (iParam0 == Global_1655490)
	{
		return 3;
	}
	else if (iParam0 == Global_1655491)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_601(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725175;
		}
	}
	return Global_2725175;
}

void func_602(int iParam0, int iParam1, int iParam2)
{
	if (func_619())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9862 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655637[func_214(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655637[func_214(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_608(PLAYER::PLAYER_ID()))
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_606(iParam0, 1);
		}
		func_270(640, iParam0, -1, 1);
		func_271(641, func_606(iParam0, 1), -1, 1, 0);
		Global_1655637[func_214(-1)] = iParam0;
		func_603(-1109644434, 7, 0);
	}
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_605(iParam1, iParam2))
	{
		iVar0 = func_604();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_604()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_605(int iParam0, var uParam1)
{
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_606(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_607(iParam0, 0);
}

int func_607(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294354[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294354[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_608(bool bParam0)
{
	if (bParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703660.f_1, bParam0);
	}
	return 1;
}

int func_609(bool bParam0)
{
	if (Global_1574631.f_9 == 0)
	{
		if (bParam0 > -1)
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655637[func_214(-1)];
			}
			else if (func_608(bParam0))
			{
				return Global_1853131[bParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655637[func_214(-1)];
	}
	return 0;
}

void func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(bVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_169(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_612(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_611(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_611(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_611(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_612(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783316 = { func_41(bParam0) };
		Global_2783329 = { func_41(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783316))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783329))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783281, 35, &Global_2783329);
				if (Global_2783246 == Global_2783281)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_613(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(bVar3);
				if (func_762(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_612(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (func_762(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (func_614(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (func_612(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_611(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_611(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_614(bool bParam0, bool bParam1)
{
	return SYSTEM::VDIST(func_615(bParam0), func_615(bParam1));
	return 0f;
}

Vector3 func_615(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_616(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_611(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_617(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_609(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_609(PLAYER::PLAYER_ID());
		}
	}
	if (func_618(8000, 0, 0) > 0)
	{
		if (func_618(8000, 0, 0) < (iParam0 + func_609(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_618(8000, 0, 0) - func_609(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_618(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294354[iParam0];
}

int func_619()
{
	return 1;
}

int func_620(bool bParam0)
{
	return func_621(func_111(bParam0));
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_622(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 2;
}

bool func_623(bool bParam0)
{
	return Global_2689224[bParam0 /*451*/].f_119 == 7;
}

int func_624()
{
	return Global_262145.f_11264;
}

int func_625()
{
	return Global_262145.f_11266;
}

void func_626(int iParam0, var uParam1)
{
	Local_1234[iParam0 /*68*/].f_31 = uParam1;
}

void func_627(int iParam0, bool bParam1)
{
	Local_1234[iParam0 /*68*/].f_35 = bParam1;
}

void func_628(int iParam0, bool bParam1)
{
	Local_1234[iParam0 /*68*/].f_34 = bParam1;
}

void func_629(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!BitTest(bLocal_548, 5))
	{
		if (func_15(bParam0) != 0)
		{
			if (!func_257(PLAYER::PLAYER_ID()))
			{
				if (!func_125(PLAYER::PLAYER_ID()))
				{
					if (func_492(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (iParam1 <= 2)
						{
							if (func_195(NETWORK::PARTICIPANT_ID_TO_INT()) || func_492(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_656(func_670(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_655(1);
						}
						if (iVar1 > 0)
						{
							func_654();
							func_583(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_373.f_7 = (Local_373.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_643(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_642())
							{
								func_631(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_373.f_6 = (Local_373.f_6 + iVar0);
							if (!Global_262145.f_11669)
							{
								if (Local_373.f_6 > 0)
								{
									func_630(16, Local_373.f_6);
								}
							}
							Global_2727448 = iVar0;
						}
					}
					else
					{
						func_655(0);
					}
				}
				else
				{
					func_655(0);
				}
			}
			else
			{
				func_655(0);
			}
		}
		else
		{
			func_655(0);
		}
		MISC::SET_BIT(&bLocal_548, 5);
	}
}

void func_630(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23766 == 0 || Global_262145.f_23766 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23766 == 1)
			{
				Global_2810701.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810701.f_284 = iParam1;
				Global_2810701.f_285 = 0;
			}
		}
	}
}

void func_631(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_642())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_632(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_632(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_632(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_632(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_632(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_642())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_639(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_638(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_633(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_633(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_634(iParam0);
	}
}

void func_634(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_642())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_637(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_635(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_635(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_636(&(uParam0->f_14));
	func_636(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_636(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_637(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_638(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_639(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_642())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_640(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_640(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_580(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_641();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_641()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_642()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_653())
		{
			if (func_139(0))
			{
				if (!func_119(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_652()))
					{
						if (func_651() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_651());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_649(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_648("GB_BCUT_TICK1", func_652(), iVar0, 0, 0, 1);
						}
						func_647(20);
						func_644(func_652(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_644(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_762(bParam0, 0, 1))
	{
		Var0.f_0 = 657959395;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_646(bParam0);
		func_645(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_580(bParam0));
	}
}

void func_645(var uParam0, var uParam1)
{
	*uParam0 = Global_1921039.f_9;
	*uParam1 = Global_1921039.f_10;
}

var func_646(bool bParam0)
{
	return Global_1893551[bParam0 /*599*/].f_510;
}

void func_647(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810701.f_5194.f_7[iVar0]), bVar1);
}

int func_648(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_162(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_649(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_650(1);
	}
	else
	{
		iVar1 = func_650(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_650(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12655;
}

int func_651()
{
	return Global_262145.f_12654;
}

bool func_652()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_653()
{
	return func_75(PLAYER::PLAYER_ID());
}

void func_654()
{
	Global_2726789 = 1;
}

void func_655(bool bParam0)
{
	if (bParam0)
	{
		if (func_212(1))
		{
			MISC::SET_BIT(&Global_1836858, true);
		}
	}
	else if (func_212(2))
	{
		MISC::SET_BIT(&Global_1836858, 2);
	}
}

void func_656(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_551, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_11700)
	{
		iVar0 = Global_262145.f_11700;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_669() * iVar0);
	*uParam2 = (func_668() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_11453 / 60) / 1000);
		if (iVar1 > func_667())
		{
			iVar1 = func_667();
		}
		iVar2 = iLocal_550;
		if (iVar2 > func_666())
		{
			iVar2 = func_666();
		}
		*uParam1 = SYSTEM::ROUND((IntToFloat(func_659(func_665(), func_664(), iVar1, fParam0, func_663(), func_662(), func_661(), iVar2)) * Global_262145.f_11727));
		*uParam2 = (*uParam2 + SYSTEM::ROUND((IntToFloat(func_659(func_658(), func_657(), iVar1, fParam0, func_663(), func_662(), func_661(), iVar2)) * Global_262145.f_11728)));
	}
}

int func_657()
{
	return Global_262145.f_11260;
}

int func_658()
{
	return Global_262145.f_11262;
}

int func_659(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_660(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_660(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_661()
{
	return Global_262145.f_11269;
}

float func_662()
{
	return Global_262145.f_11268;
}

float func_663()
{
	return Global_262145.f_11267;
}

int func_664()
{
	return Global_262145.f_11259;
}

int func_665()
{
	return Global_262145.f_11261;
}

int func_666()
{
	return Global_262145.f_11612;
}

int func_667()
{
	return Global_262145.f_11611;
}

int func_668()
{
	return Global_262145.f_11258;
}

int func_669()
{
	return Global_262145.f_11257;
}

float func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11270;
		
		case 1:
			return Global_262145.f_11271;
		
		case 2:
			return Global_262145.f_11272;
		
		default:
	}
	return 0f;
}

int func_671(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_31(PLAYER::PLAYER_ID(), 0) || func_419(PLAYER::PLAYER_ID(), 0))
	{
		if (func_30(PLAYER::PLAYER_ID()) || func_107(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_673(sParam3, sParam4, 1);
		}
		if (func_267(26, -1))
		{
			func_295(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1836833.f_18)))
	{
		if (!func_5(&(Global_1836833.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1836833.f_18));
	}
	if (func_672())
	{
		if (bParam2)
		{
			func_673(sParam3, sParam4, 0);
		}
		if (func_267(26, -1))
		{
			func_295(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_673(sParam3, sParam4, 1);
		}
		if (func_267(26, -1))
		{
			func_295(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_672()
{
	return BitTest(Global_1836833.f_1, 0);
}

void func_673(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!BitTest(Global_1836833.f_1, 2) && !func_226(PLAYER::PLAYER_ID())) && !func_257(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_201(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836833.f_1), 2);
	}
}

int func_674()
{
	return Local_89.f_1;
}

void func_675()
{
	if (BitTest(Global_1836833.f_1, 6))
	{
		func_695();
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 6);
	}
	if (!BitTest(Global_1836833.f_1, 7))
	{
		if (BitTest(Global_1836833.f_1, 4) || BitTest(Global_1836833.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_762(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 7);
				func_236("FME_PASINT", 30000);
				func_235(1);
			}
		}
		else if (BitTest(Global_1836833.f_1, 17))
		{
			if (func_128() && !func_127())
			{
				MISC::CLEAR_BIT(&(Global_1836833.f_1), 17);
				MISC::SET_BIT(&(Global_1836833.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836833.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2810701.f_836, 2)) && func_762(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75027) && !Global_59877) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_693())
			{
				func_236("AMEV_GA_RP", -1);
				if (func_111(PLAYER::PLAYER_ID()) != 200)
				{
					func_235(1);
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_218(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (BitTest(Global_1836833.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_762(PLAYER::PLAYER_ID(), 1, 1)) && !func_126(PLAYER::PLAYER_ID(), 21)) && !func_126(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 9);
			func_692(0);
			func_236("FME_TBL00", -1);
			func_235(1);
		}
	}
	if (func_341(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836833.f_1, 18))
		{
			if ((func_126(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836833.f_1, 20)) && !BitTest(Global_1836833.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 18);
			}
		}
		else if (BitTest(Global_1836833.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_762(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_691())
			{
				MISC::CLEAR_BIT(&(Global_1836833.f_1), 18);
				MISC::SET_BIT(&(Global_1836833.f_1), 19);
				func_236("AMTT_RPAS", -1);
				func_235(1);
			}
		}
	}
	if (((((func_341(PLAYER::PLAYER_ID()) && !func_226(PLAYER::PLAYER_ID())) && func_258(PLAYER::PLAYER_ID()) != 146) && !func_257(PLAYER::PLAYER_ID())) && !func_125(PLAYER::PLAYER_ID())) && !func_685())
	{
		if (func_217(func_258(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836833.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 22);
		}
		if (func_108(PLAYER::PLAYER_ID()) || func_207())
		{
			if (!BitTest(Global_1836833.f_1, 10))
			{
				if (func_683(func_258(PLAYER::PLAYER_ID())))
				{
					if (func_212(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836833.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_215(1);
						MISC::SET_BIT(&(Global_1836833.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 10);
			}
		}
		if (func_218(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836833.f_1, 11))
			{
				if (!Global_100032.f_8)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 12);
					func_210(1);
				}
				if (!func_682())
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 13);
					func_209();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 14);
					if (func_212(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836833.f_1), 9);
					}
					func_215(1);
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 11);
			}
		}
		else
		{
			func_680(0);
		}
	}
	else
	{
		func_680(1);
	}
	func_676();
	if (func_206(func_258(PLAYER::PLAYER_ID())) && !BitTest(Global_1836833.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 21);
	}
	if (((func_128() && !func_127()) || func_126(PLAYER::PLAYER_ID(), 21)) || func_126(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
	}
}

void func_676()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_237())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_200(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836833.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836833.f_1), 26);
				}
				func_677(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836833.f_1, 26))
	{
		func_3(&(Global_1836833.f_22));
		MISC::SET_BIT(&(Global_1836833.f_1), 26);
	}
}

void func_677(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1836833.f_22)))
	{
		func_11(&(Global_1836833.f_22), 0, 0);
	}
	else if (func_5(&(Global_1836833.f_22), iParam1, 0))
	{
		if (func_482() > 0)
		{
			func_232(iParam0);
			if (func_234("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_3(&(Global_1836833.f_22));
		}
	}
	else
	{
		func_679(0);
		func_678();
	}
}

void func_678()
{
	Global_2810701.f_4599 = 0;
}

void func_679(int iParam0)
{
	Global_1644218.f_68 = iParam0;
}

void func_680(int iParam0)
{
	if ((BitTest(Global_1836833.f_1, 11) || (BitTest(Global_1836833.f_1, 10) && iParam0)) || (BitTest(Global_1836833.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836833.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 12);
			func_210(0);
		}
		if (BitTest(Global_1836833.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 13);
			func_681();
		}
		if (BitTest(Global_1836833.f_1, 14) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 14);
			func_215(0);
		}
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 22);
	}
}

void func_681()
{
	MISC::CLEAR_BIT(&(Global_2810701.f_5032), false);
}

bool func_682()
{
	return BitTest(Global_2810701.f_5032, 0);
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_218(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_207() || func_684(func_145()));
		
		default:
	}
	return 0;
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_685()
{
	if (((((((((func_318() || func_317()) || func_316()) || func_135()) || (func_313() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_688() && !func_687())) || Global_2656878) || Global_2656878.f_1 != 0) || Global_2656952 != 0) || (func_686() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_686()
{
	return Global_1057409;
}

bool func_687()
{
	return BitTest(Global_2714635.f_2, 27);
}

int func_688()
{
	if (func_690() || func_689())
	{
		return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_95 == 8;
	}
	return 0;
}

var func_689()
{
	return Global_2714635.f_735;
}

var func_690()
{
	return BitTest(Global_2714635.f_2, 11);
}

bool func_691()
{
	return Global_2810701.f_5127 != -1;
}

void func_692(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(2536, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, false);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, true);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_271(2536, iVar0, -1, 1, 0);
}

int func_693()
{
	bool bVar0;
	
	if (!func_18(&(Global_1836833.f_15)))
	{
		func_11(&(Global_1836833.f_15), 0, 0);
		Global_1836833.f_17 = 0;
	}
	else if (func_5(&(Global_1836833.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836833.f_17)))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836833.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				if (func_762(bVar0, 1, 1) && func_694(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_615(PLAYER::PLAYER_ID()), func_615(bVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836833.f_17++;
		if (Global_1836833.f_17 >= 32)
		{
			Global_1836833.f_17 = 0;
			func_3(&(Global_1836833.f_15));
		}
	}
	return 0;
}

int func_694(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_222() != 0)
	{
		return 0;
	}
	if (!func_608(bParam0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (Global_1853131[iVar0 /*888*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_695()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_357();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836833.f_1), 8);
	func_696();
}

void func_696()
{
	if (Global_1941987)
	{
		if (BitTest(Global_1941988, 0))
		{
			MISC::CLEAR_BIT(&Global_2820006, false);
		}
		if (BitTest(Global_1941988, 1))
		{
			MISC::CLEAR_BIT(&Global_2820006, true);
		}
		if (BitTest(Global_1941988, 5))
		{
			MISC::CLEAR_BIT(&Global_2820006, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1941988 = 0;
	}
	Global_1941987 = 0;
}

var func_697()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_698()))
	{
		return func_698();
	}
	return func_192();
}

var func_698()
{
	return Global_2621446.f_3;
}

bool func_699()
{
	return BitTest(Global_2621446, 11);
}

var func_700()
{
	return BitTest(Global_2621446, 4);
}

int func_701(bool bParam0)
{
	if (func_36(bParam0, 0))
	{
		return 1;
	}
	if (func_702())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[bParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_702()
{
	return BitTest(Global_2621446, 3);
}

bool func_703()
{
	return Global_1836833.f_24;
}

int func_704()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2810701.f_5029)
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_18(&(Local_89.f_1.f_1)))
	{
		iVar0 = func_705(&iVar2, &(Local_89.f_1.f_1));
		iVar1 = Global_262145.f_11453;
	}
	else if (func_18(&(Local_89.f_1.f_3)))
	{
		iVar0 = func_705(&iVar2, &(Local_89.f_1.f_3));
		iVar1 = Global_262145.f_11454;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_705(int iParam0, var uParam1)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

bool func_706(int iParam0)
{
	return !func_707(iParam0);
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6917)
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6918)
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6919)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6920)
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_708(4))
			{
				return 0;
			}
			if (func_126(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_708(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_762(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2689224[iVar0 /*451*/].f_215, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_709()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_712())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_711())
	{
		return 1;
	}
	if (func_710(159))
	{
		if (!func_318())
		{
			return 1;
		}
	}
	if (func_710(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_220() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_220()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_710(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_711()
{
	return Global_2725233;
}

bool func_712()
{
	return Global_2714635.f_693;
}

void func_713()
{
	SYSTEM::WAIT(0);
}

void func_714()
{
	int iVar0;
	
	func_199();
	func_745(141);
	func_725(141, 0, BitTest(bLocal_548, 5));
	func_303();
	func_238(0);
	if (BitTest(bLocal_548, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&bLocal_548, 16);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_81();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_722(iVar0);
		iVar0++;
	}
	func_352();
	func_720();
	func_719(0);
	func_230(29, 0);
	if (func_709())
	{
		Local_373.f_5 = 5;
	}
	else if (BitTest(bLocal_548, 24))
	{
		Local_373.f_5 = 6;
	}
	else if (Local_373.f_5 != 1)
	{
		Local_373.f_5 = 2;
	}
	Local_373.f_0 = Local_89.f_214;
	Local_373.f_1 = Local_89.f_215;
	Local_373.f_4 = Local_89.f_216;
	Local_373.f_3 = iLocal_550;
	Local_373.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_373.f_9);
	if (!Global_262145.f_11669)
	{
		if (Local_373.f_6 > 0)
		{
			if (Local_373.f_5 == 1)
			{
				func_718();
			}
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_716(Local_373, iLocal_386, iLocal_3188, iLocal_3187, func_78(func_137(0, NETWORK::PARTICIPANT_ID_TO_INT())), -1, -1);
	}
	func_715();
}

void func_715()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_716(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<15> Var14;
	struct<18> Var29;
	struct<14> Var53;
	struct<13> Var67;
	struct<14> Var80;
	struct<14> Var94;
	struct<16> Var108;
	struct<13> Var124;
	struct<14> Var137;
	struct<14> Var151;
	struct<13> Var165;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_77858)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_VEHICLE_TARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_717()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			STATS::_PLAYSTATS_FREEMODE_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var29 = { Param0 };
			Var29.f_12 = uParam12;
			Var29.f_13 = iParam13;
			Var29.f_14 = iParam14;
			Var29.f_15 = uParam15;
			Var29.f_16 = iParam16;
			Var29.f_17 = iParam17;
			STATS::_PLAYSTATS_FREEMODE_CHECKPOINT_COLLECTION(&Var29);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var53 = { Param0 };
			Var53.f_12 = uParam12;
			Var53.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var53.f_13 = (Var53.f_13 / 10f);
			}
			STATS::_PLAYSTATS_FREEMODE_CHALLENGES(&Var53);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_PLAYSTATS_FREEMODE_PENNED_IN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var67 = { Param0 };
			Var67.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_PASS_THE_PARCEL(&Var67);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var80 = { Param0 };
			Var80.f_12 = uParam12;
			Var80.f_13 = iParam13;
			STATS::_PLAYSTATS_FREEMODE_HOT_PROPERTY(&Var80);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var94 = { Param0 };
			Var94.f_12 = uParam12;
			Var94.f_13 = iParam13;
			STATS::_PLAYSTATS_FREEMODE_DEADDROP(&Var94);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var108 = { Param0 };
			Var108.f_12 = uParam12;
			Var108.f_13 = iParam13;
			Var108.f_14 = iParam14;
			Var108.f_15 = uParam15;
			STATS::_PLAYSTATS_FREEMODE_KING_OF_THE_CASTLE(&Var108);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var124 = { Param0 };
			Var124.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_CRIMINAL_DAMAGE(&Var124);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var137 = { Param0 };
				Var137.f_12 = uParam12;
				Var137.f_13 = iParam13;
				STATS::_PLAYSTATS_FREEMODE_URBAN_WARFARE(&Var137);
			}
			else
			{
				Var151 = { Param0 };
				Var151.f_12 = uParam12;
				Var151.f_13 = iParam13;
				STATS::_PLAYSTATS_FREEMODE_COMPETITIVE_URBAN_WARFARE(&Var151);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var165 = { Param0 };
			Var165.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_HUNT_BEAST(&Var165);
		}
	}
}

char* func_717()
{
	switch (Global_2727594)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_718()
{
	MISC::SET_BIT(&(Global_2810701.f_1797), 18);
}

void func_719(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2810701.f_1797, 9))
		{
			MISC::SET_BIT(&(Global_2810701.f_1797), 9);
		}
	}
	else if (BitTest(Global_2810701.f_1797, 9))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1797), 9);
	}
}

void func_720()
{
	if (Global_2676211.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_721();
	}
}

void func_721()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676211.f_6))
	{
		if (!Global_2676211.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676211 = { Var0 };
	Global_2676211.f_6 = -1;
}

void func_722(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_724(iParam0))
	{
		func_723(iVar0);
		iVar0++;
	}
	func_352();
	func_720();
	func_361(func_362(iParam0), 0, 0);
}

void func_723(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2667223.f_368[iParam0 /*12*/].f_9)
		{
			Global_2667223.f_368[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_725(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836833.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 21);
	}
	func_741();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_740(func_258(PLAYER::PLAYER_ID()));
		func_230(func_231(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && func_739(PLAYER::PLAYER_ID()) >= 12)
		{
			func_738(2548, -1);
			iVar1 = func_213(2548, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836859, false);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836859, true);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836859, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836859, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836859, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836859, 5);
			}
		}
		func_737();
		func_736();
		func_735();
		if ((!func_30(PLAYER::PLAYER_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_112())
		{
			func_348();
		}
		func_734();
		if (!BitTest(Global_1944617.f_3, 0) && !BitTest(Global_1944617.f_3, 1))
		{
			func_695();
		}
		func_733();
		MISC::CLEAR_BIT(&(Global_2810701.f_1811), 2);
		func_732();
		func_731();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_126(PLAYER::PLAYER_ID(), 21)) && !func_126(PLAYER::PLAYER_ID(), 25)) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			func_215(0);
			func_210(0);
			if (!bParam1)
			{
				func_730();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_267(26, -1))
		{
			Global_2727422 = -1;
			func_295(26, -1);
		}
	}
	if (!func_726())
	{
		Global_2783207 = 1;
	}
}

int func_726()
{
	if (((((((!func_462(PLAYER::PLAYER_ID()) && !func_443(PLAYER::PLAYER_ID())) && func_258(PLAYER::PLAYER_ID()) != 146) && !func_729()) && !func_728()) && !func_727(Global_4718592.f_138376)) && !func_187()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_727(int iParam0)
{
	return iParam0 == 57;
}

int func_728()
{
	if (Global_4718592.f_87009 == Global_262145.f_9855)
	{
		return 1;
	}
	return 0;
}

int func_729()
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_138376 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_730()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_731()
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_732()
{
	if (BitTest(Global_2810701.f_5031, 1))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_5031), true);
	}
	if (Global_2810701.f_5031 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2810701.f_5031 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2810701.f_5041 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2810701.f_5041);
				Global_2810701.f_5041 = -1;
			}
		}
	}
}

void func_733()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836833 = { Var0 };
}

void func_734()
{
	var uVar0;
	
	Global_1581335 = uVar0;
}

void func_735()
{
	Global_2810701.f_5032 = 0;
}

void func_736()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1 = 0;
	}
}

void func_737()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1893551[iVar0 /*599*/] = -1;
	}
}

void func_738(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_214(iParam1), 0);
	iVar0++;
	if (!func_272(iParam0))
	{
		func_271(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_270(iParam0, iVar0, iParam1, 1);
	}
}

int func_739(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_205.f_6;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_218(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_741()
{
	if (BitTest(Global_2810701.f_1798, 3) || BitTest(Global_2810701.f_1798, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2810701.f_1798, 5))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 5);
	}
	if (BitTest(Global_2810701.f_1798, 3))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 3);
	}
	if (BitTest(Global_2810701.f_1798, 4))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 4);
	}
	func_744(0);
	func_743(0);
	func_742(0);
}

void func_742(int iParam0)
{
	if (Global_2810701.f_4587 != iParam0)
	{
		Global_2810701.f_4587 = iParam0;
	}
}

void func_743(bool bParam0)
{
	if (Global_2810701.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2810701.f_4586 = bParam0;
	}
}

void func_744(int iParam0)
{
	if (Global_2810701.f_4584 != iParam0)
	{
		Global_2810701.f_4584 = iParam0;
	}
}

void func_745(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_746(struct<21> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_760(Param0.f_0);
	func_759(iVar3, Param0);
	func_758(0, -1, 0);
	func_756(141);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_89, 284, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_387, 161, 0);
	if (!func_755())
	{
		func_714();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_230(29, 1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = func_751();
			func_748(func_750(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_747(iVar1, iVar0);
				iVar1++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_89.f_214), &(Local_89.f_215));
		}
		Local_373.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_373.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Local_373.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_89.f_250[iVar2] = -1;
			iVar2++;
		}
		func_512(0);
	}
	else
	{
		func_714();
	}
}

void func_747(int iParam0, int iParam1)
{
	Local_89.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_748(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 470437478;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar3 = func_749(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

var func_749(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_762(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_208(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

var func_751()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_754(iVar10) && !func_752(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
	return uVar11;
}

int func_752(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_753(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8369)
		{
			if (Global_2775756.f_136[iVar0 /*2*/] == iVar1 && Global_2775756.f_136[iVar0 /*2*/].f_1 == func_750(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11459)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_11460)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_11461)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_11462)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_11463)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_11464)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_11465)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_11466)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_755()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_712())
		{
			return 0;
		}
		if (func_710(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_756(int iParam0)
{
	func_733();
	func_757();
	func_735();
	Global_1836833.f_4 = iParam0;
	Global_1836833.f_5 = iParam0;
	func_227(iParam0, -1);
	func_255(&(Global_1836833.f_18), 0, 0);
	Global_2810701.f_4657 = 0;
	Global_2726308[0] = func_27();
	Global_2726308[1] = func_27();
	Global_2726308[2] = func_27();
	Global_2726308[3] = func_27();
	Global_2726308[4] = func_27();
	func_731();
	if (!func_329(func_330()))
	{
		func_433();
	}
	if (func_128() && !func_127())
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 17);
	}
}

void func_757()
{
	var uVar0;
	
	Global_1836858 = uVar0;
}

int func_758(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_715();
			}
			else
			{
				return 0;
			}
		}
		if (!func_286())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_715();
					}
					else
					{
						return 0;
					}
				}
				if (func_712())
				{
					if (!bParam2)
					{
						func_715();
					}
					else
					{
						return 0;
					}
				}
				if (func_710(157))
				{
					if (!bParam2)
					{
						func_715();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_715();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_715();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_715();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_759(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_715();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_760(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_208(func_761(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_761(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

int func_762(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

