ccflags-$(CONFIG_ARCH_QCOM) += -I$(srctree)/drivers/gpu/msm/
ccflags-$(CONFIG_MACH_MT6885) += -I$(srctree)/drivers/misc/mediatek/include/ -I$(srctree)/drivers/misc/mediatek/base/power/include/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/include -I$(srctree)/drivers/misc/mediatek/sched/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/mt6885/ -I$(srctree)/drivers/misc/mediatek/base/power/mt6885/        \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6885/include/	\
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/ \
	-I$(srctree)/drivers/misc/mediatek/vpu/3.0/	\
	-I$(srctree)/drivers/misc/mediatek/vpu/mt6885/	\
	-I$(srctree)/drivers/misc/mediatek/video/include/ \
	-I$(srctree)/drivers/misc/mediatek/apusys/mdla/2.0/ \
	-I$(srctree)/drivers/misc/mediatek/base/power/include/gpufreq_v1/mt6885/ \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6885/include/mach/

ccflags-$(CONFIG_MACH_MT6873) += -I$(srctree)/drivers/misc/mediatek/include/ -I$(srctree)/drivers/misc/mediatek/base/power/include/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/include -I$(srctree)/drivers/misc/mediatek/sched/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/mt6885/ -I$(srctree)/drivers/misc/mediatek/base/power/mt6873/        \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6873/include/	\
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/  \
	-I$(srctree)/drivers/misc/mediatek/vpu/3.0/	\
	-I$(srctree)/drivers/misc/mediatek/vpu/mt6873/	\
	-I$(srctree)/drivers/misc/mediatek/video/include/ \
	-I$(srctree)/drivers/misc/mediatek/apusys/mdla/2.0/ \
	-I$(srctree)/drivers/misc/mediatek/base/power/include/gpufreq_v1/mt6873/ \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6873/include/mach/

ccflags-$(CONFIG_MACH_MT6853) += -I$(srctree)/drivers/misc/mediatek/include/ -I$(srctree)/drivers/misc/mediatek/base/power/include/     \
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/include -I$(srctree)/drivers/misc/mediatek/sched/    \
	-I$(srctree)/drivers/misc/mediatek/base/power/mcdi/mt6885/ -I$(srctree)/drivers/misc/mediatek/base/power/mt6853/        \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6853/include/      \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/  \
	-I$(srctree)/drivers/misc/mediatek/vpu/3.0/     \
	-I$(srctree)/drivers/misc/mediatek/vpu/mt6853/  \
	-I$(srctree)/drivers/misc/mediatek/video/include/ \
	-I$(srctree)/drivers/misc/mediatek/apusys/mdla/2.0/ \
	-I$(srctree)/drivers/misc/mediatek/base/power/include/gpufreq_v1/mt6853/ \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6853/include/mach/

ifdef CONFIG_ARCH_QCOM
hypnus_ops-y := hypnus_msm_op.o
else
hypnus_ops-y := hypnus_mtk_op.o
endif

oppo_hypnus-objs := hypnus_main.o hypnus_dev.o hypnus_sysfs.o hypnus_display.o
oppo_hypnus-objs += $(hypnus_ops-y)

obj-$(CONFIG_OPPO_HYPNUS) += oppo_hypnus.o
