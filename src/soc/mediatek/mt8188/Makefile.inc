ifeq ($(CONFIG_SOC_MEDIATEK_MT8188),y)

all-y += ../common/flash_controller.c
all-y += ../common/gpio.c ../common/gpio_op.c gpio.c
all-$(CONFIG_SPI_FLASH) += spi.c
all-y += ../common/timer.c ../common/timer_prepare.c
all-y += ../common/uart.c

bootblock-y += bootblock.c
bootblock-y += ../common/mmu_operations.c
bootblock-y += ../common/wdt.c ../common/wdt_req.c wdt.c

romstage-y += ../common/cbmem.c
romstage-y += emi.c

ramstage-y += emi.c
ramstage-y += soc.c

CPPFLAGS_common += -Isrc/soc/mediatek/mt8188/include
CPPFLAGS_common += -Isrc/soc/mediatek/common/include

$(objcbfs)/bootblock.bin: $(objcbfs)/bootblock.raw.bin
	./util/mtkheader/gen-bl-img.py mt8183 sf $< $@

endif
